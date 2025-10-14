#ifndef _PlainProxyConnectionTest$CountingProxySelector_h_
#define _PlainProxyConnectionTest$CountingProxySelector_h_
//$ class PlainProxyConnectionTest$CountingProxySelector
//$ extends java.net.ProxySelector

#include <java/net/ProxySelector.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
		class SocketAddress;
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export PlainProxyConnectionTest$CountingProxySelector : public ::java::net::ProxySelector {
	$class(PlainProxyConnectionTest$CountingProxySelector, $NO_CLASS_INIT, ::java::net::ProxySelector)
public:
	PlainProxyConnectionTest$CountingProxySelector();
	void init$(::java::net::InetSocketAddress* proxyAddress);
	virtual void connectFailed(::java::net::URI* uri, ::java::net::SocketAddress* sa, ::java::io::IOException* ioe) override;
	virtual int32_t count();
	static ::PlainProxyConnectionTest$CountingProxySelector* of(::java::net::InetSocketAddress* proxyAddress);
	virtual ::java::util::List* select(::java::net::URI* uri) override;
	::java::net::ProxySelector* proxySelector = nullptr;
	$volatile(int32_t) count$ = 0;
};

#endif // _PlainProxyConnectionTest$CountingProxySelector_h_