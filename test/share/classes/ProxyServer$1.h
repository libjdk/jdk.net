#ifndef _ProxyServer$1_h_
#define _ProxyServer$1_h_
//$ class ProxyServer$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

class ProxyServer;

class ProxyServer$1 : public ::java::security::PrivilegedAction {
	$class(ProxyServer$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ProxyServer$1();
	void init$(::ProxyServer* this$0);
	virtual $Object* run() override;
	::ProxyServer* this$0 = nullptr;
};

#endif // _ProxyServer$1_h_