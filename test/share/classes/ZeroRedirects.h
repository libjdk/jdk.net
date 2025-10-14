#ifndef _ZeroRedirects_h_
#define _ZeroRedirects_h_
//$ class ZeroRedirects
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export ZeroRedirects : public ::java::lang::Object {
	$class(ZeroRedirects, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ZeroRedirects();
	void init$();
	static void initServer();
	static void main($StringArray* args);
	static void test();
	static ::com::sun::net::httpserver::HttpServer* s1;
	static ::java::util::concurrent::ExecutorService* executor;
	static int32_t port;
	static ::java::net::http::HttpClient* client;
	static ::java::net::URI* uri;
};

#endif // _ZeroRedirects_h_