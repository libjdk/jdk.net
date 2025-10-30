#include <WebSocketExample$1.h>

#include <WebSocketExample.h>
#include <jcpp.h>

using $WebSocketExample = ::WebSocketExample;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket$Listener = ::java::net::http::WebSocket$Listener;

$FieldInfo _WebSocketExample$1_FieldInfo_[] = {
	{"this$0", "LWebSocketExample;", nullptr, $FINAL | $SYNTHETIC, $field(WebSocketExample$1, this$0)},
	{}
};

$MethodInfo _WebSocketExample$1_MethodInfo_[] = {
	{"<init>", "(LWebSocketExample;)V", nullptr, 0, $method(static_cast<void(WebSocketExample$1::*)($WebSocketExample*)>(&WebSocketExample$1::init$))},
	{}
};

$EnclosingMethodInfo _WebSocketExample$1_EnclosingMethodInfo_ = {
	"WebSocketExample",
	nullptr,
	nullptr
};

$InnerClassInfo _WebSocketExample$1_InnerClassesInfo_[] = {
	{"WebSocketExample$1", nullptr, nullptr, 0},
	{"java.net.http.WebSocket$Listener", "java.net.http.WebSocket", "Listener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WebSocketExample$1_ClassInfo_ = {
	$ACC_SUPER,
	"WebSocketExample$1",
	"java.lang.Object",
	"java.net.http.WebSocket$Listener",
	_WebSocketExample$1_FieldInfo_,
	_WebSocketExample$1_MethodInfo_,
	nullptr,
	&_WebSocketExample$1_EnclosingMethodInfo_,
	_WebSocketExample$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WebSocketExample"
};

$Object* allocate$WebSocketExample$1($Class* clazz) {
	return $of($alloc(WebSocketExample$1));
}

void WebSocketExample$1::init$($WebSocketExample* this$0) {
	$set(this, this$0, this$0);
}

WebSocketExample$1::WebSocketExample$1() {
}

$Class* WebSocketExample$1::load$($String* name, bool initialize) {
	$loadClass(WebSocketExample$1, name, initialize, &_WebSocketExample$1_ClassInfo_, allocate$WebSocketExample$1);
	return class$;
}

$Class* WebSocketExample$1::class$ = nullptr;