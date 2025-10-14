#ifndef _B4769350$Server$AuthenticationHandlerT2a_h_
#define _B4769350$Server$AuthenticationHandlerT2a_h_
//$ class B4769350$Server$AuthenticationHandlerT2a
//$ extends com.sun.net.httpserver.HttpHandler

#include <com/sun/net/httpserver/HttpHandler.h>

class B4769350$Server;
namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
			}
		}
	}
}

class $export B4769350$Server$AuthenticationHandlerT2a : public ::com::sun::net::httpserver::HttpHandler {
	$class(B4769350$Server$AuthenticationHandlerT2a, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpHandler)
public:
	B4769350$Server$AuthenticationHandlerT2a();
	void init$(::B4769350$Server* this$1);
	virtual void handle(::com::sun::net::httpserver::HttpExchange* exchange) override;
	::B4769350$Server* this$1 = nullptr;
	$volatile(int32_t) count = 0;
};

#endif // _B4769350$Server$AuthenticationHandlerT2a_h_