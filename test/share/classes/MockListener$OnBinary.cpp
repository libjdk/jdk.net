#include <MockListener$OnBinary.h>

#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener = ::MockListener;
using $MockListener$Invocation = ::MockListener$Invocation;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;

$FieldInfo _MockListener$OnBinary_FieldInfo_[] = {
	{"data", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(MockListener$OnBinary, data)},
	{"last", "Z", nullptr, $FINAL, $field(MockListener$OnBinary, last)},
	{}
};

$MethodInfo _MockListener$OnBinary_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/WebSocket;Ljava/nio/ByteBuffer;Z)V", nullptr, $PUBLIC, $method(static_cast<void(MockListener$OnBinary::*)($WebSocket*,$ByteBuffer*,bool)>(&MockListener$OnBinary::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MockListener$OnBinary_InnerClassesInfo_[] = {
	{"MockListener$OnBinary", "MockListener", "OnBinary", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MockListener$OnBinary_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MockListener$OnBinary",
	"MockListener$Invocation",
	nullptr,
	_MockListener$OnBinary_FieldInfo_,
	_MockListener$OnBinary_MethodInfo_,
	nullptr,
	nullptr,
	_MockListener$OnBinary_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MockListener"
};

$Object* allocate$MockListener$OnBinary($Class* clazz) {
	return $of($alloc(MockListener$OnBinary));
}

void MockListener$OnBinary::init$($WebSocket* webSocket, $ByteBuffer* data, bool last) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, data, data);
	this->last = last;
}

bool MockListener$OnBinary::equals(Object$* o) {
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
	$var(MockListener$OnBinary, onBinary, $cast(MockListener$OnBinary, o));
	bool var$1 = $Objects::equals(this->data, $nc(onBinary)->data) && this->last == $nc(onBinary)->last;
	return var$1 && $Objects::equals(this->webSocket, onBinary->webSocket);
}

int32_t MockListener$OnBinary::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$of(this->data),
		$($of($Boolean::valueOf(this->last))),
		$of(this->webSocket)
	}));
}

$String* MockListener$OnBinary::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("onBinary(%s, %s, %s)"_s, $$new($ObjectArray, {
		$of(this->webSocket),
		$of(this->data),
		$($of($Boolean::valueOf(this->last)))
	}));
}

MockListener$OnBinary::MockListener$OnBinary() {
}

$Class* MockListener$OnBinary::load$($String* name, bool initialize) {
	$loadClass(MockListener$OnBinary, name, initialize, &_MockListener$OnBinary_ClassInfo_, allocate$MockListener$OnBinary);
	return class$;
}

$Class* MockListener$OnBinary::class$ = nullptr;