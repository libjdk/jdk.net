#ifndef _jdk_net_MacOSXSocketOptions_h_
#define _jdk_net_MacOSXSocketOptions_h_
//$ class jdk.net.MacOSXSocketOptions
//$ extends jdk.net.ExtendedSocketOptions$PlatformSocketOptions

#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace jdk {
	namespace net {
		class UnixDomainPrincipal;
	}
}

namespace jdk {
	namespace net {

class MacOSXSocketOptions : public ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions {
	$class(MacOSXSocketOptions, 0, ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions)
public:
	MacOSXSocketOptions();
	void init$();
	virtual ::jdk::net::UnixDomainPrincipal* getSoPeerCred(int32_t fd) override;
	static int64_t getSoPeerCred0(int32_t fd);
	virtual int32_t getTcpKeepAliveIntvl(int32_t fd) override;
	static int32_t getTcpKeepAliveIntvl0(int32_t fd);
	virtual int32_t getTcpKeepAliveTime(int32_t fd) override;
	static int32_t getTcpKeepAliveTime0(int32_t fd);
	virtual int32_t getTcpkeepAliveProbes(int32_t fd) override;
	static int32_t getTcpkeepAliveProbes0(int32_t fd);
	virtual bool keepAliveOptionsSupported() override;
	static bool keepAliveOptionsSupported0();
	static ::java::lang::Void* lambda$static$0();
	virtual bool peerCredentialsSupported() override;
	virtual void setTcpKeepAliveIntvl(int32_t fd, int32_t value) override;
	static void setTcpKeepAliveIntvl0(int32_t fd, int32_t value);
	virtual void setTcpKeepAliveTime(int32_t fd, int32_t value) override;
	static void setTcpKeepAliveTime0(int32_t fd, int32_t value);
	virtual void setTcpkeepAliveProbes(int32_t fd, int32_t value) override;
	static void setTcpkeepAliveProbes0(int32_t fd, int32_t value);
};

	} // net
} // jdk

#endif // _jdk_net_MacOSXSocketOptions_h_