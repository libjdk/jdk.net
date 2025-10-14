#ifndef _DummyWebSocketServer$Credentials_h_
#define _DummyWebSocketServer$Credentials_h_
//$ class DummyWebSocketServer$Credentials
//$ extends java.lang.Object

#include <java/lang/Object.h>

class DummyWebSocketServer$Credentials : public ::java::lang::Object {
	$class(DummyWebSocketServer$Credentials, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DummyWebSocketServer$Credentials();
	void init$($String* name, $String* password);
	virtual $String* name();
	virtual $String* password();
	$String* name$ = nullptr;
	$String* password$ = nullptr;
};

#endif // _DummyWebSocketServer$Credentials_h_