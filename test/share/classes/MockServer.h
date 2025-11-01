#ifndef _MockServer_h_
#define _MockServer_h_
//$ class MockServer
//$ extends java.lang.Thread
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Thread.h>

class MockServer$Connection;
namespace java {
	namespace net {
		class ServerSocket;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace javax {
	namespace net {
		class ServerSocketFactory;
	}
}

class $export MockServer : public ::java::lang::Thread, public ::java::io::Closeable {
	$class(MockServer, $NO_CLASS_INIT, ::java::lang::Thread, ::java::io::Closeable)
public:
	MockServer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t port, ::javax::net::ServerSocketFactory* factory, $String* root);
	void init$(int32_t port, ::javax::net::ServerSocketFactory* factory);
	void init$(int32_t port);
	void init$();
	virtual ::MockServer$Connection* activity();
	virtual void close() override;
	void doRemovalsAndAdditions();
	virtual $String* getURL();
	virtual int32_t port();
	virtual void reset();
	virtual void run() override;
	virtual $String* serverAuthority();
	virtual $String* toString() override;
	::java::net::ServerSocket* ss = nullptr;
	::java::util::List* sockets = nullptr;
	::java::util::List* removals = nullptr;
	::java::util::List* additions = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* counter = nullptr;
	$String* root = nullptr;
	$volatile(bool) closed = false;
};

#endif // _MockServer_h_