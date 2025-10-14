#ifndef _jdk_net_LinuxSocketOptions_h_
#define _jdk_net_LinuxSocketOptions_h_
//$ class jdk.net.LinuxSocketOptions
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

class LinuxSocketOptions : public ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions {
	$class(LinuxSocketOptions, 0, ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions)
public:
	LinuxSocketOptions();
	void init$();
	virtual int32_t getIncomingNapiId(int32_t fd) override;
	static int32_t getIncomingNapiId0(int32_t fd);
	virtual bool getQuickAck(int32_t fd) override;
	static bool getQuickAck0(int32_t fd);
	virtual ::jdk::net::UnixDomainPrincipal* getSoPeerCred(int32_t fd) override;
	static int64_t getSoPeerCred0(int32_t fd);
	virtual int32_t getTcpKeepAliveIntvl(int32_t fd) override;
	static int32_t getTcpKeepAliveIntvl0(int32_t fd);
	virtual int32_t getTcpKeepAliveTime(int32_t fd) override;
	static int32_t getTcpKeepAliveTime0(int32_t fd);
	virtual int32_t getTcpkeepAliveProbes(int32_t fd) override;
	static int32_t getTcpkeepAliveProbes0(int32_t fd);
	virtual bool incomingNapiIdSupported() override;
	static bool incomingNapiIdSupported0();
	virtual bool keepAliveOptionsSupported() override;
	static bool keepAliveOptionsSupported0();
	static ::java::lang::Void* lambda$static$0();
	virtual bool peerCredentialsSupported() override;
	virtual bool quickAckSupported() override;
	static bool quickAckSupported0();
	virtual void setQuickAck(int32_t fd, bool on) override;
	static void setQuickAck0(int32_t fd, bool on);
	virtual void setTcpKeepAliveIntvl(int32_t fd, int32_t value) override;
	static void setTcpKeepAliveIntvl0(int32_t fd, int32_t value);
	virtual void setTcpKeepAliveTime(int32_t fd, int32_t value) override;
	static void setTcpKeepAliveTime0(int32_t fd, int32_t value);
	virtual void setTcpkeepAliveProbes(int32_t fd, int32_t value) override;
	static void setTcpkeepAliveProbes0(int32_t fd, int32_t value);
};

	} // net
} // jdk

#endif // _jdk_net_LinuxSocketOptions_h_