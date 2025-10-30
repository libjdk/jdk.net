#include <PlainProxyConnectionTest$CountingProxySelector.h>

#include <PlainProxyConnectionTest.h>
#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/SocketAddress.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

using $PlainProxyConnectionTest = ::PlainProxyConnectionTest;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $List = ::java::util::List;

$FieldInfo _PlainProxyConnectionTest$CountingProxySelector_FieldInfo_[] = {
	{"proxySelector", "Ljava/net/ProxySelector;", nullptr, $PRIVATE | $FINAL, $field(PlainProxyConnectionTest$CountingProxySelector, proxySelector)},
	{"count", "I", nullptr, $PRIVATE | $VOLATILE, $field(PlainProxyConnectionTest$CountingProxySelector, count$)},
	{}
};

$MethodInfo _PlainProxyConnectionTest$CountingProxySelector_MethodInfo_[] = {
	{"<init>", "(Ljava/net/InetSocketAddress;)V", nullptr, $PRIVATE, $method(static_cast<void(PlainProxyConnectionTest$CountingProxySelector::*)($InetSocketAddress*)>(&PlainProxyConnectionTest$CountingProxySelector::init$))},
	{"connectFailed", "(Ljava/net/URI;Ljava/net/SocketAddress;Ljava/io/IOException;)V", nullptr, $PUBLIC},
	{"count", "()I", nullptr, 0},
	{"of", "(Ljava/net/InetSocketAddress;)LPlainProxyConnectionTest$CountingProxySelector;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PlainProxyConnectionTest$CountingProxySelector*(*)($InetSocketAddress*)>(&PlainProxyConnectionTest$CountingProxySelector::of))},
	{"select", "(Ljava/net/URI;)Ljava/util/List;", "(Ljava/net/URI;)Ljava/util/List<Ljava/net/Proxy;>;", $PUBLIC},
	{}
};

$InnerClassInfo _PlainProxyConnectionTest$CountingProxySelector_InnerClassesInfo_[] = {
	{"PlainProxyConnectionTest$CountingProxySelector", "PlainProxyConnectionTest", "CountingProxySelector", $STATIC},
	{}
};

$ClassInfo _PlainProxyConnectionTest$CountingProxySelector_ClassInfo_ = {
	$ACC_SUPER,
	"PlainProxyConnectionTest$CountingProxySelector",
	"java.net.ProxySelector",
	nullptr,
	_PlainProxyConnectionTest$CountingProxySelector_FieldInfo_,
	_PlainProxyConnectionTest$CountingProxySelector_MethodInfo_,
	nullptr,
	nullptr,
	_PlainProxyConnectionTest$CountingProxySelector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PlainProxyConnectionTest"
};

$Object* allocate$PlainProxyConnectionTest$CountingProxySelector($Class* clazz) {
	return $of($alloc(PlainProxyConnectionTest$CountingProxySelector));
}

void PlainProxyConnectionTest$CountingProxySelector::init$($InetSocketAddress* proxyAddress) {
	$ProxySelector::init$();
	$set(this, proxySelector, $ProxySelector::of(proxyAddress));
}

PlainProxyConnectionTest$CountingProxySelector* PlainProxyConnectionTest$CountingProxySelector::of($InetSocketAddress* proxyAddress) {
	$init(PlainProxyConnectionTest$CountingProxySelector);
	return $new(PlainProxyConnectionTest$CountingProxySelector, proxyAddress);
}

int32_t PlainProxyConnectionTest$CountingProxySelector::count() {
	return this->count$;
}

$List* PlainProxyConnectionTest$CountingProxySelector::select($URI* uri) {
	++this->count$;
	return $nc(this->proxySelector)->select(uri);
}

void PlainProxyConnectionTest$CountingProxySelector::connectFailed($URI* uri, $SocketAddress* sa, $IOException* ioe) {
	$nc(this->proxySelector)->connectFailed(uri, sa, ioe);
}

PlainProxyConnectionTest$CountingProxySelector::PlainProxyConnectionTest$CountingProxySelector() {
}

$Class* PlainProxyConnectionTest$CountingProxySelector::load$($String* name, bool initialize) {
	$loadClass(PlainProxyConnectionTest$CountingProxySelector, name, initialize, &_PlainProxyConnectionTest$CountingProxySelector_ClassInfo_, allocate$PlainProxyConnectionTest$CountingProxySelector);
	return class$;
}

$Class* PlainProxyConnectionTest$CountingProxySelector::class$ = nullptr;