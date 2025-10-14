#ifndef _DummySecureWebSocketServer$Credentials_h_
#define _DummySecureWebSocketServer$Credentials_h_
//$ class DummySecureWebSocketServer$Credentials
//$ extends java.lang.Object

#include <java/lang/Object.h>

class DummySecureWebSocketServer$Credentials : public ::java::lang::Object {
	$class(DummySecureWebSocketServer$Credentials, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DummySecureWebSocketServer$Credentials();
	void init$($String* name, $String* password);
	virtual $String* name();
	virtual $String* password();
	$String* name$ = nullptr;
	$String* password$ = nullptr;
};

#endif // _DummySecureWebSocketServer$Credentials_h_