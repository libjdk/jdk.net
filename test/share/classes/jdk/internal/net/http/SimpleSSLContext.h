#ifndef _jdk_internal_net_http_SimpleSSLContext_h_
#define _jdk_internal_net_http_SimpleSSLContext_h_
//$ class jdk.internal.net.http.SimpleSSLContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLContext;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class $export SimpleSSLContext : public ::java::lang::Object {
	$class(SimpleSSLContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SimpleSSLContext();
	void init$();
	virtual ::javax::net::ssl::SSLContext* get();
	::javax::net::ssl::SSLContext* init(::java::io::InputStream* i);
	::javax::net::ssl::SSLContext* ssl = nullptr;
};

			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_SimpleSSLContext_h_