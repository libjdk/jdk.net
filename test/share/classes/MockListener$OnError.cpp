#include <MockListener$OnError.h>

#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener = ::MockListener;
using $MockListener$Invocation = ::MockListener$Invocation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $Objects = ::java::util::Objects;

$FieldInfo _MockListener$OnError_FieldInfo_[] = {
	{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/Throwable;>;", $FINAL, $field(MockListener$OnError, clazz)},
	{}
};

$MethodInfo _MockListener$OnError_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/WebSocket;Ljava/lang/Class;)V", "(Ljava/net/http/WebSocket;Ljava/lang/Class<+Ljava/lang/Throwable;>;)V", $PUBLIC, $method(static_cast<void(MockListener$OnError::*)($WebSocket*,$Class*)>(&MockListener$OnError::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MockListener$OnError_InnerClassesInfo_[] = {
	{"MockListener$OnError", "MockListener", "OnError", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MockListener$OnError_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MockListener$OnError",
	"MockListener$Invocation",
	nullptr,
	_MockListener$OnError_FieldInfo_,
	_MockListener$OnError_MethodInfo_,
	nullptr,
	nullptr,
	_MockListener$OnError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MockListener"
};

$Object* allocate$MockListener$OnError($Class* clazz) {
	return $of($alloc(MockListener$OnError));
}

void MockListener$OnError::init$($WebSocket* webSocket, $Class* clazz) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, clazz, clazz);
}

bool MockListener$OnError::equals(Object$* o) {
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
	$var(MockListener$OnError, onError, $cast(MockListener$OnError, o));
	bool var$1 = $Objects::equals(this->clazz, $nc(onError)->clazz);
	return var$1 && $Objects::equals(this->webSocket, $nc(onError)->webSocket);
}

int32_t MockListener$OnError::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		$of(this->clazz),
		$of(this->webSocket)
	}));
}

$String* MockListener$OnError::toString() {
	return $String::format("onError(%s, %s)"_s, $$new($ObjectArray, {
		$of(this->webSocket),
		$of(this->clazz)
	}));
}

MockListener$OnError::MockListener$OnError() {
}

$Class* MockListener$OnError::load$($String* name, bool initialize) {
	$loadClass(MockListener$OnError, name, initialize, &_MockListener$OnError_ClassInfo_, allocate$MockListener$OnError);
	return class$;
}

$Class* MockListener$OnError::class$ = nullptr;