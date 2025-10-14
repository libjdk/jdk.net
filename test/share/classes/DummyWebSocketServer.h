#ifndef _DummyWebSocketServer_h_
#define _DummyWebSocketServer_h_
//$ class DummyWebSocketServer
//$ extends java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>

class DummyWebSocketServer$Credentials;
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
	namespace nio {
		namespace channels {
			class ServerSocketChannel;
			class SocketChannel;
		}
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

class $export DummyWebSocketServer : public ::java::io::Closeable {
	$class(DummyWebSocketServer, 0, ::java::io::Closeable)
public:
	DummyWebSocketServer();
	void init$();
	void init$($String* username, $String* password);
	void init$(::java::util::function::BiFunction* mapping, $String* username, $String* password);
	static bool authorized(::DummyWebSocketServer$Credentials* credentials, ::java::util::Map* requestHeaders);
	virtual void close() override;
	static void close($Array<::java::lang::AutoCloseable>* acs);
	virtual void closeChannel(::java::nio::channels::SocketChannel* channel);
	static ::java::util::function::BiFunction* defaultMapping();
	static $String* expectHeader(::java::util::Map* headers, $String* name, $String* value);
	virtual ::java::net::URI* getURI();
	static ::java::util::List* lambda$defaultMapping$3($String* k);
	static ::java::util::List* lambda$defaultMapping$4(::java::util::List* request, ::DummyWebSocketServer$Credentials* credentials);
	void lambda$new$0(::java::util::function::BiFunction* mapping, ::DummyWebSocketServer$Credentials* credentials);
	void lambda$serve$1(::java::nio::channels::SocketChannel* channel);
	void lambda$serve$2(::java::nio::channels::SocketChannel* channel);
	virtual void open();
	virtual void read(::java::nio::channels::SocketChannel* ch);
	virtual ::java::nio::ByteBuffer* read();
	bool readRequest(::java::nio::channels::SocketChannel* channel, ::java::lang::StringBuilder* request);
	void serve(::java::nio::channels::SocketChannel* channel);
	virtual void setReceiveBufferSize(int32_t bufsize);
	virtual void write(::java::nio::channels::SocketChannel* ch);
	void writeResponse(::java::nio::channels::SocketChannel* channel, ::java::util::List* response);
	static bool $assertionsDisabled;
	::java::util::concurrent::atomic::AtomicBoolean* started = nullptr;
	$Thread* thread = nullptr;
	$volatile(::java::nio::channels::ServerSocketChannel*) ssc = nullptr;
	$volatile(::java::net::InetSocketAddress*) address = nullptr;
	::java::nio::ByteBuffer* read$ = nullptr;
	::java::util::concurrent::CountDownLatch* readReady = nullptr;
	$volatile(int32_t) receiveBufferSize = 0;
};

#endif // _DummyWebSocketServer_h_