#include <MockListener$OnOpen.h>

#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener = ::MockListener;
using $MockListener$Invocation = ::MockListener$Invocation;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $Objects = ::java::util::Objects;

$MethodInfo _MockListener$OnOpen_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/WebSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(MockListener$OnOpen::*)($WebSocket*)>(&MockListener$OnOpen::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MockListener$OnOpen_InnerClassesInfo_[] = {
	{"MockListener$OnOpen", "MockListener", "OnOpen", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MockListener$OnOpen_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MockListener$OnOpen",
	"MockListener$Invocation",
	nullptr,
	nullptr,
	_MockListener$OnOpen_MethodInfo_,
	nullptr,
	nullptr,
	_MockListener$OnOpen_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MockListener"
};

$Object* allocate$MockListener$OnOpen($Class* clazz) {
	return $of($alloc(MockListener$OnOpen));
}

void MockListener$OnOpen::init$($WebSocket* webSocket) {
	$MockListener$Invocation::init$(webSocket);
}

bool MockListener$OnOpen::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	bool var$0 = o == nullptr;
	if (!var$0) {
		var$0 = $of(this)->getClass() != $nc($of(o))->getClass();
	}
	if (var$0) {
		return false;
	}
	$var($MockListener$Invocation, that, $cast($MockListener$Invocation, o));
	return $Objects::equals(this->webSocket, $nc(that)->webSocket);
}

int32_t MockListener$OnOpen::hashCode() {
	return $Objects::hashCode(this->webSocket);
}

$String* MockListener$OnOpen::toString() {
	return $String::format("onOpen(%s)"_s, $$new($ObjectArray, {$of(this->webSocket)}));
}

MockListener$OnOpen::MockListener$OnOpen() {
}

$Class* MockListener$OnOpen::load$($String* name, bool initialize) {
	$loadClass(MockListener$OnOpen, name, initialize, &_MockListener$OnOpen_ClassInfo_, allocate$MockListener$OnOpen);
	return class$;
}

$Class* MockListener$OnOpen::class$ = nullptr;