#include <HeadersTest$5.h>

#include <HeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
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
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiPredicate = ::java::util::function::BiPredicate;

$MethodInfo _HeadersTest$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadersTest$5::*)()>(&HeadersTest$5::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadersTest$5_EnclosingMethodInfo_ = {
	"HeadersTest",
	"nullValue",
	"()V"
};

$InnerClassInfo _HeadersTest$5_InnerClassesInfo_[] = {
	{"HeadersTest$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest$5_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest$5",
	"java.net.http.HttpRequest",
	nullptr,
	nullptr,
	_HeadersTest$5_MethodInfo_,
	nullptr,
	&_HeadersTest$5_EnclosingMethodInfo_,
	_HeadersTest$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest"
};

$Object* allocate$HeadersTest$5($Class* clazz) {
	return $of($alloc(HeadersTest$5));
}

void HeadersTest$5::init$() {
	$HttpRequest::init$();
}

$Optional* HeadersTest$5::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$5::method() {
	return "GET"_s;
}

$Optional* HeadersTest$5::timeout() {
	return $Optional::empty();
}

bool HeadersTest$5::expectContinue() {
	return false;
}

$URI* HeadersTest$5::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$5::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$5::headers() {
	$useLocalCurrentObjectStackCache();
	$var($List, values, $new($ArrayList));
	values->add("foo"_s);
	values->add(nullptr);
	$init($HeadersTest);
	return $HttpHeaders::of($($Map::of("x-bar"_s, values)), $HeadersTest::ACCEPT_ALL);
}

HeadersTest$5::HeadersTest$5() {
}

$Class* HeadersTest$5::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$5, name, initialize, &_HeadersTest$5_ClassInfo_, allocate$HeadersTest$5);
	return class$;
}

$Class* HeadersTest$5::class$ = nullptr;