#ifndef _jdk_net_ExtendedSocketOptions_h_
#define _jdk_net_ExtendedSocketOptions_h_
//$ class jdk.net.ExtendedSocketOptions
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SO_INCOMING_NAPI_ID")
#undef SO_INCOMING_NAPI_ID
#pragma push_macro("SO_PEERCRED")
#undef SO_PEERCRED
#pragma push_macro("TCP_KEEPCOUNT")
#undef TCP_KEEPCOUNT
#pragma push_macro("TCP_KEEPIDLE")
#undef TCP_KEEPIDLE
#pragma push_macro("TCP_KEEPINTERVAL")
#undef TCP_KEEPINTERVAL
#pragma push_macro("TCP_QUICKACK")
#undef TCP_QUICKACK

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class SocketOption;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaIOFileDescriptorAccess;
		}
	}
}
namespace jdk {
	namespace net {
		class ExtendedSocketOptions$PlatformSocketOptions;
	}
}

namespace jdk {
	namespace net {

class $export ExtendedSocketOptions : public ::java::lang::Object {
	$class(ExtendedSocketOptions, 0, ::java::lang::Object)
public:
	ExtendedSocketOptions();
	void init$();
	static int32_t getIncomingNapiId(::java::io::FileDescriptor* fd);
	static $Object* getQuickAckOption(::java::io::FileDescriptor* fd);
	static $Object* getSoPeerCred(::java::io::FileDescriptor* fd);
	static int32_t getTcpKeepAliveIntvl(::java::io::FileDescriptor* fd);
	static int32_t getTcpKeepAliveTime(::java::io::FileDescriptor* fd);
	static int32_t getTcpkeepAliveProbes(::java::io::FileDescriptor* fd);
	static ::java::util::Set* options();
	static void setQuickAckOption(::java::io::FileDescriptor* fd, bool enable);
	static void setTcpKeepAliveIntvl(::java::io::FileDescriptor* fd, int32_t value);
	static void setTcpKeepAliveTime(::java::io::FileDescriptor* fd, int32_t value);
	static void setTcpkeepAliveProbes(::java::io::FileDescriptor* fd, int32_t value);
	static ::java::net::SocketOption* TCP_QUICKACK;
	static ::java::net::SocketOption* TCP_KEEPIDLE;
	static ::java::net::SocketOption* TCP_KEEPINTERVAL;
	static ::java::net::SocketOption* TCP_KEEPCOUNT;
	static ::java::net::SocketOption* SO_INCOMING_NAPI_ID;
	static ::java::net::SocketOption* SO_PEERCRED;
	static ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions* platformSocketOptions;
	static bool quickAckSupported;
	static bool keepAliveOptSupported;
	static bool peerCredentialsSupported;
	static bool incomingNapiIdOptSupported;
	static ::java::util::Set* extendedOptions;
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
};

	} // net
} // jdk

#pragma pop_macro("SO_INCOMING_NAPI_ID")
#pragma pop_macro("SO_PEERCRED")
#pragma pop_macro("TCP_KEEPCOUNT")
#pragma pop_macro("TCP_KEEPIDLE")
#pragma pop_macro("TCP_KEEPINTERVAL")
#pragma pop_macro("TCP_QUICKACK")

#endif // _jdk_net_ExtendedSocketOptions_h_