#ifndef _jdk_net_ExtendedSocketOptions$PlatformSocketOptions$1_h_
#define _jdk_net_ExtendedSocketOptions$PlatformSocketOptions$1_h_
//$ class jdk.net.ExtendedSocketOptions$PlatformSocketOptions$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace net {

class ExtendedSocketOptions$PlatformSocketOptions$1 : public ::java::security::PrivilegedAction {
	$class(ExtendedSocketOptions$PlatformSocketOptions$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ExtendedSocketOptions$PlatformSocketOptions$1();
	void init$();
	virtual $Object* run() override;
};

	} // net
} // jdk

#endif // _jdk_net_ExtendedSocketOptions$PlatformSocketOptions$1_h_