#ifndef _LocalHostCookie$Server_h_
#define _LocalHostCookie$Server_h_
//$ class LocalHostCookie$Server
//$ extends java.lang.Object

#include <java/lang/Object.h>

class LocalHostCookie;
namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpServer;
			}
		}
	}
}

class $export LocalHostCookie$Server : public ::java::lang::Object {
	$class(LocalHostCookie$Server, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LocalHostCookie$Server();
	void init$(::LocalHostCookie* this$0);
	virtual int32_t getPort();
	virtual void startServer();
	virtual void stopServer();
	::LocalHostCookie* this$0 = nullptr;
	::com::sun::net::httpserver::HttpServer* server = nullptr;
};

#endif // _LocalHostCookie$Server_h_