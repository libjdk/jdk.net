#ifndef _jdk_net_ExtendedSocketOptions$ExtSocketOption_h_
#define _jdk_net_ExtendedSocketOptions$ExtSocketOption_h_
//$ class jdk.net.ExtendedSocketOptions$ExtSocketOption
//$ extends java.net.SocketOption

#include <java/net/SocketOption.h>

namespace jdk {
	namespace net {

class ExtendedSocketOptions$ExtSocketOption : public ::java::net::SocketOption {
	$class(ExtendedSocketOptions$ExtSocketOption, $NO_CLASS_INIT, ::java::net::SocketOption)
public:
	ExtendedSocketOptions$ExtSocketOption();
	void init$($String* name, $Class* type);
	virtual $String* name() override;
	virtual $String* toString() override;
	virtual $Class* type() override;
	$String* name$ = nullptr;
	$Class* type$ = nullptr;
};

	} // net
} // jdk

#endif // _jdk_net_ExtendedSocketOptions$ExtSocketOption_h_