#ifndef _ByteArrayPublishers_h_
#define _ByteArrayPublishers_h_
//$ class ByteArrayPublishers
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BODY_PUBLISHER")
#undef BODY_PUBLISHER
#pragma push_macro("LOOPS")
#undef LOOPS

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Throwable;
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
			class HttpRequest;
			class HttpRequest$BodyPublisher;
			class HttpResponse;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class LinkedBlockingQueue;
		}
	}
}

class $export ByteArrayPublishers : public ::java::lang::Object {
	$class(ByteArrayPublishers, 0, ::java::lang::Object)
public:
	ByteArrayPublishers();
	void init$();
	static ::java::net::http::HttpClient* createClient();
	static ::java::net::http::HttpRequest* createRequest(::java::net::URI* uri);
	static void lambda$main$0(::com::sun::net::httpserver::HttpExchange* e);
	static ::java::net::http::HttpResponse* lambda$main$1(::java::util::concurrent::LinkedBlockingQueue* results, ::java::net::http::HttpResponse* v, $Throwable* t);
	static void main($StringArray* args);
	static ::java::net::http::HttpRequest$BodyPublisher* BODY_PUBLISHER;
	static int32_t LOOPS;
};

#pragma pop_macro("BODY_PUBLISHER")
#pragma pop_macro("LOOPS")

#endif // _ByteArrayPublishers_h_