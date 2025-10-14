#ifndef _PlainProxyConnectionTest_h_
#define _PlainProxyConnectionTest_h_
//$ class PlainProxyConnectionTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PATH")
#undef PATH
#pragma push_macro("RESPONSE")
#undef RESPONSE

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpServer;
			}
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace net {
		namespace http {
			class HttpClient$Version;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentLinkedQueue;
		}
	}
}

class $export PlainProxyConnectionTest : public ::java::lang::Object {
	$class(PlainProxyConnectionTest, 0, ::java::lang::Object)
public:
	PlainProxyConnectionTest();
	void init$();
	static ::com::sun::net::httpserver::HttpServer* createHttpsServer();
	static void main($StringArray* args);
	static void performSanityTest(::com::sun::net::httpserver::HttpServer* server, ::java::net::URI* uri, ::java::net::URI* proxiedURI);
	static void test(::com::sun::net::httpserver::HttpServer* server, ::java::net::http::HttpClient$Version* version);
	static $String* RESPONSE;
	static $String* PATH;
	static ::java::util::concurrent::ConcurrentLinkedQueue* connections;
};

#pragma pop_macro("PATH")
#pragma pop_macro("RESPONSE")

#endif // _PlainProxyConnectionTest_h_