#ifndef _TimeoutOrdering_h_
#define _TimeoutOrdering_h_
//$ class TimeoutOrdering
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TIMEOUTS")
#undef TIMEOUTS

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace net {
		namespace http {
			class HttpClient;
			class HttpRequest;
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

class $export TimeoutOrdering : public ::java::lang::Object {
	$class(TimeoutOrdering, 0, ::java::lang::Object)
public:
	TimeoutOrdering();
	void init$();
	static void checkReturnOrder($Array<::java::net::http::HttpRequest>* requests);
	static $String* getRequest(::java::net::http::HttpRequest* req, $Array<::java::net::http::HttpRequest>* requests);
	static void lambda$main$0(int32_t j, ::java::net::http::HttpRequest* req, ::java::net::http::HttpResponse* r, $Throwable* t);
	static void lambda$main$1(::java::net::http::HttpClient* client, ::java::net::http::HttpRequest* req, int32_t j);
	static void main($StringArray* args);
	static $ints* TIMEOUTS;
	static ::java::util::concurrent::LinkedBlockingQueue* queue;
	static $volatile(bool) error;
};

#pragma pop_macro("TIMEOUTS")

#endif // _TimeoutOrdering_h_