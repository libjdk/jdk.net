#ifndef _WebSocketExample$1_h_
#define _WebSocketExample$1_h_
//$ class WebSocketExample$1
//$ extends java.net.http.WebSocket$Listener

#include <java/net/http/WebSocket$Listener.h>

class WebSocketExample;

class WebSocketExample$1 : public ::java::net::http::WebSocket$Listener {
	$class(WebSocketExample$1, $NO_CLASS_INIT, ::java::net::http::WebSocket$Listener)
public:
	WebSocketExample$1();
	void init$(::WebSocketExample* this$0);
	::WebSocketExample* this$0 = nullptr;
};

#endif // _WebSocketExample$1_h_