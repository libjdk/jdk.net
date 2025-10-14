#ifndef _B4769350$Server_h_
#define _B4769350$Server_h_
//$ class B4769350$Server
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

class B4769350;
namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpServer;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Executor;
		}
	}
}

class $export B4769350$Server : public ::java::lang::AutoCloseable {
	$class(B4769350$Server, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	B4769350$Server();
	void init$(::B4769350* this$0);
	virtual void close() override;
	virtual $String* getAddress();
	virtual int32_t getPort();
	virtual void startServer();
	::B4769350* this$0 = nullptr;
	::com::sun::net::httpserver::HttpServer* server = nullptr;
	::java::util::concurrent::Executor* executor = nullptr;
};

#endif // _B4769350$Server_h_