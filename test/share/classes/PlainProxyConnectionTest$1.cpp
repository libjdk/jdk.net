#include <PlainProxyConnectionTest$1.h>

#include <PlainProxyConnectionTest.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/OutputStream.h>
#include <java/net/InetSocketAddress.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <jcpp.h>

#undef UTF_8

using $PlainProxyConnectionTest = ::PlainProxyConnectionTest;
using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;

$MethodInfo _PlainProxyConnectionTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PlainProxyConnectionTest$1::*)()>(&PlainProxyConnectionTest$1::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _PlainProxyConnectionTest$1_EnclosingMethodInfo_ = {
	"PlainProxyConnectionTest",
	"createHttpsServer",
	"()Lcom/sun/net/httpserver/HttpServer;"
};

$InnerClassInfo _PlainProxyConnectionTest$1_InnerClassesInfo_[] = {
	{"PlainProxyConnectionTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PlainProxyConnectionTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"PlainProxyConnectionTest$1",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	nullptr,
	_PlainProxyConnectionTest$1_MethodInfo_,
	nullptr,
	&_PlainProxyConnectionTest$1_EnclosingMethodInfo_,
	_PlainProxyConnectionTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PlainProxyConnectionTest"
};

$Object* allocate$PlainProxyConnectionTest$1($Class* clazz) {
	return $of($alloc(PlainProxyConnectionTest$1));
}

void PlainProxyConnectionTest$1::init$() {
}

void PlainProxyConnectionTest$1::handle($HttpExchange* he) {
	$useLocalCurrentObjectStackCache();
	$init($PlainProxyConnectionTest);
	$nc($PlainProxyConnectionTest::connections)->add($($nc(he)->getRemoteAddress()));
	$nc($($nc(he)->getResponseHeaders()))->add("encoding"_s, "UTF-8"_s);
	$init($StandardCharsets);
	$var($bytes, bytes, "<html><body><p>Hello World!</body></html>"_s->getBytes($StandardCharsets::UTF_8));
	he->sendResponseHeaders(200, bytes->length > 0 ? bytes->length : -1);
	$nc($(he->getResponseBody()))->write(bytes);
	he->close();
}

PlainProxyConnectionTest$1::PlainProxyConnectionTest$1() {
}

$Class* PlainProxyConnectionTest$1::load$($String* name, bool initialize) {
	$loadClass(PlainProxyConnectionTest$1, name, initialize, &_PlainProxyConnectionTest$1_ClassInfo_, allocate$PlainProxyConnectionTest$1);
	return class$;
}

$Class* PlainProxyConnectionTest$1::class$ = nullptr;