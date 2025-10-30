#include <HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream.h>

#include <HttpInputStreamTest$HttpInputStreamHandler.h>
#include <HttpInputStreamTest.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

#undef DEBUG
#undef LAST_BUFFER
#undef LAST_LIST

using $HttpInputStreamTest = ::HttpInputStreamTest;
using $HttpInputStreamTest$HttpInputStreamHandler = ::HttpInputStreamTest$HttpInputStreamHandler;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$FieldInfo _HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, $assertionsDisabled)},
	{"LAST_BUFFER", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, LAST_BUFFER)},
	{"LAST_LIST", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, LAST_LIST)},
	{"buffers", "Ljava/util/concurrent/BlockingQueue;", "Ljava/util/concurrent/BlockingQueue<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;", $PRIVATE | $FINAL, $field(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, buffers)},
	{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PRIVATE | $VOLATILE, $field(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, subscription)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, closed)},
	{"failed", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $VOLATILE, $field(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, failed)},
	{"currentListItr", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/ByteBuffer;>;", $PRIVATE | $VOLATILE, $field(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, currentListItr)},
	{"currentBuffer", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $VOLATILE, $field(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, currentBuffer)},
	{}
};

$MethodInfo _HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::*)()>(&HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::init$))},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::*)(int32_t)>(&HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"current", "()Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::*)()>(&HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::current)), "java.io.IOException"},
	{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<Ljava/io/InputStream;>;", $PUBLIC},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_InnerClassesInfo_[] = {
	{"HttpInputStreamTest$HttpInputStreamHandler", "HttpInputStreamTest", "HttpInputStreamHandler", $PUBLIC | $STATIC},
	{"HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream", "HttpInputStreamTest$HttpInputStreamHandler", "HttpResponseInputStream", $PRIVATE | $STATIC},
	{"java.net.http.HttpResponse$BodySubscriber", "java.net.http.HttpResponse", "BodySubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream",
	"java.io.InputStream",
	"java.net.http.HttpResponse$BodySubscriber",
	_HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_FieldInfo_,
	_HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_MethodInfo_,
	"Ljava/io/InputStream;Ljava/net/http/HttpResponse$BodySubscriber<Ljava/io/InputStream;>;",
	nullptr,
	_HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HttpInputStreamTest"
};

$Object* allocate$HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream($Class* clazz) {
	return $of($alloc(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream));
}

int32_t HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::hashCode() {
	 return this->$InputStream::hashCode();
}

bool HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::equals(Object$* arg0) {
	 return this->$InputStream::equals(arg0);
}

$Object* HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::clone() {
	 return this->$InputStream::clone();
}

$String* HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::toString() {
	 return this->$InputStream::toString();
}

void HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::finalize() {
	this->$InputStream::finalize();
}

bool HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::$assertionsDisabled = false;
$ByteBuffer* HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_BUFFER = nullptr;
$List* HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_LIST = nullptr;

void HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::init$() {
	HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::init$(1);
}

void HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::init$(int32_t maxBuffers) {
	$InputStream::init$();
	int32_t capacity = maxBuffers <= 0 ? 1 : maxBuffers;
	$set(this, buffers, $new($ArrayBlockingQueue, capacity + 1));
}

$CompletionStage* HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::getBody() {
	return $CompletableFuture::completedStage(this);
}

$ByteBuffer* HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::current() {
	$useLocalCurrentObjectStackCache();
	while (this->currentBuffer == nullptr || !$nc(this->currentBuffer)->hasRemaining()) {
		if (this->closed || this->failed != nullptr) {
			$throwNew($IOException, "closed"_s, this->failed);
		}
		if (this->currentBuffer == HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_BUFFER) {
			break;
		}
		try {
			if (this->currentListItr == nullptr || !$nc(this->currentListItr)->hasNext()) {
				$init($HttpInputStreamTest);
				if ($HttpInputStreamTest::DEBUG) {
					$nc($System::err)->println("Taking list of Buffers"_s);
				}
				$var($List, lb, $cast($List, $nc(this->buffers)->take()));
				$set(this, currentListItr, $nc(lb)->iterator());
				if ($HttpInputStreamTest::DEBUG) {
					$nc($System::err)->println("List of Buffers Taken"_s);
				}
				if (this->closed || this->failed != nullptr) {
					$throwNew($IOException, "closed"_s, this->failed);
				}
				if (lb == HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_LIST) {
					$set(this, currentListItr, nullptr);
					$set(this, currentBuffer, HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_BUFFER);
					break;
				}
				$var($Flow$Subscription, s, this->subscription);
				if (s != nullptr) {
					s->request(1);
				}
			}
			if (!HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::$assertionsDisabled && !(this->currentListItr != nullptr)) {
				$throwNew($AssertionError);
			}
			if (!HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::$assertionsDisabled && !$nc(this->currentListItr)->hasNext()) {
				$throwNew($AssertionError);
			}
			$init($HttpInputStreamTest);
			if ($HttpInputStreamTest::DEBUG) {
				$nc($System::err)->println("Next Buffer"_s);
			}
			$set(this, currentBuffer, $cast($ByteBuffer, $nc(this->currentListItr)->next()));
		} catch ($InterruptedException& ex) {
		}
	}
	if (!HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::$assertionsDisabled && !(this->currentBuffer == HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_BUFFER || $nc(this->currentBuffer)->hasRemaining())) {
		$throwNew($AssertionError);
	}
	return this->currentBuffer;
}

int32_t HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::read($bytes* bytes, int32_t off, int32_t len) {
	$var($ByteBuffer, buffer, nullptr);
	if (($assign(buffer, current())) == HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_BUFFER) {
		return -1;
	}
	int32_t read = $Math::min($nc(buffer)->remaining(), len);
	if (!HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::$assertionsDisabled && !(read > 0 && read <= $nc(buffer)->remaining())) {
		$throwNew($AssertionError);
	}
	$nc(buffer)->get(bytes, off, read);
	return read;
}

int32_t HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::read() {
	$var($ByteBuffer, buffer, nullptr);
	if (($assign(buffer, current())) == HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_BUFFER) {
		return -1;
	}
	return (int32_t)($nc(buffer)->get() & (uint32_t)255);
}

void HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::onSubscribe($Flow$Subscription* s) {
	$useLocalCurrentObjectStackCache();
	if (this->subscription != nullptr) {
		$nc(s)->cancel();
		return;
	}
	$set(this, subscription, s);
	if (!HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::$assertionsDisabled && !($nc(this->buffers)->remainingCapacity() > 1)) {
		$throwNew($AssertionError);
	}
	$init($HttpInputStreamTest);
	if ($HttpInputStreamTest::DEBUG) {
		$nc($System::err)->println($$str({"onSubscribe: requesting "_s, $$str($Math::max(1, $nc(this->buffers)->remainingCapacity() - 1))}));
	}
	$nc(s)->request($Math::max(1, $nc(this->buffers)->remainingCapacity() - 1));
}

void HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::onNext($List* t) {
	try {
		$init($HttpInputStreamTest);
		if ($HttpInputStreamTest::DEBUG) {
			$nc($System::err)->println("next item received"_s);
		}
		if (!$nc(this->buffers)->offer(t)) {
			$throwNew($IllegalStateException, "queue is full"_s);
		}
		if ($HttpInputStreamTest::DEBUG) {
			$nc($System::err)->println("item offered"_s);
		}
	} catch ($Exception& ex) {
		$set(this, failed, ex);
		try {
			close();
		} catch ($IOException& ex1) {
		}
	}
}

void HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::onError($Throwable* thrwbl) {
	$set(this, subscription, nullptr);
	$set(this, failed, thrwbl);
}

void HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::onComplete() {
	$set(this, subscription, nullptr);
	onNext(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_LIST);
}

void HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::close() {
	$synchronized(this) {
		if (this->closed) {
			return;
		}
		this->closed = true;
	}
	$var($Flow$Subscription, s, this->subscription);
	$set(this, subscription, nullptr);
	if (s != nullptr) {
		s->cancel();
	}
	$InputStream::close();
}

void HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::onNext(Object$* t) {
	this->onNext($cast($List, t));
}

void clinit$HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream($Class* class$) {
	$load($HttpInputStreamTest);
	HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::$assertionsDisabled = !$HttpInputStreamTest::class$->desiredAssertionStatus();
	$assignStatic(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_BUFFER, $ByteBuffer::wrap($$new($bytes, 0)));
	$assignStatic(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_LIST, $List::of($of(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::LAST_BUFFER)));
}

HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream() {
}

$Class* HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::load$($String* name, bool initialize) {
	$loadClass(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, name, initialize, &_HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_ClassInfo_, clinit$HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, allocate$HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream);
	return class$;
}

$Class* HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream::class$ = nullptr;