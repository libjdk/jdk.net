#ifndef _EmptyAuthenticate_h_
#define _EmptyAuthenticate_h_
//$ class EmptyAuthenticate
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
			}
		}
	}
}

class $export EmptyAuthenticate : public ::java::lang::Object {
	$class(EmptyAuthenticate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EmptyAuthenticate();
	void init$();
	static void lambda$main$0(::com::sun::net::httpserver::HttpExchange* exchange);
	static void main($StringArray* args);
};

#endif // _EmptyAuthenticate_h_