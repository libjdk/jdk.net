#include <HeadersTest$9.h>

#include <HeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef ACCEPT_ALL

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
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiPredicate = ::java::util::function::BiPredicate;

$MethodInfo _HeadersTest$9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadersTest$9::*)()>(&HeadersTest$9::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadersTest$9_EnclosingMethodInfo_ = {
	"HeadersTest",
	"nullURI",
	"()V"
};

$InnerClassInfo _HeadersTest$9_InnerClassesInfo_[] = {
	{"HeadersTest$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest$9_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest$9",
	"java.net.http.HttpRequest",
	nullptr,
	nullptr,
	_HeadersTest$9_MethodInfo_,
	nullptr,
	&_HeadersTest$9_EnclosingMethodInfo_,
	_HeadersTest$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest"
};

$Object* allocate$HeadersTest$9($Class* clazz) {
	return $of($alloc(HeadersTest$9));
}

void HeadersTest$9::init$() {
	$HttpRequest::init$();
}

$Optional* HeadersTest$9::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$9::method() {
	return "GET"_s;
}

$Optional* HeadersTest$9::timeout() {
	return $Optional::empty();
}

bool HeadersTest$9::expectContinue() {
	return false;
}

$URI* HeadersTest$9::uri() {
	return nullptr;
}

$Optional* HeadersTest$9::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$9::headers() {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $Map::of("x-good"_s, $($List::of($of("foo"_s)))));
	$init($HeadersTest);
	return $HttpHeaders::of(map, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$9::HeadersTest$9() {
}

$Class* HeadersTest$9::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$9, name, initialize, &_HeadersTest$9_ClassInfo_, allocate$HeadersTest$9);
	return class$;
}

$Class* HeadersTest$9::class$ = nullptr;