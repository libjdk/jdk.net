#include <MockListener.h>

#include <MockListener$Invocation.h>
#include <MockListener$OnBinary.h>
#include <MockListener$OnClose.h>
#include <MockListener$OnError.h>
#include <MockListener$OnOpen.h>
#include <MockListener$OnPing.h>
#include <MockListener$OnPong.h>
#include <MockListener$OnText.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/WebSocket.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $MockListener$Invocation = ::MockListener$Invocation;
using $MockListener$OnBinary = ::MockListener$OnBinary;
using $MockListener$OnClose = ::MockListener$OnClose;
using $MockListener$OnError = ::MockListener$OnError;
using $MockListener$OnOpen = ::MockListener$OnOpen;
using $MockListener$OnPing = ::MockListener$OnPing;
using $MockListener$OnPong = ::MockListener$OnPong;
using $MockListener$OnText = ::MockListener$OnText;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $WebSocket = ::java::net::http::WebSocket;
using $WebSocket$Listener = ::java::net::http::WebSocket$Listener;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Predicate = ::java::util::function::Predicate;

class MockListener$$Lambda$closeOrError : public $Predicate {
	$class(MockListener$$Lambda$closeOrError, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* i) override {
		 return MockListener::closeOrError($cast($MockListener$Invocation, i));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MockListener$$Lambda$closeOrError>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MockListener$$Lambda$closeOrError::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MockListener$$Lambda$closeOrError::*)()>(&MockListener$$Lambda$closeOrError::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MockListener$$Lambda$closeOrError::classInfo$ = {
	$PUBLIC | $FINAL,
	"MockListener$$Lambda$closeOrError",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* MockListener$$Lambda$closeOrError::load$($String* name, bool initialize) {
	$loadClass(MockListener$$Lambda$closeOrError, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MockListener$$Lambda$closeOrError::class$ = nullptr;

$FieldInfo _MockListener_FieldInfo_[] = {
	{"bufferSize", "J", nullptr, $PRIVATE | $FINAL, $field(MockListener, bufferSize)},
	{"count", "J", nullptr, $PRIVATE, $field(MockListener, count)},
	{"invocations", "Ljava/util/List;", "Ljava/util/List<LMockListener$Invocation;>;", $PRIVATE | $FINAL, $field(MockListener, invocations$)},
	{"lastCall", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<*>;", $PRIVATE | $FINAL, $field(MockListener, lastCall)},
	{"collectUntil", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<-LMockListener$Invocation;>;", $PRIVATE | $FINAL, $field(MockListener, collectUntil)},
	{}
};

$MethodInfo _MockListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MockListener::*)()>(&MockListener::init$))},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(MockListener::*)(int64_t)>(&MockListener::init$))},
	{"<init>", "(Ljava/util/function/Predicate;)V", "(Ljava/util/function/Predicate<-LMockListener$Invocation;>;)V", $PUBLIC, $method(static_cast<void(MockListener::*)($Predicate*)>(&MockListener::init$))},
	{"<init>", "(JLjava/util/function/Predicate;)V", "(JLjava/util/function/Predicate<-LMockListener$Invocation;>;)V", $PUBLIC, $method(static_cast<void(MockListener::*)(int64_t,$Predicate*)>(&MockListener::init$))},
	{"closeOrError", "(LMockListener$Invocation;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MockListener$Invocation*)>(&MockListener::closeOrError))},
	{"fullCopy", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ByteBuffer*(*)($ByteBuffer*)>(&MockListener::fullCopy))},
	{"invocations", "()Ljava/util/List;", "()Ljava/util/List<LMockListener$Invocation;>;", $PUBLIC},
	{"invocationsSoFar", "()Ljava/util/List;", "()Ljava/util/List<LMockListener$Invocation;>;", $PUBLIC},
	{"onBinary", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC},
	{"onBinary0", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED},
	{"onClose", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC},
	{"onClose0", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;ILjava/lang/String;)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED},
	{"onError", "(Ljava/net/http/WebSocket;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onError0", "(Ljava/net/http/WebSocket;Ljava/lang/Throwable;)V", nullptr, $PROTECTED},
	{"onOpen", "(Ljava/net/http/WebSocket;)V", nullptr, $PUBLIC},
	{"onOpen0", "(Ljava/net/http/WebSocket;)V", nullptr, $PROTECTED},
	{"onPing", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC},
	{"onPing0", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED},
	{"onPong", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC},
	{"onPong0", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED},
	{"onText", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC},
	{"onText0", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage<*>;", $PROTECTED},
	{"replenish", "(Ljava/net/http/WebSocket;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MockListener_InnerClassesInfo_[] = {
	{"java.net.http.WebSocket$Listener", "java.net.http.WebSocket", "Listener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"MockListener$OnError", "MockListener", "OnError", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$OnClose", "MockListener", "OnClose", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$OnPong", "MockListener", "OnPong", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$OnPing", "MockListener", "OnPing", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$OnBinary", "MockListener", "OnBinary", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$OnText", "MockListener", "OnText", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$OnOpen", "MockListener", "OnOpen", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MockListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MockListener",
	"java.lang.Object",
	"java.net.http.WebSocket$Listener",
	_MockListener_FieldInfo_,
	_MockListener_MethodInfo_,
	nullptr,
	nullptr,
	_MockListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MockListener$OnError,MockListener$OnClose,MockListener$OnPong,MockListener$OnPing,MockListener$OnBinary,MockListener$OnText,MockListener$OnOpen,MockListener$Invocation"
};

$Object* allocate$MockListener($Class* clazz) {
	return $of($alloc(MockListener));
}

void MockListener::init$() {
	MockListener::init$(1, static_cast<$Predicate*>($$new(MockListener$$Lambda$closeOrError)));
}

void MockListener::init$(int64_t bufferSize) {
	MockListener::init$(bufferSize, static_cast<$Predicate*>($$new(MockListener$$Lambda$closeOrError)));
}

void MockListener::init$($Predicate* collectUntil) {
	MockListener::init$(1, collectUntil);
}

void MockListener::init$(int64_t bufferSize, $Predicate* collectUntil) {
	$set(this, invocations$, $new($ArrayList));
	$set(this, lastCall, $new($CompletableFuture));
	if (bufferSize < 1) {
		$throwNew($IllegalArgumentException);
	}
	$Objects::requireNonNull(collectUntil);
	this->bufferSize = bufferSize;
	$set(this, collectUntil, collectUntil);
}

bool MockListener::closeOrError($MockListener$Invocation* i) {
	$init(MockListener);
	return $instanceOf($MockListener$OnClose, i) || $instanceOf($MockListener$OnError, i);
}

void MockListener::onOpen($WebSocket* webSocket) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("onOpen(%s)%n"_s, $$new($ObjectArray, {$of(webSocket)}));
	$var($MockListener$OnOpen, inv, $new($MockListener$OnOpen, webSocket));
	$synchronized(this->invocations$) {
		$nc(this->invocations$)->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	onOpen0(webSocket);
}

void MockListener::onOpen0($WebSocket* webSocket) {
	$useLocalCurrentObjectStackCache();
	this->count = this->bufferSize - this->bufferSize / 2;
	$nc($System::out)->printf("request(%d)%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(this->bufferSize)))}));
	$nc(webSocket)->request(this->bufferSize);
}

$CompletionStage* MockListener::onText($WebSocket* webSocket, $CharSequence* message, bool last) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("onText(%s, message.length=%s, %s)%n"_s, $$new($ObjectArray, {
		$of(webSocket),
		$($of($Integer::valueOf($nc(message)->length()))),
		$($of($Boolean::valueOf(last)))
	}));
	$var($MockListener$OnText, inv, $new($MockListener$OnText, webSocket, $($nc(message)->toString()), last));
	$synchronized(this->invocations$) {
		$nc(this->invocations$)->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onText0(webSocket, message, last);
}

$CompletionStage* MockListener::onText0($WebSocket* webSocket, $CharSequence* message, bool last) {
	replenish(webSocket);
	return nullptr;
}

$CompletionStage* MockListener::onBinary($WebSocket* webSocket, $ByteBuffer* message, bool last) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("onBinary(%s, %s, %s)%n"_s, $$new($ObjectArray, {
		$of(webSocket),
		$of(message),
		$($of($Boolean::valueOf(last)))
	}));
	$var($MockListener$OnBinary, inv, $new($MockListener$OnBinary, webSocket, $(fullCopy(message)), last));
	$synchronized(this->invocations$) {
		$nc(this->invocations$)->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onBinary0(webSocket, message, last);
}

$CompletionStage* MockListener::onBinary0($WebSocket* webSocket, $ByteBuffer* message, bool last) {
	replenish(webSocket);
	return nullptr;
}

$CompletionStage* MockListener::onPing($WebSocket* webSocket, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("onPing(%s, %s)%n"_s, $$new($ObjectArray, {
		$of(webSocket),
		$of(message)
	}));
	$var($MockListener$OnPing, inv, $new($MockListener$OnPing, webSocket, $(fullCopy(message))));
	$synchronized(this->invocations$) {
		$nc(this->invocations$)->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onPing0(webSocket, message);
}

$CompletionStage* MockListener::onPing0($WebSocket* webSocket, $ByteBuffer* message) {
	replenish(webSocket);
	return nullptr;
}

$CompletionStage* MockListener::onPong($WebSocket* webSocket, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("onPong(%s, %s)%n"_s, $$new($ObjectArray, {
		$of(webSocket),
		$of(message)
	}));
	$var($MockListener$OnPong, inv, $new($MockListener$OnPong, webSocket, $(fullCopy(message))));
	$synchronized(this->invocations$) {
		$nc(this->invocations$)->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onPong0(webSocket, message);
}

$CompletionStage* MockListener::onPong0($WebSocket* webSocket, $ByteBuffer* message) {
	replenish(webSocket);
	return nullptr;
}

$CompletionStage* MockListener::onClose($WebSocket* webSocket, int32_t statusCode, $String* reason) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("onClose(%s, %s, %s)%n"_s, $$new($ObjectArray, {
		$of(webSocket),
		$($of($Integer::valueOf(statusCode))),
		$of(reason)
	}));
	$var($MockListener$OnClose, inv, $new($MockListener$OnClose, webSocket, statusCode, reason));
	$synchronized(this->invocations$) {
		$nc(this->invocations$)->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	return onClose0(webSocket, statusCode, reason);
}

$CompletionStage* MockListener::onClose0($WebSocket* webSocket, int32_t statusCode, $String* reason) {
	return nullptr;
}

void MockListener::onError($WebSocket* webSocket, $Throwable* error) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("onError(%s, %s)%n"_s, $$new($ObjectArray, {
		$of(webSocket),
		$of(error)
	}));
	$nc(error)->printStackTrace($System::out);
	$var($MockListener$OnError, inv, $new($MockListener$OnError, webSocket, error == nullptr ? ($Class*)nullptr : $of(error)->getClass()));
	$synchronized(this->invocations$) {
		$nc(this->invocations$)->add(inv);
	}
	if ($nc(this->collectUntil)->test(inv)) {
		$nc(this->lastCall)->complete(nullptr);
	}
	onError0(webSocket, error);
}

void MockListener::onError0($WebSocket* webSocket, $Throwable* error) {
}

$List* MockListener::invocationsSoFar() {
	$synchronized(this->invocations$) {
		return $new($ArrayList, static_cast<$Collection*>(this->invocations$));
	}
}

$List* MockListener::invocations() {
	$nc(this->lastCall)->join();
	$synchronized(this->invocations$) {
		return $new($ArrayList, static_cast<$Collection*>(this->invocations$));
	}
}

void MockListener::replenish($WebSocket* webSocket) {
	$useLocalCurrentObjectStackCache();
	if (--this->count <= 0) {
		this->count = this->bufferSize - this->bufferSize / 2;
		$nc(webSocket)->request(this->count);
		$nc($System::out)->printf("request(%d)%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(this->count)))}));
	}
}

$ByteBuffer* MockListener::fullCopy($ByteBuffer* src) {
	$init(MockListener);
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, copy, $ByteBuffer::allocate($nc(src)->capacity()));
	int32_t p = $nc(src)->position();
	int32_t l = src->limit();
	src->clear();
	$nc($($nc($($nc(copy)->put(src)))->position(p)))->limit(l);
	$nc($(src->position(p)))->limit(l);
	return copy;
}

MockListener::MockListener() {
}

$Class* MockListener::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MockListener$$Lambda$closeOrError::classInfo$.name)) {
			return MockListener$$Lambda$closeOrError::load$(name, initialize);
		}
	}
	$loadClass(MockListener, name, initialize, &_MockListener_ClassInfo_, allocate$MockListener);
	return class$;
}

$Class* MockListener::class$ = nullptr;