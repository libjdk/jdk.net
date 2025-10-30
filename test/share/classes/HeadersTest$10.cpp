#include <HeadersTest$10.h>

#include <HeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/time/Duration.h>
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
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $Duration = ::java::time::Duration;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiPredicate = ::java::util::function::BiPredicate;

$FieldInfo _HeadersTest$10_FieldInfo_[] = {
	{"val$bad", "Ljava/time/Duration;", nullptr, $FINAL | $SYNTHETIC, $field(HeadersTest$10, val$bad)},
	{}
};

$MethodInfo _HeadersTest$10_MethodInfo_[] = {
	{"<init>", "(Ljava/time/Duration;)V", nullptr, 0, $method(static_cast<void(HeadersTest$10::*)($Duration*)>(&HeadersTest$10::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadersTest$10_EnclosingMethodInfo_ = {
	"HeadersTest",
	"badTimeout",
	"()V"
};

$InnerClassInfo _HeadersTest$10_InnerClassesInfo_[] = {
	{"HeadersTest$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest$10_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest$10",
	"java.net.http.HttpRequest",
	nullptr,
	_HeadersTest$10_FieldInfo_,
	_HeadersTest$10_MethodInfo_,
	nullptr,
	&_HeadersTest$10_EnclosingMethodInfo_,
	_HeadersTest$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest"
};

$Object* allocate$HeadersTest$10($Class* clazz) {
	return $of($alloc(HeadersTest$10));
}

void HeadersTest$10::init$($Duration* val$bad) {
	$set(this, val$bad, val$bad);
	$HttpRequest::init$();
}

$Optional* HeadersTest$10::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$10::method() {
	return "GET"_s;
}

$Optional* HeadersTest$10::timeout() {
	return $Optional::of(this->val$bad);
}

bool HeadersTest$10::expectContinue() {
	return false;
}

$URI* HeadersTest$10::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$10::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$10::headers() {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $Map::of("x-good"_s, $($List::of($of("foo"_s)))));
	$init($HeadersTest);
	return $HttpHeaders::of(map, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$10::HeadersTest$10() {
}

$Class* HeadersTest$10::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$10, name, initialize, &_HeadersTest$10_ClassInfo_, allocate$HeadersTest$10);
	return class$;
}

$Class* HeadersTest$10::class$ = nullptr;