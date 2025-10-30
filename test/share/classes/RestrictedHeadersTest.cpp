#include <RestrictedHeadersTest.h>

#include <java/net/URI.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

$FieldInfo _RestrictedHeadersTest_FieldInfo_[] = {
	{"defaultRestrictedHeaders", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $STATIC, $staticField(RestrictedHeadersTest, defaultRestrictedHeaders)},
	{}
};

$MethodInfo _RestrictedHeadersTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RestrictedHeadersTest::*)()>(&RestrictedHeadersTest::init$))},
	{"checkHeader", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,bool)>(&RestrictedHeadersTest::checkHeader))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RestrictedHeadersTest::main))},
	{"runDefaultTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&RestrictedHeadersTest::runDefaultTest))},
	{"runTest", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Set*)>(&RestrictedHeadersTest::runTest))},
	{}
};

$ClassInfo _RestrictedHeadersTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RestrictedHeadersTest",
	"java.lang.Object",
	nullptr,
	_RestrictedHeadersTest_FieldInfo_,
	_RestrictedHeadersTest_MethodInfo_
};

$Object* allocate$RestrictedHeadersTest($Class* clazz) {
	return $of($alloc(RestrictedHeadersTest));
}

$Set* RestrictedHeadersTest::defaultRestrictedHeaders = nullptr;

void RestrictedHeadersTest::init$() {
}

void RestrictedHeadersTest::main($StringArray* args) {
	$init(RestrictedHeadersTest);
	if ($nc(args)->length == 0) {
		runDefaultTest();
	} else {
		runTest($($Set::of(args)));
	}
}

void RestrictedHeadersTest::runDefaultTest() {
	$init(RestrictedHeadersTest);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("DEFAULT TEST: no property set"_s);
	{
		$var($Iterator, i$, $nc(RestrictedHeadersTest::defaultRestrictedHeaders)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, header, $cast($String, i$->next()));
			{
				checkHeader(header, "foo"_s, false);
			}
		}
	}
	checkHeader("foobar"_s, "barfoo"_s, true);
	checkHeader("date"_s, "today"_s, true);
}

void RestrictedHeadersTest::checkHeader($String* name, $String* value, bool succeed) {
	$init(RestrictedHeadersTest);
	$useLocalCurrentObjectStackCache();
	try {
		$var($HttpRequest, request, $nc($($nc($($nc($($HttpRequest::newBuilder($($URI::create("https://foo.com/"_s)))))->header(name, value)))->GET()))->build());
		if (!succeed) {
			$var($String, s, $str({name, "/"_s, value, " should have failed"_s}));
			$throwNew($RuntimeException, s);
		}
		$nc($System::out)->printf("%s = %s succeeded as expected\n"_s, $$new($ObjectArray, {
			$of(name),
			$of(value)
		}));
	} catch ($IllegalArgumentException& iae) {
		if (succeed) {
			$var($String, s, $str({name, "/"_s, value, " should have succeeded"_s}));
			$throwNew($RuntimeException, s);
		}
		$nc($System::out)->printf("%s = %s failed as expected\n"_s, $$new($ObjectArray, {
			$of(name),
			$of(value)
		}));
	}
}

void RestrictedHeadersTest::runTest($Set* args) {
	$init(RestrictedHeadersTest);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->print("RUNTEST: allowed headers set in property: "_s);
	{
		$var($Iterator, i$, $nc(args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, arg, $cast($String, i$->next()));
			$nc($System::out)->printf("%s "_s, $$new($ObjectArray, {$of(arg)}));
		}
	}
	$nc($System::out)->println(""_s);
	{
		$var($Iterator, i$, args->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, header, $cast($String, i$->next()));
			{
				checkHeader(header, "val"_s, true);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(RestrictedHeadersTest::defaultRestrictedHeaders)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, header, $cast($String, i$->next()));
			{
				if (!args->contains(header)) {
					checkHeader(header, "foo"_s, false);
				}
			}
		}
	}
}

void clinit$RestrictedHeadersTest($Class* class$) {
	$assignStatic(RestrictedHeadersTest::defaultRestrictedHeaders, $Set::of("connection"_s, "content-length"_s, "expect"_s, "host"_s, "upgrade"_s));
}

RestrictedHeadersTest::RestrictedHeadersTest() {
}

$Class* RestrictedHeadersTest::load$($String* name, bool initialize) {
	$loadClass(RestrictedHeadersTest, name, initialize, &_RestrictedHeadersTest_ClassInfo_, clinit$RestrictedHeadersTest, allocate$RestrictedHeadersTest);
	return class$;
}

$Class* RestrictedHeadersTest::class$ = nullptr;