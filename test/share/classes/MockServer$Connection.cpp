#include <MockServer$Connection.h>

#include <MockServer.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/InterruptedException.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/List.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

#undef CLOSED
#undef CRLF
#undef SECONDS

using $MockServer = ::MockServer;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $List = ::java::util::List;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _MockServer$Connection_FieldInfo_[] = {
	{"this$0", "LMockServer;", nullptr, $FINAL | $SYNTHETIC, $field(MockServer$Connection, this$0)},
	{"socket", "Ljava/net/Socket;", nullptr, $FINAL, $field(MockServer$Connection, socket)},
	{"id", "I", nullptr, $FINAL, $field(MockServer$Connection, id)},
	{"is", "Ljava/io/InputStream;", nullptr, $FINAL, $field(MockServer$Connection, is)},
	{"os", "Ljava/io/OutputStream;", nullptr, $FINAL, $field(MockServer$Connection, os)},
	{"incoming", "Ljava/util/concurrent/ArrayBlockingQueue;", "Ljava/util/concurrent/ArrayBlockingQueue<Ljava/lang/String;>;", $FINAL, $field(MockServer$Connection, incoming)},
	{"statusLine", "Ljava/lang/String;", nullptr, $VOLATILE, $field(MockServer$Connection, statusLine)},
	{"CRLF", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MockServer$Connection, CRLF)},
	{"CLOSED", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MockServer$Connection, CLOSED)},
	{"closed", "Z", nullptr, $VOLATILE, $field(MockServer$Connection, closed)},
	{"released", "Z", nullptr, $VOLATILE, $field(MockServer$Connection, released)},
	{}
};

$MethodInfo _MockServer$Connection_MethodInfo_[] = {
	{"<init>", "(LMockServer;Ljava/net/Socket;)V", nullptr, 0, $method(static_cast<void(MockServer$Connection::*)($MockServer*,$Socket*)>(&MockServer$Connection::init$)), "java.io.IOException"},
	{"cleanup", "()V", nullptr, $PRIVATE, $method(static_cast<void(MockServer$Connection::*)()>(&MockServer$Connection::cleanup))},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"nextInput", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"nextInput", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"poll", "()Z", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"send", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"sendHttpResponse", "(ILjava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"sendIncompleteHttpResponseBody", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"sendIncompleteHttpResponseHeaders", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MockServer$Connection_InnerClassesInfo_[] = {
	{"MockServer$Connection", "MockServer", "Connection", 0},
	{}
};

$ClassInfo _MockServer$Connection_ClassInfo_ = {
	$ACC_SUPER,
	"MockServer$Connection",
	"java.lang.Thread",
	nullptr,
	_MockServer$Connection_FieldInfo_,
	_MockServer$Connection_MethodInfo_,
	nullptr,
	nullptr,
	_MockServer$Connection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MockServer"
};

$Object* allocate$MockServer$Connection($Class* clazz) {
	return $of($alloc(MockServer$Connection));
}

$String* MockServer$Connection::CRLF = nullptr;
$String* MockServer$Connection::CLOSED = nullptr;

void MockServer$Connection::init$($MockServer* this$0, $Socket* s) {
	$set(this, this$0, this$0);
	$Thread::init$();
	this->closed = false;
	this->released = false;
	$set(this, socket, s);
	this->id = $nc(this$0->counter)->incrementAndGet();
	$set(this, is, $nc(s)->getInputStream());
	$set(this, os, s->getOutputStream());
	$set(this, incoming, $new($ArrayBlockingQueue, 100));
	setName("Server-Connection"_s);
	setDaemon(true);
}

void MockServer$Connection::run() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, buf, $new($bytes, 256));
	$var($String, s, ""_s);
	try {
		while (true) {
			int32_t n = $nc(this->is)->read(buf);
			if (n == -1) {
				cleanup();
				return;
			}
			$init($StandardCharsets);
			$var($String, s0, $new($String, buf, 0, n, $StandardCharsets::ISO_8859_1));
			$assign(s, $str({s, s0}));
			int32_t i = 0;
			while ((i = $nc(s)->indexOf(MockServer$Connection::CRLF)) != -1) {
				$var($String, s1, s->substring(0, i + 2));
				$nc($System::out)->println($$str({"Server got: "_s, $(s1->substring(0, i))}));
				if (this->statusLine == nullptr) {
					$set(this, statusLine, s1->substring(0, i));
				}
				$nc(this->incoming)->put(s1);
				if (i + 2 == s->length()) {
					$assign(s, ""_s);
					break;
				}
				$assign(s, s->substring(i + 2));
			}
		}
	} catch ($IOException& e1) {
		cleanup();
	} catch ($InterruptedException& e1) {
		cleanup();
	} catch ($Throwable& t) {
		$nc($System::out)->println($$str({"Exception: "_s, t}));
		t->printStackTrace();
		cleanup();
	}
}

$String* MockServer$Connection::toString() {
	return $str({"Server.Connection: "_s, $($nc(this->socket)->toString())});
}

void MockServer$Connection::sendHttpResponse(int32_t code, $String* body, $StringArray* headers) {
	$useLocalCurrentObjectStackCache();
	$var($String, r1, $str({"HTTP/1.1 "_s, $($Integer::toString(code)), " status"_s, MockServer$Connection::CRLF}));
	for (int32_t i = 0; i < $nc(headers)->length; i += 2) {
		$plusAssign(r1, $$str({headers->get(i), ": "_s, headers->get(i + 1), MockServer$Connection::CRLF}));
	}
	$init($StandardCharsets);
	int32_t clen = body == nullptr ? 0 : $($nc(body)->getBytes($StandardCharsets::ISO_8859_1))->length;
	$plusAssign(r1, $$str({"Content-Length: "_s, $($Integer::toString(clen)), MockServer$Connection::CRLF}));
	$plusAssign(r1, MockServer$Connection::CRLF);
	if (body != nullptr) {
		$plusAssign(r1, body);
	}
	send(r1);
}

void MockServer$Connection::sendIncompleteHttpResponseBody(int32_t code) {
	$useLocalCurrentObjectStackCache();
	$var($String, body, "Hello World Helloworld Goodbye World"_s);
	$var($String, r1, $str({"HTTP/1.1 "_s, $($Integer::toString(code)), " status"_s, MockServer$Connection::CRLF}));
	$init($StandardCharsets);
	int32_t clen = $(body->getBytes($StandardCharsets::ISO_8859_1))->length + 10;
	$plusAssign(r1, $$str({"Content-Length: "_s, $($Integer::toString(clen)), MockServer$Connection::CRLF}));
	$plusAssign(r1, MockServer$Connection::CRLF);
	if (body != nullptr) {
		$plusAssign(r1, body);
	}
	send(r1);
}

void MockServer$Connection::sendIncompleteHttpResponseHeaders(int32_t code) {
	$useLocalCurrentObjectStackCache();
	$var($String, r1, $str({"HTTP/1.1 "_s, $($Integer::toString(code)), " status"_s, MockServer$Connection::CRLF}));
	send(r1);
}

void MockServer$Connection::send($String* r) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($StandardCharsets);
		$nc(this->os)->write($($nc(r)->getBytes($StandardCharsets::ISO_8859_1)));
	} catch ($IOException& x) {
		$var($String, var$0, $$str({"MockServer["_s, $$str($nc(this->this$0->ss)->getLocalPort()), "] Failed while writing bytes: "_s}));
		$var($IOException, suppressed, $new($IOException, $$concat(var$0, $(x->getMessage()))));
		x->addSuppressed(suppressed);
		$nc($System::err)->println($$str({"WARNING: "_s, suppressed}));
		$throw(x);
	}
}

void MockServer$Connection::close() {
	$synchronized(this) {
		cleanup();
		this->closed = true;
		$nc(this->incoming)->clear();
	}
}

$String* MockServer$Connection::nextInput(int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	$var($String, result, ""_s);
	while (poll()) {
		try {
			$var($String, s, $cast($String, $nc(this->incoming)->poll(timeout, unit)));
			if (s == nullptr && this->closed) {
				return MockServer$Connection::CLOSED;
			} else {
				$plusAssign(result, s);
			}
		} catch ($InterruptedException& e) {
			return nullptr;
		}
	}
	return result;
}

$String* MockServer$Connection::nextInput() {
	$init($TimeUnit);
	return nextInput(0, $TimeUnit::SECONDS);
}

bool MockServer$Connection::poll() {
	return $nc(this->incoming)->peek() != nullptr;
}

void MockServer$Connection::cleanup() {
	if (this->released) {
		return;
	}
	$synchronized(this) {
		if (this->released) {
			return;
		}
		this->released = true;
	}
	try {
		$nc(this->socket)->close();
	} catch ($Throwable& e) {
	}
	$synchronized(this->this$0->removals) {
		$nc(this->this$0->removals)->add(this);
	}
}

MockServer$Connection::MockServer$Connection() {
}

void clinit$MockServer$Connection($Class* class$) {
	$assignStatic(MockServer$Connection::CRLF, "\r\n"_s);
	$assignStatic(MockServer$Connection::CLOSED, "C.L.O.S.E.D"_s);
}

$Class* MockServer$Connection::load$($String* name, bool initialize) {
	$loadClass(MockServer$Connection, name, initialize, &_MockServer$Connection_ClassInfo_, clinit$MockServer$Connection, allocate$MockServer$Connection);
	return class$;
}

$Class* MockServer$Connection::class$ = nullptr;