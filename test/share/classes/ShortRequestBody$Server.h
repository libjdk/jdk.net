#ifndef _ShortRequestBody$Server_h_
#define _ShortRequestBody$Server_h_
//$ class ShortRequestBody$Server
//$ extends java.lang.Thread
//$ implements java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>
#include <java/lang/Thread.h>

#pragma push_macro("RESPONSE")
#undef RESPONSE

namespace java {
	namespace net {
		class ServerSocket;
	}
}

class $export ShortRequestBody$Server : public ::java::lang::Thread, public ::java::lang::AutoCloseable {
	$class(ShortRequestBody$Server, 0, ::java::lang::Thread, ::java::lang::AutoCloseable)
public:
	ShortRequestBody$Server();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void close() override;
	virtual int32_t getPort();
	virtual void run() override;
	virtual $String* toString() override;
	static $String* RESPONSE;
	::java::net::ServerSocket* ss = nullptr;
	$volatile(bool) closed = false;
};

#pragma pop_macro("RESPONSE")

#endif // _ShortRequestBody$Server_h_