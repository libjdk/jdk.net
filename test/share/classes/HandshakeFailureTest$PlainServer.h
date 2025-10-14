#ifndef _HandshakeFailureTest$PlainServer_h_
#define _HandshakeFailureTest$PlainServer_h_
//$ class HandshakeFailureTest$PlainServer
//$ extends HandshakeFailureTest$AbstractServer

#include <HandshakeFailureTest$AbstractServer.h>

class $export HandshakeFailureTest$PlainServer : public ::HandshakeFailureTest$AbstractServer {
	$class(HandshakeFailureTest$PlainServer, $NO_CLASS_INIT, ::HandshakeFailureTest$AbstractServer)
public:
	HandshakeFailureTest$PlainServer();
	void init$();
	virtual void run() override;
	$volatile(int32_t) count = 0;
};

#endif // _HandshakeFailureTest$PlainServer_h_