#ifndef _ImmutableHeaders$ImmutableHeadersHandler_h_
#define _ImmutableHeaders$ImmutableHeadersHandler_h_
//$ class ImmutableHeaders$ImmutableHeadersHandler
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

class $export ImmutableHeaders$ImmutableHeadersHandler : public ::com::sun::net::httpserver::HttpHandler {
	$class(ImmutableHeaders$ImmutableHeadersHandler, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpHandler)
public:
	ImmutableHeaders$ImmutableHeadersHandler();
	void init$();
	virtual void handle(::com::sun::net::httpserver::HttpExchange* he) override;
};

#endif // _ImmutableHeaders$ImmutableHeadersHandler_h_