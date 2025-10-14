#ifndef _HandshakeFailureTest$SSLServer_h_
#define _HandshakeFailureTest$SSLServer_h_
//$ class HandshakeFailureTest$SSLServer
//$ extends HandshakeFailureTest$AbstractServer

#include <HandshakeFailureTest$AbstractServer.h>

namespace javax {
	namespace net {
		class ServerSocketFactory;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLContext;
		}
	}
}

class $export HandshakeFailureTest$SSLServer : public ::HandshakeFailureTest$AbstractServer {
	$class(HandshakeFailureTest$SSLServer, 0, ::HandshakeFailureTest$AbstractServer)
public:
	HandshakeFailureTest$SSLServer();
	void init$();
	static ::javax::net::ssl::SSLContext* createUntrustingContext();
	virtual void run() override;
	static ::javax::net::ssl::SSLContext* sslContext;
	static ::javax::net::ServerSocketFactory* factory;
};

#endif // _HandshakeFailureTest$SSLServer_h_