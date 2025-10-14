#ifndef _jdk_net_Sockets_h_
#define _jdk_net_Sockets_h_
//$ class jdk.net.Sockets
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class DatagramSocket;
		class ServerSocket;
		class Socket;
		class SocketOption;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace jdk {
	namespace net {

class $export Sockets : public ::java::lang::Object {
	$class(Sockets, 0, ::java::lang::Object)
public:
	Sockets();
	void init$();
	static void checkValueType(Object$* value, $Class* type);
	static $Object* getOption(::java::net::Socket* s, ::java::net::SocketOption* name);
	static $Object* getOption(::java::net::ServerSocket* s, ::java::net::SocketOption* name);
	static $Object* getOption(::java::net::DatagramSocket* s, ::java::net::SocketOption* name);
	static bool isReusePortAvailable();
	static ::java::util::Map* optionSets();
	static void setOption(::java::net::Socket* s, ::java::net::SocketOption* name, Object$* value);
	static void setOption(::java::net::ServerSocket* s, ::java::net::SocketOption* name, Object$* value);
	static void setOption(::java::net::DatagramSocket* s, ::java::net::SocketOption* name, Object$* value);
	static ::java::util::Set* supportedOptions($Class* socketType);
	static ::java::util::Map* options;
	static $volatile(bool) checkedReusePort;
	static $volatile(bool) isReusePortAvailable$;
};

	} // net
} // jdk

#endif // _jdk_net_Sockets_h_