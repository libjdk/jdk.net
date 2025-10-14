#ifndef _WebSocketExample$2_h_
#define _WebSocketExample$2_h_
//$ class WebSocketExample$2
//$ extends java.net.http.WebSocket$Listener

#include <java/net/http/WebSocket$Listener.h>

class WebSocketExample;
namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
	}
}
namespace java {
	namespace net {
		namespace http {
			class WebSocket;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletionStage;
		}
	}
}

class WebSocketExample$2 : public ::java::net::http::WebSocket$Listener {
	$class(WebSocketExample$2, $NO_CLASS_INIT, ::java::net::http::WebSocket$Listener)
public:
	WebSocketExample$2();
	void init$(::WebSocketExample* this$0);
	virtual ::java::util::concurrent::CompletionStage* onText(::java::net::http::WebSocket* webSocket, ::java::lang::CharSequence* message, bool last) override;
	::WebSocketExample* this$0 = nullptr;
	::java::lang::StringBuilder* text = nullptr;
};

#endif // _WebSocketExample$2_h_