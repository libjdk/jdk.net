#include <MethodsTest.h>

#include <MethodsTest$1.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <jcpp.h>

#undef FORBIDDEN
#undef NO_PROXY
#undef TEST_URI

using $MethodsTest$1 = ::MethodsTest$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;

$FieldInfo _MethodsTest_FieldInfo_[] = {
	{"TEST_URI", "Ljava/net/URI;", nullptr, $STATIC | $FINAL, $staticField(MethodsTest, TEST_URI)},
	{"FORBIDDEN", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MethodsTest, FORBIDDEN)},
	{"client", "Ljava/net/http/HttpClient;", nullptr, $STATIC | $FINAL, $staticField(MethodsTest, client)},
	{}
};

$MethodInfo _MethodsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodsTest::*)()>(&MethodsTest::init$))},
	{"bad", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&MethodsTest::bad)), "java.io.IOException,java.lang.InterruptedException"},
	{"good", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&MethodsTest::good))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MethodsTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _MethodsTest_InnerClassesInfo_[] = {
	{"MethodsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MethodsTest",
	"java.lang.Object",
	nullptr,
	_MethodsTest_FieldInfo_,
	_MethodsTest_MethodInfo_,
	nullptr,
	nullptr,
	_MethodsTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MethodsTest$1"
};

$Object* allocate$MethodsTest($Class* clazz) {
	return $of($alloc(MethodsTest));
}

$URI* MethodsTest::TEST_URI = nullptr;
$String* MethodsTest::FORBIDDEN = nullptr;
$HttpClient* MethodsTest::client = nullptr;

void MethodsTest::init$() {
}

void MethodsTest::bad($String* name) {
	$init(MethodsTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(MethodsTest::TEST_URI));
	try {
		$nc(builder)->method(name, $($HttpRequest$BodyPublishers::noBody()));
		$throwNew($RuntimeException, $$str({"Expected IAE for method:"_s, name}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($MethodsTest$1, name));
		$nc(MethodsTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, $$str({"Expected IAE for method:"_s, name}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
}

void MethodsTest::good($String* name) {
	$init(MethodsTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(MethodsTest::TEST_URI));
	try {
		$nc(builder)->method(name, $($HttpRequest$BodyPublishers::noBody()));
	} catch ($IllegalArgumentException& e) {
		$throwNew($RuntimeException, $$str({"Unexpected IAE for header:"_s, name}));
	}
}

void MethodsTest::main($StringArray* args) {
	$init(MethodsTest);
	$useLocalCurrentObjectStackCache();
	bad("bad:method"_s);
	bad("Foo\n"_s);
	good("X-Foo!"_s);
	good("Bar~"_s);
	good("x"_s);
	bad(" "_s);
	bad("x y"_s);
	bad("x\t"_s);
	bad("Bar\r\n"_s);
	good("Hello#world"_s);
	good("Qwer#ert"_s);
	bad(u"m\u00e9thode"_s);
	for (char16_t c = (char16_t)0; c < 256; ++c) {
		if (c < 32 || $nc(MethodsTest::FORBIDDEN)->indexOf((int32_t)c) > -1 || c >= 127) {
			bad($$str({"me"_s, $$str(c), "thod"_s}));
			bad($$str({$$str(c), "thod"_s}));
			bad($$str({"me"_s, $$str(c)}));
		} else {
			good($$str({"me"_s, $$str(c), "thod"_s}));
			good($$str({$$str(c), "thod"_s}));
			good($$str({"me"_s, $$str(c)}));
		}
	}
}

void clinit$MethodsTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MethodsTest::FORBIDDEN, "()<>@,;:\\\"/[]?={} \t\r\n"_s);
	$assignStatic(MethodsTest::TEST_URI, $URI::create("http://www.foo.com/"_s));
	$init($HttpClient$Builder);
	$assignStatic(MethodsTest::client, $nc($($nc($($HttpClient::newBuilder()))->proxy($HttpClient$Builder::NO_PROXY)))->build());
}

MethodsTest::MethodsTest() {
}

$Class* MethodsTest::load$($String* name, bool initialize) {
	$loadClass(MethodsTest, name, initialize, &_MethodsTest_ClassInfo_, clinit$MethodsTest, allocate$MethodsTest);
	return class$;
}

$Class* MethodsTest::class$ = nullptr;