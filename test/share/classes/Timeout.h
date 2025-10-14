#ifndef _Timeout_h_
#define _Timeout_h_
//$ class Timeout
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("KEYSTORE")
#undef KEYSTORE
#pragma push_macro("PASSWORD")
#undef PASSWORD
#pragma push_macro("RANDOM_PORT")
#undef RANDOM_PORT
#pragma push_macro("TIMEOUT")
#undef TIMEOUT

namespace javax {
	namespace net {
		namespace ssl {
			class SSLServerSocket;
		}
	}
}

class $export Timeout : public ::java::lang::Object {
	$class(Timeout, 0, ::java::lang::Object)
public:
	Timeout();
	void init$();
	static void connect($String* server);
	static void connectAsync($String* server);
	static void lambda$test$0(::javax::net::ssl::SSLServerSocket* ssocket);
	static void main($StringArray* args);
	static void test(bool async);
	static const int32_t RANDOM_PORT = 0;
	static const int32_t TIMEOUT = 3000; // 3 * 1000
	static $String* KEYSTORE;
	static $String* PASSWORD;
	static $volatile(bool) ready;
};

#pragma pop_macro("KEYSTORE")
#pragma pop_macro("PASSWORD")
#pragma pop_macro("RANDOM_PORT")
#pragma pop_macro("TIMEOUT")

#endif // _Timeout_h_