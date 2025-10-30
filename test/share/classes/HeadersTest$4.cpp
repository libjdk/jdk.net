#include <HeadersTest$4.h>

#include <HeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
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
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiPredicate = ::java::util::function::BiPredicate;

$MethodInfo _HeadersTest$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadersTest$4::*)()>(&HeadersTest$4::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadersTest$4_EnclosingMethodInfo_ = {
	"HeadersTest",
	"nullValue",
	"()V"
};

$InnerClassInfo _HeadersTest$4_InnerClassesInfo_[] = {
	{"HeadersTest$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest$4_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest$4",
	"java.net.http.HttpRequest",
	nullptr,
	nullptr,
	_HeadersTest$4_MethodInfo_,
	nullptr,
	&_HeadersTest$4_EnclosingMethodInfo_,
	_HeadersTest$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest"
};

$Object* allocate$HeadersTest$4($Class* clazz) {
	return $of($alloc(HeadersTest$4));
}

void HeadersTest$4::init$() {
	$HttpRequest::init$();
}

$Optional* HeadersTest$4::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$4::method() {
	return "GET"_s;
}

$Optional* HeadersTest$4::timeout() {
	return $Optional::empty();
}

bool HeadersTest$4::expectContinue() {
	return false;
}

$URI* HeadersTest$4::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$4::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$4::headers() {
	$var($Map, map, $new($HashMap));
	map->put("x-bar"_s, nullptr);
	$init($HeadersTest);
	return $HttpHeaders::of(map, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$4::HeadersTest$4() {
}

$Class* HeadersTest$4::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$4, name, initialize, &_HeadersTest$4_ClassInfo_, allocate$HeadersTest$4);
	return class$;
}

$Class* HeadersTest$4::class$ = nullptr;