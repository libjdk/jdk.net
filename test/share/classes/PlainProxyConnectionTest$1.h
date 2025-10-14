#ifndef _PlainProxyConnectionTest$1_h_
#define _PlainProxyConnectionTest$1_h_
//$ class PlainProxyConnectionTest$1
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

class PlainProxyConnectionTest$1 : public ::com::sun::net::httpserver::HttpHandler {
	$class(PlainProxyConnectionTest$1, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpHandler)
public:
	PlainProxyConnectionTest$1();
	void init$();
	virtual void handle(::com::sun::net::httpserver::HttpExchange* he) override;
};

#endif // _PlainProxyConnectionTest$1_h_