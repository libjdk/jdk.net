#ifndef _MultiAuthTest$Handler_h_
#define _MultiAuthTest$Handler_h_
//$ class MultiAuthTest$Handler
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

class $export MultiAuthTest$Handler : public ::com::sun::net::httpserver::HttpHandler {
	$class(MultiAuthTest$Handler, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpHandler)
public:
	MultiAuthTest$Handler();
	void init$();
	virtual void handle(::com::sun::net::httpserver::HttpExchange* he) override;
	static $volatile(bool) ok;
};

#endif // _MultiAuthTest$Handler_h_