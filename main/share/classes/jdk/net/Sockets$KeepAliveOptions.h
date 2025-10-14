#ifndef _jdk_net_Sockets$KeepAliveOptions_h_
#define _jdk_net_Sockets$KeepAliveOptions_h_
//$ class jdk.net.Sockets$KeepAliveOptions
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("AVAILABLE")
#undef AVAILABLE

namespace jdk {
	namespace net {

class $export Sockets$KeepAliveOptions : public ::java::lang::Object {
	$class(Sockets$KeepAliveOptions, 0, ::java::lang::Object)
public:
	Sockets$KeepAliveOptions();
	void init$();
	static bool AVAILABLE;
};

	} // net
} // jdk

#pragma pop_macro("AVAILABLE")

#endif // _jdk_net_Sockets$KeepAliveOptions_h_