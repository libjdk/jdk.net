#include <ZeroRedirects$Handler.h>

#include <ZeroRedirects.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $ZeroRedirects = ::ZeroRedirects;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ZeroRedirects$Handler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ZeroRedirects$Handler::*)()>(&ZeroRedirects$Handler::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ZeroRedirects$Handler_InnerClassesInfo_[] = {
	{"ZeroRedirects$Handler", "ZeroRedirects", "Handler", $STATIC},
	{}
};

$ClassInfo _ZeroRedirects$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"ZeroRedirects$Handler",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	nullptr,
	_ZeroRedirects$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_ZeroRedirects$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ZeroRedirects"
};

$Object* allocate$ZeroRedirects$Handler($Class* clazz) {
	return $of($alloc(ZeroRedirects$Handler));
}

void ZeroRedirects$Handler::init$() {
}

void ZeroRedirects$Handler::handle($HttpExchange* t) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, reply, "Hello world"_s);
		int32_t len = reply->length();
		$nc($System::out)->printf("Sending response 200\n"_s, $$new($ObjectArray, 0));
		$nc(t)->sendResponseHeaders(200, len);
		$var($OutputStream, o, t->getResponseBody());
		$nc(o)->write($(reply->getBytes()));
		t->close();
	}
}

ZeroRedirects$Handler::ZeroRedirects$Handler() {
}

$Class* ZeroRedirects$Handler::load$($String* name, bool initialize) {
	$loadClass(ZeroRedirects$Handler, name, initialize, &_ZeroRedirects$Handler_ClassInfo_, allocate$ZeroRedirects$Handler);
	return class$;
}

$Class* ZeroRedirects$Handler::class$ = nullptr;