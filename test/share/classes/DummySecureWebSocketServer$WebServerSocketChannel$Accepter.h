#ifndef _DummySecureWebSocketServer$WebServerSocketChannel$Accepter_h_
#define _DummySecureWebSocketServer$WebServerSocketChannel$Accepter_h_
//$ interface DummySecureWebSocketServer$WebServerSocketChannel$Accepter
//$ extends java.lang.Object

#include <java/lang/Object.h>

class DummySecureWebSocketServer$WebSocketChannel;

class $export DummySecureWebSocketServer$WebServerSocketChannel$Accepter : public ::java::lang::Object {
	$interface(DummySecureWebSocketServer$WebServerSocketChannel$Accepter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::DummySecureWebSocketServer$WebSocketChannel* accept() {return nullptr;}
};

#endif // _DummySecureWebSocketServer$WebServerSocketChannel$Accepter_h_