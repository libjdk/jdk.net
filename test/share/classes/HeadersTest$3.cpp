#include <HeadersTest$3.h>

#include <HeadersTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef ACCEPT_ALL
#undef TEST_URI

using $HeadersTest = ::HeadersTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiPredicate = ::java::util::function::BiPredicate;

$MethodInfo _HeadersTest$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadersTest$3::*)()>(&HeadersTest$3::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadersTest$3_EnclosingMethodInfo_ = {
	"HeadersTest",
	"nullName",
	"()V"
};

$InnerClassInfo _HeadersTest$3_InnerClassesInfo_[] = {
	{"HeadersTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest$3",
	"java.net.http.HttpRequest",
	nullptr,
	nullptr,
	_HeadersTest$3_MethodInfo_,
	nullptr,
	&_HeadersTest$3_EnclosingMethodInfo_,
	_HeadersTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest"
};

$Object* allocate$HeadersTest$3($Class* clazz) {
	return $of($alloc(HeadersTest$3));
}

void HeadersTest$3::init$() {
	$HttpRequest::init$();
}

$Optional* HeadersTest$3::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$3::method() {
	return "GET"_s;
}

$Optional* HeadersTest$3::timeout() {
	return $Optional::empty();
}

bool HeadersTest$3::expectContinue() {
	return false;
}

$URI* HeadersTest$3::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$3::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$3::headers() {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $new($HashMap));
	map->put(nullptr, $($List::of($of("foo"_s))));
	$init($HeadersTest);
	return $HttpHeaders::of(map, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$3::HeadersTest$3() {
}

$Class* HeadersTest$3::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$3, name, initialize, &_HeadersTest$3_ClassInfo_, allocate$HeadersTest$3);
	return class$;
}

$Class* HeadersTest$3::class$ = nullptr;