#ifndef _ALPNFailureTest$ReadOnlyServer_h_
#define _ALPNFailureTest$ReadOnlyServer_h_
//$ class ALPNFailureTest$ReadOnlyServer
//$ extends java.lang.Runnable
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class ServerSocket;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
				class AtomicReference;
			}
		}
	}
}

class $export ALPNFailureTest$ReadOnlyServer : public ::java::lang::Runnable, public ::java::io::Closeable {
	$class(ALPNFailureTest$ReadOnlyServer, $NO_CLASS_INIT, ::java::lang::Runnable, ::java::io::Closeable)
public:
	ALPNFailureTest$ReadOnlyServer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::net::ServerSocket* socket);
	virtual void close() override;
	virtual void run() override;
	virtual $String* toString() override;
	::java::net::ServerSocket* socket = nullptr;
	::java::util::concurrent::atomic::AtomicReference* errorRef = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* closing = nullptr;
};

#endif // _ALPNFailureTest$ReadOnlyServer_h_