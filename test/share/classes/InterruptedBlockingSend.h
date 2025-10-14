#ifndef _InterruptedBlockingSend_h_
#define _InterruptedBlockingSend_h_
//$ class InterruptedBlockingSend
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		}
	}
}

class $export InterruptedBlockingSend : public ::java::lang::Object {
	$class(InterruptedBlockingSend, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InterruptedBlockingSend();
	void init$();
	static void lambda$main$0(::java::net::http::HttpClient* client, ::java::net::http::HttpRequest* request);
	static void main($StringArray* args);
	static $volatile($Throwable*) throwable;
};

#endif // _InterruptedBlockingSend_h_