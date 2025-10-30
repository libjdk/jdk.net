#include <MockListener$OnClose.h>

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
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $Objects = ::java::util::Objects;

$FieldInfo _MockListener$OnClose_FieldInfo_[] = {
	{"statusCode", "I", nullptr, $FINAL, $field(MockListener$OnClose, statusCode)},
	{"reason", "Ljava/lang/String;", nullptr, $FINAL, $field(MockListener$OnClose, reason)},
	{}
};

$MethodInfo _MockListener$OnClose_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/WebSocket;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MockListener$OnClose::*)($WebSocket*,int32_t,$String*)>(&MockListener$OnClose::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MockListener$OnClose_InnerClassesInfo_[] = {
	{"MockListener$OnClose", "MockListener", "OnClose", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MockListener$OnClose_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MockListener$OnClose",
	"MockListener$Invocation",
	nullptr,
	_MockListener$OnClose_FieldInfo_,
	_MockListener$OnClose_MethodInfo_,
	nullptr,
	nullptr,
	_MockListener$OnClose_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MockListener"
};

$Object* allocate$MockListener$OnClose($Class* clazz) {
	return $of($alloc(MockListener$OnClose));
}

void MockListener$OnClose::init$($WebSocket* webSocket, int32_t statusCode, $String* reason) {
	$MockListener$Invocation::init$(webSocket);
	this->statusCode = statusCode;
	$set(this, reason, reason);
}

bool MockListener$OnClose::equals(Object$* o) {
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
	$var(MockListener$OnClose, onClose, $cast(MockListener$OnClose, o));
	bool var$1 = this->statusCode == $nc(onClose)->statusCode && $Objects::equals(this->reason, onClose->reason);
	return var$1 && $Objects::equals(this->webSocket, onClose->webSocket);
}

int32_t MockListener$OnClose::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$($of($Integer::valueOf(this->statusCode))),
		$of(this->reason),
		$of(this->webSocket)
	}));
}

$String* MockListener$OnClose::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("onClose(%s, %s, %s)"_s, $$new($ObjectArray, {
		$of(this->webSocket),
		$($of($Integer::valueOf(this->statusCode))),
		$of(this->reason)
	}));
}

MockListener$OnClose::MockListener$OnClose() {
}

$Class* MockListener$OnClose::load$($String* name, bool initialize) {
	$loadClass(MockListener$OnClose, name, initialize, &_MockListener$OnClose_ClassInfo_, allocate$MockListener$OnClose);
	return class$;
}

$Class* MockListener$OnClose::class$ = nullptr;