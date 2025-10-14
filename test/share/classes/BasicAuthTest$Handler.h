#ifndef _BasicAuthTest$Handler_h_
#define _BasicAuthTest$Handler_h_
//$ class BasicAuthTest$Handler
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

class $export BasicAuthTest$Handler : public ::com::sun::net::httpserver::HttpHandler {
	$class(BasicAuthTest$Handler, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpHandler)
public:
	BasicAuthTest$Handler();
	void init$();
	virtual void handle(::com::sun::net::httpserver::HttpExchange* he) override;
	static $volatile(bool) ok;
};

#endif // _BasicAuthTest$Handler_h_