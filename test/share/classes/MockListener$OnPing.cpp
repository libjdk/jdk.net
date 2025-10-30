#include <MockListener$OnPing.h>

#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener = ::MockListener;
using $MockListener$Invocation = ::MockListener$Invocation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;

$FieldInfo _MockListener$OnPing_FieldInfo_[] = {
	{"data", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(MockListener$OnPing, data)},
	{}
};

$MethodInfo _MockListener$OnPing_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(MockListener$OnPing::*)($WebSocket*,$ByteBuffer*)>(&MockListener$OnPing::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MockListener$OnPing_InnerClassesInfo_[] = {
	{"MockListener$OnPing", "MockListener", "OnPing", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MockListener$OnPing_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MockListener$OnPing",
	"MockListener$Invocation",
	nullptr,
	_MockListener$OnPing_FieldInfo_,
	_MockListener$OnPing_MethodInfo_,
	nullptr,
	nullptr,
	_MockListener$OnPing_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MockListener"
};

$Object* allocate$MockListener$OnPing($Class* clazz) {
	return $of($alloc(MockListener$OnPing));
}

void MockListener$OnPing::init$($WebSocket* webSocket, $ByteBuffer* data) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, data, data);
}

bool MockListener$OnPing::equals(Object$* o) {
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
	$var(MockListener$OnPing, onPing, $cast(MockListener$OnPing, o));
	bool var$1 = $Objects::equals(this->data, $nc(onPing)->data);
	return var$1 && $Objects::equals(this->webSocket, $nc(onPing)->webSocket);
}

int32_t MockListener$OnPing::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		$of(this->data),
		$of(this->webSocket)
	}));
}

$String* MockListener$OnPing::toString() {
	return $String::format("onPing(%s, %s)"_s, $$new($ObjectArray, {
		$of(this->webSocket),
		$of(this->data)
	}));
}

MockListener$OnPing::MockListener$OnPing() {
}

$Class* MockListener$OnPing::load$($String* name, bool initialize) {
	$loadClass(MockListener$OnPing, name, initialize, &_MockListener$OnPing_ClassInfo_, allocate$MockListener$OnPing);
	return class$;
}

$Class* MockListener$OnPing::class$ = nullptr;