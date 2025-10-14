#ifndef _ALPNFailureTest_h_
#define _ALPNFailureTest_h_
//$ class ALPNFailureTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class ProxySelector;
		class ServerSocket;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLContext;
		}
	}
}

class $export ALPNFailureTest : public ::java::lang::Object {
	$class(ALPNFailureTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ALPNFailureTest();
	void init$();
	static void main($StringArray* args);
	static void test(::java::net::ServerSocket* socket, ::javax::net::ssl::SSLContext* context, ::java::net::ProxySelector* ps, $StringArray* args);
};

#endif // _ALPNFailureTest_h_