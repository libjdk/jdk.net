#include <MockServer.h>

#include <MockServer$Connection.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InterruptedException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/net/ServerSocketFactory.h>
#include <javax/net/ssl/SSLServerSocket.h>
#include <jcpp.h>

using $MockServer$Connection = ::MockServer$Connection;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;
using $SSLServerSocket = ::javax::net::ssl::SSLServerSocket;

$FieldInfo _MockServer_FieldInfo_[] = {
	{"ss", "Ljava/net/ServerSocket;", nullptr, $FINAL, $field(MockServer, ss)},
	{"sockets", "Ljava/util/List;", "Ljava/util/List<LMockServer$Connection;>;", $PRIVATE | $FINAL, $field(MockServer, sockets)},
	{"removals", "Ljava/util/List;", "Ljava/util/List<LMockServer$Connection;>;", $PRIVATE | $FINAL, $field(MockServer, removals)},
	{"additions", "Ljava/util/List;", "Ljava/util/List<LMockServer$Connection;>;", $PRIVATE | $FINAL, $field(MockServer, additions)},
	{"counter", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, 0, $field(MockServer, counter)},
	{"root", "Ljava/lang/String;", nullptr, $FINAL, $field(MockServer, root)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(MockServer, closed)},
	{}
};

$MethodInfo _MockServer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ILjavax/net/ServerSocketFactory;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MockServer::*)(int32_t,$ServerSocketFactory*,$String*)>(&MockServer::init$)), "java.io.IOException"},
	{"<init>", "(ILjavax/net/ServerSocketFactory;)V", nullptr, 0, $method(static_cast<void(MockServer::*)(int32_t,$ServerSocketFactory*)>(&MockServer::init$)), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(MockServer::*)(int32_t)>(&MockServer::init$)), "java.io.IOException"},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MockServer::*)()>(&MockServer::init$)), "java.io.IOException"},
	{"activity", "()LMockServer$Connection;", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"doRemovalsAndAdditions", "()V", nullptr, $PRIVATE, $method(static_cast<void(MockServer::*)()>(&MockServer::doRemovalsAndAdditions))},
	{"getURL", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"port", "()I", nullptr, 0},
	{"reset", "()V", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"serverAuthority", "()Ljava/lang/String;", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MockServer_InnerClassesInfo_[] = {
	{"MockServer$Connection", "MockServer", "Connection", 0},
	{}
};

$ClassInfo _MockServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MockServer",
	"java.lang.Thread",
	"java.io.Closeable",
	_MockServer_FieldInfo_,
	_MockServer_MethodInfo_,
	nullptr,
	nullptr,
	_MockServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MockServer$Connection"
};

$Object* allocate$MockServer($Class* clazz) {
	return $of($alloc(MockServer));
}

$Object* MockServer::clone() {
	 return this->$Thread::clone();
}

$String* MockServer::toString() {
	 return this->$Thread::toString();
}

int32_t MockServer::hashCode() {
	 return this->$Thread::hashCode();
}

bool MockServer::equals(Object$* arg0) {
	 return this->$Thread::equals(arg0);
}

void MockServer::finalize() {
	this->$Thread::finalize();
}

$MockServer$Connection* MockServer::activity() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 80 * 100; ++i) {
		doRemovalsAndAdditions();
		{
			$var($Iterator, i$, $nc(this->sockets)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MockServer$Connection, c, $cast($MockServer$Connection, i$->next()));
				{
					if ($nc(c)->poll()) {
						if (this->root != nullptr) {
							if (!$nc(c->statusLine)->contains(this->root)) {
								$nc($System::out)->println($$str({"Bad statusLine: "_s, c->statusLine, " closing connection"_s}));
								c->close();
								continue;
							}
						}
						return c;
					}
				}
			}
		}
		try {
			$Thread::sleep(250);
		} catch ($InterruptedException& e) {
			e->printStackTrace();
		}
	}
	return nullptr;
}

void MockServer::doRemovalsAndAdditions() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->removals) {
		$var($Iterator, i, $nc(this->removals)->iterator());
		while ($nc(i)->hasNext()) {
			$var($MockServer$Connection, c, $cast($MockServer$Connection, i->next()));
			$nc($System::out)->println($$str({"socket removed: "_s, c}));
			$nc(this->sockets)->remove($of(c));
		}
		$nc(this->removals)->clear();
	}
	$synchronized(this->additions) {
		$var($Iterator, i, $nc(this->additions)->iterator());
		while ($nc(i)->hasNext()) {
			$var($MockServer$Connection, c, $cast($MockServer$Connection, i->next()));
			$nc($System::out)->println($$str({"socket added: "_s, c}));
			$nc(this->sockets)->add(c);
		}
		$nc(this->additions)->clear();
	}
}

void MockServer::reset() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->sockets)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MockServer$Connection, c, $cast($MockServer$Connection, i$->next()));
			{
				$nc(c)->close();
			}
		}
	}
}

void MockServer::init$(int32_t port, $ServerSocketFactory* factory, $String* root) {
	$useLocalCurrentObjectStackCache();
	$Thread::init$();
	$set(this, counter, $new($AtomicInteger, 0));
	$set(this, ss, $nc(factory)->createServerSocket());
	$nc(this->ss)->setReuseAddress(false);
	$nc(this->ss)->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$set(this, root, root);
	$set(this, sockets, $Collections::synchronizedList($$new($LinkedList)));
	$set(this, removals, $new($LinkedList));
	$set(this, additions, $new($LinkedList));
	setName("Test-Server"_s);
	setDaemon(true);
}

void MockServer::init$(int32_t port, $ServerSocketFactory* factory) {
	MockServer::init$(port, factory, "/foo/"_s);
}

void MockServer::init$(int32_t port) {
	MockServer::init$(port, $($ServerSocketFactory::getDefault()));
}

void MockServer::init$() {
	MockServer::init$(0);
}

int32_t MockServer::port() {
	return $nc(this->ss)->getLocalPort();
}

$String* MockServer::serverAuthority() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc($($InetAddress::getLoopbackAddress()))->getHostName()), ":"_s}));
	return $concat(var$0, $$str(port()));
}

$String* MockServer::getURL() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SSLServerSocket, this->ss)) {
		return $str({"https://"_s, $(serverAuthority()), "/foo/"_s});
	} else {
		return $str({"http://"_s, $(serverAuthority()), "/foo/"_s});
	}
}

void MockServer::close() {
	$useLocalCurrentObjectStackCache();
	this->closed = true;
	try {
		$nc(this->ss)->close();
	} catch ($Throwable& e) {
		e->printStackTrace();
	}
	{
		$var($Iterator, i$, $nc(this->sockets)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MockServer$Connection, c, $cast($MockServer$Connection, i$->next()));
			{
				$nc(c)->close();
			}
		}
	}
}

void MockServer::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				while (!this->closed) {
					try {
						$nc($System::out)->println("Server waiting for connection"_s);
						$var($Socket, s, $nc(this->ss)->accept());
						$var($MockServer$Connection, c, $new($MockServer$Connection, this, s));
						c->start();
						$nc($System::out)->println($$str({"Server got new connection: "_s, c}));
						$synchronized(this->additions) {
							$nc(this->additions)->add(c);
						}
					} catch ($IOException& e) {
						if (this->closed) {
							return;
						}
						e->printStackTrace($System::out);
					}
				}
			} catch ($Throwable& t) {
				$nc($System::out)->println($$str({"Unexpected exception in accept loop: "_s, t}));
				t->printStackTrace($System::out);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			if (this->closed) {
				$nc($System::out)->println("Server closed: exiting accept loop"_s);
			} else {
				$nc($System::out)->println("Server not closed: exiting accept loop and closing"_s);
				close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

MockServer::MockServer() {
}

$Class* MockServer::load$($String* name, bool initialize) {
	$loadClass(MockServer, name, initialize, &_MockServer_ClassInfo_, allocate$MockServer);
	return class$;
}

$Class* MockServer::class$ = nullptr;