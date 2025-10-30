#include <MockListener$OnPong.h>

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

$FieldInfo _MockListener$OnPong_FieldInfo_[] = {
	{"data", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(MockListener$OnPong, data)},
	{}
};

$MethodInfo _MockListener$OnPong_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(MockListener$OnPong::*)($WebSocket*,$ByteBuffer*)>(&MockListener$OnPong::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MockListener$OnPong_InnerClassesInfo_[] = {
	{"MockListener$OnPong", "MockListener", "OnPong", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MockListener$OnPong_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MockListener$OnPong",
	"MockListener$Invocation",
	nullptr,
	_MockListener$OnPong_FieldInfo_,
	_MockListener$OnPong_MethodInfo_,
	nullptr,
	nullptr,
	_MockListener$OnPong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MockListener"
};

$Object* allocate$MockListener$OnPong($Class* clazz) {
	return $of($alloc(MockListener$OnPong));
}

void MockListener$OnPong::init$($WebSocket* webSocket, $ByteBuffer* data) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, data, data);
}

bool MockListener$OnPong::equals(Object$* o) {
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
	$var(MockListener$OnPong, onPong, $cast(MockListener$OnPong, o));
	bool var$1 = $Objects::equals(this->data, $nc(onPong)->data);
	return var$1 && $Objects::equals(this->webSocket, $nc(onPong)->webSocket);
}

int32_t MockListener$OnPong::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		$of(this->data),
		$of(this->webSocket)
	}));
}

$String* MockListener$OnPong::toString() {
	return $String::format("onPong(%s, %s)"_s, $$new($ObjectArray, {
		$of(this->webSocket),
		$of(this->data)
	}));
}

MockListener$OnPong::MockListener$OnPong() {
}

$Class* MockListener$OnPong::load$($String* name, bool initialize) {
	$loadClass(MockListener$OnPong, name, initialize, &_MockListener$OnPong_ClassInfo_, allocate$MockListener$OnPong);
	return class$;
}

$Class* MockListener$OnPong::class$ = nullptr;