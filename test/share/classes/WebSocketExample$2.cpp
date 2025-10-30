#include <WebSocketExample$2.h>

#include <WebSocketExample.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/CharSequence.h>
#include <java/net/http/WebSocket.h>
#include <java/util/concurrent/CompletionStage.h>
#include <jcpp.h>

using $WebSocketExample = ::WebSocketExample;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebSocket = ::java::net::http::WebSocket;
using $WebSocket$Listener = ::java::net::http::WebSocket$Listener;
using $CompletionStage = ::java::util::concurrent::CompletionStage;

$FieldInfo _WebSocketExample$2_FieldInfo_[] = {
	{"this$0", "LWebSocketExample;", nullptr, $FINAL | $SYNTHETIC, $field(WebSocketExample$2, this$0)},
	{"text", "Ljava/lang/StringBuilder;", nullptr, 0, $field(WebSocketExample$2, text)},
	{}
};

$MethodInfo _WebSocketExample$2_MethodInfo_[] = {
	{"<init>", "(LWebSocketExample;)V", nullptr, 0, $method(static_cast<void(WebSocketExample$2::*)($WebSocketExample*)>(&WebSocketExample$2::init$))},
	{"onText", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage;", "(Ljava/net/http/WebSocket;Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletionStage<*>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _WebSocketExample$2_EnclosingMethodInfo_ = {
	"WebSocketExample",
	"requestExample",
	"()V"
};

$InnerClassInfo _WebSocketExample$2_InnerClassesInfo_[] = {
	{"WebSocketExample$2", nullptr, nullptr, 0},
	{"java.net.http.WebSocket$Listener", "java.net.http.WebSocket", "Listener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WebSocketExample$2_ClassInfo_ = {
	$ACC_SUPER,
	"WebSocketExample$2",
	"java.lang.Object",
	"java.net.http.WebSocket$Listener",
	_WebSocketExample$2_FieldInfo_,
	_WebSocketExample$2_MethodInfo_,
	nullptr,
	&_WebSocketExample$2_EnclosingMethodInfo_,
	_WebSocketExample$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WebSocketExample"
};

$Object* allocate$WebSocketExample$2($Class* clazz) {
	return $of($alloc(WebSocketExample$2));
}

void WebSocketExample$2::init$($WebSocketExample* this$0) {
	$set(this, this$0, this$0);
	$set(this, text, $new($StringBuilder));
}

$CompletionStage* WebSocketExample$2::onText($WebSocket* webSocket, $CharSequence* message, bool last) {
	$nc(this->text)->append(message);
	if (last) {
		$WebSocketExample::processCompleteTextMessage(this->text);
		$set(this, text, $new($StringBuilder));
	}
	$nc(webSocket)->request(1);
	return nullptr;
}

WebSocketExample$2::WebSocketExample$2() {
}

$Class* WebSocketExample$2::load$($String* name, bool initialize) {
	$loadClass(WebSocketExample$2, name, initialize, &_WebSocketExample$2_ClassInfo_, allocate$WebSocketExample$2);
	return class$;
}

$Class* WebSocketExample$2::class$ = nullptr;