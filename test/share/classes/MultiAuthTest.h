#ifndef _MultiAuthTest_h_
#define _MultiAuthTest_h_
//$ class MultiAuthTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("POST_BODY")
#undef POST_BODY
#pragma push_macro("RESPONSE")
#undef RESPONSE

class MultiAuthTest$ClientAuth;
namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class BasicAuthenticator;
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
			class HttpClient;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}

class $export MultiAuthTest : public ::java::lang::Object {
	$class(MultiAuthTest, 0, ::java::lang::Object)
public:
	MultiAuthTest();
	void init$();
	static ::com::sun::net::httpserver::HttpServer* createServer(::java::util::concurrent::ExecutorService* e, ::com::sun::net::httpserver::BasicAuthenticator* sa);
	static void main($StringArray* args);
	static void test(::java::net::http::HttpClient* client, ::MultiAuthTest$ClientAuth* ca, ::java::net::URI* uri, int32_t expectCount, $Class* expectFailure);
	static $volatile(bool) ok;
	static $String* RESPONSE;
	static $String* POST_BODY;
};

#pragma pop_macro("POST_BODY")
#pragma pop_macro("RESPONSE")

#endif // _MultiAuthTest_h_