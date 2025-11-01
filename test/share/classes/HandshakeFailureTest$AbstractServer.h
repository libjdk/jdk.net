#ifndef _HandshakeFailureTest$AbstractServer_h_
#define _HandshakeFailureTest$AbstractServer_h_
//$ class HandshakeFailureTest$AbstractServer
//$ extends java.lang.Thread
//$ implements java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>
#include <java/lang/Thread.h>

namespace java {
	namespace net {
		class ServerSocket;
	}
}

class $export HandshakeFailureTest$AbstractServer : public ::java::lang::Thread, public ::java::lang::AutoCloseable {
	$class(HandshakeFailureTest$AbstractServer, $NO_CLASS_INIT, ::java::lang::Thread, ::java::lang::AutoCloseable)
public:
	HandshakeFailureTest$AbstractServer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, ::java::net::ServerSocket* ss);
	virtual void close() override;
	virtual $String* getAuthority();
	virtual int32_t getPort();
	virtual $String* toString() override;
	::java::net::ServerSocket* ss = nullptr;
	$volatile(bool) closed = false;
};

#endif // _HandshakeFailureTest$AbstractServer_h_