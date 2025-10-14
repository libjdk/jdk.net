#ifndef _B4769350$AuthenticationHandler_h_
#define _B4769350$AuthenticationHandler_h_
//$ class B4769350$AuthenticationHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
			}
		}
	}
}

class $export B4769350$AuthenticationHandler : public ::java::lang::Object {
	$class(B4769350$AuthenticationHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	B4769350$AuthenticationHandler();
	void init$();
	static void errorReply(::com::sun::net::httpserver::HttpExchange* exchange, $String* reply);
	static void okReply(::com::sun::net::httpserver::HttpExchange* exchange);
	static void proxyReply(::com::sun::net::httpserver::HttpExchange* exchange, $String* reply);
};

#endif // _B4769350$AuthenticationHandler_h_