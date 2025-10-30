#include <MockListener$OnText.h>

#include <MockListener$Invocation.h>
#include <MockListener.h>
#include <java/net/http/WebSocket.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MockListener = ::MockListener;
using $MockListener$Invocation = ::MockListener$Invocation;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $Objects = ::java::util::Objects;

$FieldInfo _MockListener$OnText_FieldInfo_[] = {
	{"text", "Ljava/lang/String;", nullptr, $FINAL, $field(MockListener$OnText, text)},
	{"last", "Z", nullptr, $FINAL, $field(MockListener$OnText, last)},
	{}
};

$MethodInfo _MockListener$OnText_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/WebSocket;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(MockListener$OnText::*)($WebSocket*,$String*,bool)>(&MockListener$OnText::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MockListener$OnText_InnerClassesInfo_[] = {
	{"MockListener$OnText", "MockListener", "OnText", $PUBLIC | $STATIC | $FINAL},
	{"MockListener$Invocation", "MockListener", "Invocation", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MockListener$OnText_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MockListener$OnText",
	"MockListener$Invocation",
	nullptr,
	_MockListener$OnText_FieldInfo_,
	_MockListener$OnText_MethodInfo_,
	nullptr,
	nullptr,
	_MockListener$OnText_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MockListener"
};

$Object* allocate$MockListener$OnText($Class* clazz) {
	return $of($alloc(MockListener$OnText));
}

void MockListener$OnText::init$($WebSocket* webSocket, $String* text, bool last) {
	$MockListener$Invocation::init$(webSocket);
	$set(this, text, text);
	this->last = last;
}

bool MockListener$OnText::equals(Object$* o) {
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
	$var(MockListener$OnText, onText, $cast(MockListener$OnText, o));
	bool var$1 = $Objects::equals(this->text, $nc(onText)->text) && this->last == $nc(onText)->last;
	return var$1 && $Objects::equals(this->webSocket, onText->webSocket);
}

int32_t MockListener$OnText::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$of(this->text),
		$($of($Boolean::valueOf(this->last))),
		$of(this->webSocket)
	}));
}

$String* MockListener$OnText::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("onText(%s, message.length=%s, %s)"_s, $$new($ObjectArray, {
		$of(this->webSocket),
		$($of($Integer::valueOf($nc(this->text)->length()))),
		$($of($Boolean::valueOf(this->last)))
	}));
}

MockListener$OnText::MockListener$OnText() {
}

$Class* MockListener$OnText::load$($String* name, bool initialize) {
	$loadClass(MockListener$OnText, name, initialize, &_MockListener$OnText_ClassInfo_, allocate$MockListener$OnText);
	return class$;
}

$Class* MockListener$OnText::class$ = nullptr;