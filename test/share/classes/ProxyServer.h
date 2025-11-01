#ifndef _ProxyServer_h_
#define _ProxyServer_h_
//$ class ProxyServer
//$ extends java.lang.Thread
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>
#include <java/lang/Thread.h>

#pragma push_macro("IS_WINDOWS")
#undef IS_WINDOWS

class ProxyServer$Credentials;
namespace java {
	namespace lang {
		class Boolean;
		class Integer;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class ServerSocketChannel;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CopyOnWriteArrayList;
		}
	}
}

class $export ProxyServer : public ::java::lang::Thread, public ::java::io::Closeable {
	$class(ProxyServer, 0, ::java::lang::Thread, ::java::io::Closeable)
public:
	ProxyServer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::lang::Integer* port);
	void init$(::java::lang::Integer* port, ::java::lang::Boolean* debug, $String* username, $String* password);
	void init$(::java::lang::Integer* port, ::java::lang::Boolean* debug);
	void init$(::java::lang::Integer* port, ::java::lang::Boolean* debug, ::ProxyServer$Credentials* credentials);
	void init$($String* s);
	virtual void close() override;
	virtual void execute();
	virtual int32_t getPort();
	virtual ::java::net::InetSocketAddress* getProxyAddress();
	static bool isWindows();
	static $String* lambda$static$0();
	static void main($StringArray* args);
	virtual void run() override;
	virtual $String* toString() override;
	static bool IS_WINDOWS;
	::java::nio::channels::ServerSocketChannel* listener = nullptr;
	int32_t port = 0;
	$volatile(bool) debug = false;
	::ProxyServer$Credentials* credentials = nullptr;
	::java::util::concurrent::CopyOnWriteArrayList* connections = nullptr;
	$volatile(bool) done = false;
};

#pragma pop_macro("IS_WINDOWS")

#endif // _ProxyServer_h_