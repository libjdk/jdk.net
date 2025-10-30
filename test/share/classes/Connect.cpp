#include <Connect.h>

#include <java/io/IOException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;

$MethodInfo _Connect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Connect::*)()>(&Connect::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Connect::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Connect_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Connect",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Connect_MethodInfo_
};

$Object* allocate$Connect($Class* clazz) {
	return $of($alloc(Connect));
}

void Connect::init$() {
}

void Connect::main($StringArray* s) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($URL, url, $new($URL, "file:azwe.txt"_s));
		$var($URLConnection, urlConnection, url->openConnection());
		$nc(urlConnection)->connect();
		$throwNew($RuntimeException, "No FileNotFoundException thrown."_s);
	} catch ($MalformedURLException& e) {
	} catch ($IOException& e) {
	}
}

Connect::Connect() {
}

$Class* Connect::load$($String* name, bool initialize) {
	$loadClass(Connect, name, initialize, &_Connect_ClassInfo_, allocate$Connect);
	return class$;
}

$Class* Connect::class$ = nullptr;