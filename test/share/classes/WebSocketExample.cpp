#include <WebSocketExample.h>

#include <WebSocketExample$1.h>
#include <WebSocketExample$2.h>
#include <java/lang/CharSequence.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/WebSocket$Builder.h>
#include <java/net/http/WebSocket$Listener.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $WebSocketExample$1 = ::WebSocketExample$1;
using $WebSocketExample$2 = ::WebSocketExample$2;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $WebSocket$Builder = ::java::net::http::WebSocket$Builder;
using $WebSocket$Listener = ::java::net::http::WebSocket$Listener;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;

$FieldInfo _WebSocketExample_FieldInfo_[] = {
	{"listener", "Ljava/net/http/WebSocket$Listener;", nullptr, 0, $field(WebSocketExample, listener)},
	{}
};

$MethodInfo _WebSocketExample_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WebSocketExample::*)()>(&WebSocketExample::init$))},
	{"newBuilderExample0", "()V", nullptr, $PUBLIC},
	{"newBuilderExample1", "()V", nullptr, $PUBLIC},
	{"processCompleteTextMessage", "(Ljava/lang/CharSequence;)V", nullptr, $STATIC, $method(static_cast<void(*)($CharSequence*)>(&WebSocketExample::processCompleteTextMessage))},
	{"requestExample", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WebSocketExample_InnerClassesInfo_[] = {
	{"WebSocketExample$2", nullptr, nullptr, 0},
	{"WebSocketExample$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WebSocketExample_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WebSocketExample",
	"java.lang.Object",
	nullptr,
	_WebSocketExample_FieldInfo_,
	_WebSocketExample_MethodInfo_,
	nullptr,
	nullptr,
	_WebSocketExample_InnerClassesInfo_,
	nullptr,
	nullptr,
	"WebSocketExample$2,WebSocketExample$1"
};

$Object* allocate$WebSocketExample($Class* clazz) {
	return $of($alloc(WebSocketExample));
}

void WebSocketExample::init$() {
	$set(this, listener, $new($WebSocketExample$1, this));
}

void WebSocketExample::newBuilderExample0() {
	$useLocalCurrentObjectStackCache();
	$var($HttpClient, client, $HttpClient::newHttpClient());
	$var($CompletableFuture, ws, $nc($($nc(client)->newWebSocketBuilder()))->buildAsync($($URI::create("ws://websocket.example.com"_s)), this->listener));
}

void WebSocketExample::newBuilderExample1() {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, addr, $new($InetSocketAddress, "proxy.example.com"_s, 80));
	$var($HttpClient, client, $nc($($nc($($HttpClient::newBuilder()))->proxy($($ProxySelector::of(addr)))))->build());
	$var($CompletableFuture, ws, $nc($($nc(client)->newWebSocketBuilder()))->buildAsync($($URI::create("ws://websocket.example.com"_s)), this->listener));
}

void WebSocketExample::requestExample() {
	$var($WebSocket$Listener, listener, $new($WebSocketExample$2, this));
}

void WebSocketExample::processCompleteTextMessage($CharSequence* result) {
}

WebSocketExample::WebSocketExample() {
}

$Class* WebSocketExample::load$($String* name, bool initialize) {
	$loadClass(WebSocketExample, name, initialize, &_WebSocketExample_ClassInfo_, allocate$WebSocketExample);
	return class$;
}

$Class* WebSocketExample::class$ = nullptr;