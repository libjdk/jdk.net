#ifndef _ProxyServer$Connection_h_
#define _ProxyServer$Connection_h_
//$ class ProxyServer$Connection
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CR")
#undef CR
#pragma push_macro("LF")
#undef LF

class ProxyServer;
class ProxyServer$Credentials;
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export ProxyServer$Connection : public ::java::lang::Object {
	$class(ProxyServer$Connection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProxyServer$Connection();
	void init$(::ProxyServer* this$0, ::java::nio::channels::SocketChannel* s, int32_t id);
	bool authorized(::ProxyServer$Credentials* credentials, ::java::util::List* requestHeaders);
	virtual void awaitCompletion();
	virtual void close();
	virtual void closeConnection();
	virtual void commonInit($String* dest, int32_t defaultPort);
	virtual void doProxy($String* dest, $String* cmdLine, ::java::util::List* headers, $String* host, bool authorized);
	virtual void doTunnel($String* dest);
	int64_t drain(::java::nio::channels::SocketChannel* socket);
	virtual int32_t findCRLF($bytes* b);
	virtual $String* findFirst(::java::util::List* headers, $String* key);
	virtual void init();
	static bool lambda$authorized$0($String* n);
	static bool lambda$findFirst$1($String* h, $String* s);
	static $String* lambda$findFirst$2($String* h, $String* s);
	void lambda$proxyCommon$3(bool log);
	void lambda$proxyCommon$4(bool log);
	virtual void proxyCommon(bool log);
	virtual $bytes* readHeaders(::java::io::InputStream* is);
	virtual bool running();
	bool shouldCloseAfter407(::java::util::List* headers);
	virtual $String* toString() override;
	::ProxyServer* this$0 = nullptr;
	int32_t id = 0;
	::java::nio::channels::SocketChannel* clientSocket = nullptr;
	::java::nio::channels::SocketChannel* serverSocket = nullptr;
	$Thread* out = nullptr;
	$Thread* in = nullptr;
	$volatile(::java::io::InputStream*) clientIn = nullptr;
	$volatile(::java::io::InputStream*) serverIn = nullptr;
	$volatile(::java::io::OutputStream*) clientOut = nullptr;
	$volatile(::java::io::OutputStream*) serverOut = nullptr;
	static const int32_t CR = 13;
	static const int32_t LF = 10;
	$volatile(bool) closing = false;
};

#pragma pop_macro("CR")
#pragma pop_macro("LF")

#endif // _ProxyServer$Connection_h_