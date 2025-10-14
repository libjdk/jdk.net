#ifndef _ZeroRedirects$Handler_h_
#define _ZeroRedirects$Handler_h_
//$ class ZeroRedirects$Handler
//$ extends com.sun.net.httpserver.HttpHandler

#include <com/sun/net/httpserver/HttpHandler.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
			}
		}
	}
}

class $export ZeroRedirects$Handler : public ::com::sun::net::httpserver::HttpHandler {
	$class(ZeroRedirects$Handler, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpHandler)
public:
	ZeroRedirects$Handler();
	void init$();
	virtual void handle(::com::sun::net::httpserver::HttpExchange* t) override;
};

#endif // _ZeroRedirects$Handler_h_