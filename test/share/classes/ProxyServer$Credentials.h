#ifndef _ProxyServer$Credentials_h_
#define _ProxyServer$Credentials_h_
//$ class ProxyServer$Credentials
//$ extends java.lang.Object

#include <java/lang/Object.h>

class ProxyServer$Credentials : public ::java::lang::Object {
	$class(ProxyServer$Credentials, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProxyServer$Credentials();
	void init$($String* name, $String* password);
	virtual $String* name();
	virtual $String* password();
	$String* name$ = nullptr;
	$String* password$ = nullptr;
};

#endif // _ProxyServer$Credentials_h_