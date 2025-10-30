#include <HeadersTest$2.h>

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
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiPredicate = ::java::util::function::BiPredicate;

$FieldInfo _HeadersTest$2_FieldInfo_[] = {
	{"val$value", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HeadersTest$2, val$value)},
	{}
};

$MethodInfo _HeadersTest$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(HeadersTest$2::*)($String*)>(&HeadersTest$2::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadersTest$2_EnclosingMethodInfo_ = {
	"HeadersTest",
	"badValue",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _HeadersTest$2_InnerClassesInfo_[] = {
	{"HeadersTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest$2",
	"java.net.http.HttpRequest",
	nullptr,
	_HeadersTest$2_FieldInfo_,
	_HeadersTest$2_MethodInfo_,
	nullptr,
	&_HeadersTest$2_EnclosingMethodInfo_,
	_HeadersTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest"
};

$Object* allocate$HeadersTest$2($Class* clazz) {
	return $of($alloc(HeadersTest$2));
}

void HeadersTest$2::init$($String* val$value) {
	$set(this, val$value, val$value);
	$HttpRequest::init$();
}

$Optional* HeadersTest$2::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$2::method() {
	return "GET"_s;
}

$Optional* HeadersTest$2::timeout() {
	return $Optional::empty();
}

bool HeadersTest$2::expectContinue() {
	return false;
}

$URI* HeadersTest$2::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$2::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$2::headers() {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $Map::of("x-bad"_s, $($List::of($of(this->val$value)))));
	$init($HeadersTest);
	return $HttpHeaders::of(map, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$2::HeadersTest$2() {
}

$Class* HeadersTest$2::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$2, name, initialize, &_HeadersTest$2_ClassInfo_, allocate$HeadersTest$2);
	return class$;
}

$Class* HeadersTest$2::class$ = nullptr;