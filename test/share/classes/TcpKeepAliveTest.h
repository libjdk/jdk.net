#ifndef _TcpKeepAliveTest_h_
#define _TcpKeepAliveTest_h_
//$ class TcpKeepAliveTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_KEEP_ALIVE_INTVL")
#undef DEFAULT_KEEP_ALIVE_INTVL
#pragma push_macro("DEFAULT_KEEP_ALIVE_PROBES")
#undef DEFAULT_KEEP_ALIVE_PROBES
#pragma push_macro("DEFAULT_KEEP_ALIVE_TIME")
#undef DEFAULT_KEEP_ALIVE_TIME

namespace java {
	namespace net {
		class InetAddress;
		class ServerSocket;
	}
}

class $export TcpKeepAliveTest : public ::java::lang::Object {
	$class(TcpKeepAliveTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TcpKeepAliveTest();
	void init$();
	static ::java::net::ServerSocket* boundServer(::java::net::InetAddress* address);
	static void main($StringArray* args);
	static const int32_t DEFAULT_KEEP_ALIVE_PROBES = 7;
	static const int32_t DEFAULT_KEEP_ALIVE_TIME = 1973;
	static const int32_t DEFAULT_KEEP_ALIVE_INTVL = 53;
};

#pragma pop_macro("DEFAULT_KEEP_ALIVE_INTVL")
#pragma pop_macro("DEFAULT_KEEP_ALIVE_PROBES")
#pragma pop_macro("DEFAULT_KEEP_ALIVE_TIME")

#endif // _TcpKeepAliveTest_h_