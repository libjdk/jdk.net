#ifndef _jdk_net_ExtendedSocketOptions$1_h_
#define _jdk_net_ExtendedSocketOptions$1_h_
//$ class jdk.net.ExtendedSocketOptions$1
//$ extends sun.net.ext.ExtendedSocketOptions

#include <sun/net/ext/ExtendedSocketOptions.h>

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
	namespace net {

class ExtendedSocketOptions$1 : public ::sun::net::ext::ExtendedSocketOptions {
	$class(ExtendedSocketOptions$1, $NO_CLASS_INIT, ::sun::net::ext::ExtendedSocketOptions)
public:
	ExtendedSocketOptions$1();
	void init$(::java::util::Set* arg0);
	virtual $Object* getOption(::java::io::FileDescriptor* fd, ::java::net::SocketOption* option) override;
	virtual void setOption(::java::io::FileDescriptor* fd, ::java::net::SocketOption* option, Object$* value) override;
};

	} // net
} // jdk

#endif // _jdk_net_ExtendedSocketOptions$1_h_