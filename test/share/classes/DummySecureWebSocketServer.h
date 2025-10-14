#ifndef _DummySecureWebSocketServer_h_
#define _DummySecureWebSocketServer_h_
//$ class DummySecureWebSocketServer
//$ extends java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>

class DummySecureWebSocketServer$Credentials;
class DummySecureWebSocketServer$WebServerSocketChannel;
class DummySecureWebSocketServer$WebSocketChannel;
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class AutoCloseable;
		class StringBuilder;
		class Thread;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
		class URI;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}

class $export DummySecureWebSocketServer : public ::java::io::Closeable {
	$class(DummySecureWebSocketServer, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	DummySecureWebSocketServer();
	void init$();
	void init$($String* username, $String* password);
	void init$(::java::util::function::BiFunction* mapping, $String* username, $String* password);
	static bool authorized(::DummySecureWebSocketServer$Credentials* credentials, ::java::util::Map* requestHeaders);
	virtual void close() override;
	static void close($Array<::java::lang::AutoCloseable>* acs);
	static ::java::util::function::BiFunction* defaultMapping();
	static $String* expectHeader(::java::util::Map* headers, $String* name, $String* value);
	virtual ::java::net::URI* getURI();
	static ::java::util::List* lambda$defaultMapping$3($String* k);
	static ::java::util::List* lambda$defaultMapping$4(::java::util::List* request, ::DummySecureWebSocketServer$Credentials* credentials);
	void lambda$new$0(::java::util::function::BiFunction* mapping, ::DummySecureWebSocketServer$Credentials* credentials);
	void lambda$serve$1(::DummySecureWebSocketServer$WebSocketChannel* channel);
	void lambda$serve$2(::DummySecureWebSocketServer$WebSocketChannel* channel);
	virtual void open();
	static ::DummySecureWebSocketServer$WebServerSocketChannel* openWS();
	static ::DummySecureWebSocketServer$WebServerSocketChannel* openWSS();
	static int32_t read(::java::io::InputStream* str, ::java::nio::ByteBuffer* buffer);
	virtual void read(::DummySecureWebSocketServer$WebSocketChannel* ch);
	virtual ::java::nio::ByteBuffer* read();
	bool readRequest(::DummySecureWebSocketServer$WebSocketChannel* channel, ::java::lang::StringBuilder* request);
	virtual ::DummySecureWebSocketServer* secure();
	void serve(::DummySecureWebSocketServer$WebSocketChannel* channel);
	static void write(::java::io::OutputStream* str, ::java::nio::ByteBuffer* buffer);
	virtual void write(::DummySecureWebSocketServer$WebSocketChannel* ch);
	void writeResponse(::DummySecureWebSocketServer$WebSocketChannel* channel, ::java::util::List* response);
	::java::util::concurrent::atomic::AtomicBoolean* started = nullptr;
	$Thread* thread = nullptr;
	$volatile(::DummySecureWebSocketServer$WebServerSocketChannel*) ss = nullptr;
	$volatile(::java::net::InetSocketAddress*) address = nullptr;
	$volatile(bool) secure$ = false;
	::java::nio::ByteBuffer* read$ = nullptr;
	::java::util::concurrent::CountDownLatch* readReady = nullptr;
	$volatile(bool) done = false;
};

#endif // _DummySecureWebSocketServer_h_