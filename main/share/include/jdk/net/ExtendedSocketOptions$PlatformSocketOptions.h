#ifndef _jdk_net_ExtendedSocketOptions$PlatformSocketOptions_h_
#define _jdk_net_ExtendedSocketOptions$PlatformSocketOptions_h_
//$ class jdk.net.ExtendedSocketOptions$PlatformSocketOptions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace net {
		class UnixDomainPrincipal;
	}
}

namespace jdk {
	namespace net {

class $import ExtendedSocketOptions$PlatformSocketOptions : public ::java::lang::Object {
	$class(ExtendedSocketOptions$PlatformSocketOptions, 0, ::java::lang::Object)
public:
	ExtendedSocketOptions$PlatformSocketOptions();
	void init$();
	static ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions* create();
	static ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions* get();
	virtual int32_t getIncomingNapiId(int32_t fd);
	virtual bool getQuickAck(int32_t fd);
	virtual ::jdk::net::UnixDomainPrincipal* getSoPeerCred(int32_t fd);
	virtual int32_t getTcpKeepAliveIntvl(int32_t fd);
	virtual int32_t getTcpKeepAliveTime(int32_t fd);
	virtual int32_t getTcpkeepAliveProbes(int32_t fd);
	virtual bool incomingNapiIdSupported();
	virtual bool keepAliveOptionsSupported();
	static ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions* newInstance($String* cn);
	virtual bool peerCredentialsSupported();
	virtual bool quickAckSupported();
	virtual void setQuickAck(int32_t fd, bool on);
	virtual void setTcpKeepAliveIntvl(int32_t fd, int32_t value);
	virtual void setTcpKeepAliveTime(int32_t fd, int32_t value);
	virtual void setTcpkeepAliveProbes(int32_t fd, int32_t value);
	static ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions* instance;
};

	} // net
} // jdk

#endif // _jdk_net_ExtendedSocketOptions$PlatformSocketOptions_h_