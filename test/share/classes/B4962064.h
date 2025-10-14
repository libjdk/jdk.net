#ifndef _B4962064_h_
#define _B4962064_h_
//$ class B4962064
//$ extends com.sun.net.httpserver.HttpHandler

#include <com/sun/net/httpserver/HttpHandler.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
				class HttpServer;
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

class $export B4962064 : public ::com::sun::net::httpserver::HttpHandler {
	$class(B4962064, 0, ::com::sun::net::httpserver::HttpHandler)
public:
	B4962064();
	void init$();
	static void client($String* u);
	static void except($String* s);
	virtual void handle(::com::sun::net::httpserver::HttpExchange* req) override;
	static void main($StringArray* args);
	static void read(::java::io::InputStream* is);
	static int32_t count;
	static ::com::sun::net::httpserver::HttpServer* server;
	static ::java::net::URL* urlsave;
};

#endif // _B4962064_h_