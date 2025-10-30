#include <HeadersTest.h>

#include <HeadersTest$1.h>
#include <HeadersTest$10.h>
#include <HeadersTest$11.h>
#include <HeadersTest$2.h>
#include <HeadersTest$3.h>
#include <HeadersTest$4.h>
#include <HeadersTest$5.h>
#include <HeadersTest$6.h>
#include <HeadersTest$7.h>
#include <HeadersTest$8.h>
#include <HeadersTest$9.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/time/Duration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef ACCEPT_ALL
#undef NO_PROXY
#undef TEST_URI

using $HeadersTest$1 = ::HeadersTest$1;
using $HeadersTest$10 = ::HeadersTest$10;
using $HeadersTest$11 = ::HeadersTest$11;
using $HeadersTest$2 = ::HeadersTest$2;
using $HeadersTest$3 = ::HeadersTest$3;
using $HeadersTest$4 = ::HeadersTest$4;
using $HeadersTest$5 = ::HeadersTest$5;
using $HeadersTest$6 = ::HeadersTest$6;
using $HeadersTest$7 = ::HeadersTest$7;
using $HeadersTest$8 = ::HeadersTest$8;
using $HeadersTest$9 = ::HeadersTest$9;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $Duration = ::java::time::Duration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $BiPredicate = ::java::util::function::BiPredicate;

class HeadersTest$$Lambda$lambda$static$0 : public $BiPredicate {
	$class(HeadersTest$$Lambda$lambda$static$0, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* x, Object$* y) override {
		 return HeadersTest::lambda$static$0($cast($String, x), $cast($String, y));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HeadersTest$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HeadersTest$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadersTest$$Lambda$lambda$static$0::*)()>(&HeadersTest$$Lambda$lambda$static$0::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo HeadersTest$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"HeadersTest$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	nullptr,
	methodInfos
};
$Class* HeadersTest$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HeadersTest$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _HeadersTest_FieldInfo_[] = {
	{"ACCEPT_ALL", "Ljava/util/function/BiPredicate;", "Ljava/util/function/BiPredicate<Ljava/lang/String;Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(HeadersTest, ACCEPT_ALL)},
	{"TEST_URI", "Ljava/net/URI;", nullptr, $STATIC | $FINAL, $staticField(HeadersTest, TEST_URI)},
	{"client", "Ljava/net/http/HttpClient;", nullptr, $STATIC | $FINAL, $staticField(HeadersTest, client)},
	{}
};

$MethodInfo _HeadersTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadersTest::*)()>(&HeadersTest::init$))},
	{"bad", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&HeadersTest::bad)), "java.lang.Exception"},
	{"badTimeout", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&HeadersTest::badTimeout)), "java.lang.Exception"},
	{"badURI", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&HeadersTest::badURI)), "java.lang.Exception"},
	{"badValue", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&HeadersTest::badValue)), "java.lang.Exception"},
	{"good", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&HeadersTest::good))},
	{"goodValue", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&HeadersTest::goodValue))},
	{"lambda$static$0", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$String*)>(&HeadersTest::lambda$static$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadersTest::main)), "java.lang.Exception"},
	{"nullHeaders", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&HeadersTest::nullHeaders)), "java.lang.Exception"},
	{"nullName", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&HeadersTest::nullName)), "java.lang.Exception"},
	{"nullTimeout", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&HeadersTest::nullTimeout)), "java.lang.Exception"},
	{"nullURI", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&HeadersTest::nullURI)), "java.lang.Exception"},
	{"nullValue", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&HeadersTest::nullValue)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _HeadersTest_InnerClassesInfo_[] = {
	{"HeadersTest$11", nullptr, nullptr, 0},
	{"HeadersTest$10", nullptr, nullptr, 0},
	{"HeadersTest$9", nullptr, nullptr, 0},
	{"HeadersTest$8", nullptr, nullptr, 0},
	{"HeadersTest$7", nullptr, nullptr, 0},
	{"HeadersTest$6", nullptr, nullptr, 0},
	{"HeadersTest$5", nullptr, nullptr, 0},
	{"HeadersTest$4", nullptr, nullptr, 0},
	{"HeadersTest$3", nullptr, nullptr, 0},
	{"HeadersTest$2", nullptr, nullptr, 0},
	{"HeadersTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadersTest",
	"java.lang.Object",
	nullptr,
	_HeadersTest_FieldInfo_,
	_HeadersTest_MethodInfo_,
	nullptr,
	nullptr,
	_HeadersTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadersTest$11,HeadersTest$10,HeadersTest$9,HeadersTest$8,HeadersTest$7,HeadersTest$6,HeadersTest$5,HeadersTest$4,HeadersTest$3,HeadersTest$2,HeadersTest$1"
};

$Object* allocate$HeadersTest($Class* clazz) {
	return $of($alloc(HeadersTest));
}

$BiPredicate* HeadersTest::ACCEPT_ALL = nullptr;
$URI* HeadersTest::TEST_URI = nullptr;
$HttpClient* HeadersTest::client = nullptr;

void HeadersTest::init$() {
}

void HeadersTest::bad($String* name) {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(HeadersTest::TEST_URI));
	try {
		$nc(builder)->header(name, "foo"_s);
		$throwNew($RuntimeException, $$str({"Expected IAE for header:"_s, name}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($HeadersTest$1, name));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, $$str({"Expected IAE for header:"_s, name}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
}

void HeadersTest::badValue($String* value) {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(HeadersTest::TEST_URI));
	try {
		$nc(builder)->header("x-bad"_s, value);
		$throwNew($RuntimeException, $$str({"Expected IAE for header x-bad: "_s, $($($nc(value)->replace(static_cast<$CharSequence*>("\r"_s), static_cast<$CharSequence*>("\\r"_s)))->replace(static_cast<$CharSequence*>("\n"_s), static_cast<$CharSequence*>("\\n"_s)))}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($HeadersTest$2, value));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, $$str({"Expected IAE for header x-bad:"_s, $($($nc(value)->replace(static_cast<$CharSequence*>("\r"_s), static_cast<$CharSequence*>("\\r"_s)))->replace(static_cast<$CharSequence*>("\n"_s), static_cast<$CharSequence*>("\\n"_s)))}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
}

void HeadersTest::nullName() {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(HeadersTest::TEST_URI));
	try {
		$nc(builder)->header(nullptr, "foo"_s);
		$throwNew($RuntimeException, "Expected NPE for null header name"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($HeadersTest$3));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, "Expected NPE for null header name"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
}

void HeadersTest::nullValue() {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(HeadersTest::TEST_URI));
	try {
		$nc(builder)->header("x-bar"_s, nullptr);
		$throwNew($RuntimeException, "Expected NPE for null header value"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($HeadersTest$4));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, "Expected NPE for null header values"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($HeadersTest$5));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, "Expected NPE for null header value"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
}

void HeadersTest::nullHeaders() {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	try {
		$var($HttpRequest, req, $new($HeadersTest$6));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, "Expected NPE for null header name"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($HeadersTest$7));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, "Expected NPE for null header name"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
}

void HeadersTest::good($String* name) {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(HeadersTest::TEST_URI));
	try {
		$nc(builder)->header(name, "foo"_s);
	} catch ($IllegalArgumentException& e) {
		$throwNew($RuntimeException, $$str({"Unexpected IAE for header:"_s, name}));
	}
}

void HeadersTest::goodValue($String* value) {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(HeadersTest::TEST_URI));
	try {
		$nc(builder)->header("x-good"_s, value);
	} catch ($IllegalArgumentException& e) {
		$throwNew($RuntimeException, $$str({"Unexpected IAE for x-good: "_s, value}));
	}
}

void HeadersTest::badURI() {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder());
	$var($URI, uri, $URI::create($($nc($($nc(HeadersTest::TEST_URI)->toString()))->replace(static_cast<$CharSequence*>("http"_s), static_cast<$CharSequence*>("ftp"_s)))));
	try {
		$nc(builder)->uri(uri);
		$throwNew($RuntimeException, $$str({"Expected IAE for uri: "_s, uri}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
	try {
		$HttpRequest::newBuilder(uri);
		$throwNew($RuntimeException, $$str({"Expected IAE for uri: "_s, uri}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($HeadersTest$8, uri));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, $$str({"Expected IAE for uri:"_s, uri}));
	} catch ($IllegalArgumentException& expected) {
		$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
	}
}

void HeadersTest::nullURI() {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder());
	try {
		$nc(builder)->uri(nullptr);
		$throwNew($RuntimeException, "Expected NPE for null URI"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
	try {
		$HttpRequest::newBuilder(nullptr);
		$throwNew($RuntimeException, "Expected NPE for null uri"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($HeadersTest$9));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, "Expected NPE for null uri"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
}

void HeadersTest::badTimeout() {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(HeadersTest::TEST_URI));
	$var($Duration, zero, $Duration::ofSeconds(0));
	$var($Duration, negative, $Duration::ofSeconds(-10));
	{
		$var($Iterator, i$, $nc($($List::of(zero, negative)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Duration, bad, $cast($Duration, i$->next()));
			{
				try {
					$nc(builder)->timeout(zero);
					$throwNew($RuntimeException, $$str({"Expected IAE for timeout: "_s, bad}));
				} catch ($IllegalArgumentException& expected) {
					$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
				}
				try {
					$var($HttpRequest, req, $new($HeadersTest$10, bad));
					$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
					$throwNew($RuntimeException, $$str({"Expected IAE for timeout:"_s, bad}));
				} catch ($IllegalArgumentException& expected) {
					$nc($System::out)->println($$str({"Got expected IAE: "_s, expected}));
				}
			}
		}
	}
}

void HeadersTest::nullTimeout() {
	$init(HeadersTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder(HeadersTest::TEST_URI));
	try {
		$nc(builder)->timeout(nullptr);
		$throwNew($RuntimeException, "Expected NPE for null timeout"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
	try {
		$var($HttpRequest, req, $new($HeadersTest$11));
		$nc(HeadersTest::client)->send(req, $($HttpResponse$BodyHandlers::ofString()));
		$throwNew($RuntimeException, "Expected NPE for null timeout"_s);
	} catch ($NullPointerException& expected) {
		$nc($System::out)->println($$str({"Got expected NPE: "_s, expected}));
	}
}

void HeadersTest::main($StringArray* args) {
	$init(HeadersTest);
	bad("bad:header"_s);
	good("X-Foo!"_s);
	good("Bar~"_s);
	good("x"_s);
	bad(" "_s);
	good("Hello#world"_s);
	good("Qwer#ert"_s);
	badValue("blah\r\n blah"_s);
	goodValue("blah blah"_s);
	goodValue("blah  blah"_s);
	goodValue("\"blah\\\"  \\\"blah\""_s);
	nullName();
	nullValue();
	nullHeaders();
	badURI();
	nullURI();
	badTimeout();
	nullTimeout();
}

bool HeadersTest::lambda$static$0($String* x, $String* y) {
	$init(HeadersTest);
	return true;
}

void clinit$HeadersTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(HeadersTest::ACCEPT_ALL, static_cast<$BiPredicate*>($new(HeadersTest$$Lambda$lambda$static$0)));
	$assignStatic(HeadersTest::TEST_URI, $URI::create("http://www.foo.com/"_s));
	$init($HttpClient$Builder);
	$assignStatic(HeadersTest::client, $nc($($nc($($HttpClient::newBuilder()))->proxy($HttpClient$Builder::NO_PROXY)))->build());
}

HeadersTest::HeadersTest() {
}

$Class* HeadersTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HeadersTest$$Lambda$lambda$static$0::classInfo$.name)) {
			return HeadersTest$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(HeadersTest, name, initialize, &_HeadersTest_ClassInfo_, clinit$HeadersTest, allocate$HeadersTest);
	return class$;
}

$Class* HeadersTest::class$ = nullptr;