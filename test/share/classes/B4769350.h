#ifndef _B4769350_h_
#define _B4769350_h_
//$ class B4769350
//$ extends java.lang.Object

#include <java/lang/Array.h>

class B4769350$Client;
class B4769350$MyAuthenticator;
class B4769350$Server;
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
			class CyclicBarrier;
		}
	}
}

class $export B4769350 : public ::java::lang::Object {
	$class(B4769350, 0, ::java::lang::Object)
public:
	B4769350();
	void init$();
	static $String* authority(int32_t port);
	static void doProxyTests($String* authority, ::B4769350$Server* server);
	static void doServerTests($String* authority, ::B4769350$Server* server);
	static void except($String* s, ::B4769350$Server* server);
	static void main($StringArray* args);
	static void read(::java::io::InputStream* is);
	virtual void runTest(bool proxy);
	static int32_t count;
	static bool error;
	static ::B4769350$Server* server;
	static ::B4769350$MyAuthenticator* auth;
	static int32_t redirects;
	static ::B4769350$Client* c1;
	static ::B4769350$Client* c2;
	static ::B4769350$Client* c3;
	static ::B4769350$Client* c4;
	static ::B4769350$Client* c5;
	static ::B4769350$Client* c6;
	static ::B4769350$Client* c7;
	static ::B4769350$Client* c8;
	static ::B4769350$Client* c9;
	static ::java::util::concurrent::CountDownLatch* t2condlatch;
	static ::java::util::concurrent::CountDownLatch* t3cond1;
	static ::java::util::concurrent::CyclicBarrier* t1Cond1;
};

#endif // _B4769350_h_