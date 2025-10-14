#ifndef _LocalHostCookie$MyCookieHandler_h_
#define _LocalHostCookie$MyCookieHandler_h_
//$ class LocalHostCookie$MyCookieHandler
//$ extends com.sun.net.httpserver.HttpHandler

#include <com/sun/net/httpserver/HttpHandler.h>

class LocalHostCookie;
namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
			}
		}
	}
}

class $export LocalHostCookie$MyCookieHandler : public ::com::sun::net::httpserver::HttpHandler {
	$class(LocalHostCookie$MyCookieHandler, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpHandler)
public:
	LocalHostCookie$MyCookieHandler();
	void init$(::LocalHostCookie* this$0);
	virtual void handle(::com::sun::net::httpserver::HttpExchange* exchange) override;
	::LocalHostCookie* this$0 = nullptr;
};

#endif // _LocalHostCookie$MyCookieHandler_h_