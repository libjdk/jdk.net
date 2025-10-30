#include <HeadersTest$1.h>

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

$FieldInfo _HeadersTest$1_FieldInfo_[] = {
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HeadersTest$1, val$name)},
	{}
};

$MethodInfo _HeadersTest$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(HeadersTest$1::*)($String*)>(&HeadersTest$1::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadersTest$1_EnclosingMethodInfo_ = {
	"HeadersTest",
	"bad",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _HeadersTest$1_InnerClassesInfo_[] = {
	{"HeadersTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest$1",
	"java.net.http.HttpRequest",
	nullptr,
	_HeadersTest$1_FieldInfo_,
	_HeadersTest$1_MethodInfo_,
	nullptr,
	&_HeadersTest$1_EnclosingMethodInfo_,
	_HeadersTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest"
};

$Object* allocate$HeadersTest$1($Class* clazz) {
	return $of($alloc(HeadersTest$1));
}

void HeadersTest$1::init$($String* val$name) {
	$set(this, val$name, val$name);
	$HttpRequest::init$();
}

$Optional* HeadersTest$1::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$1::method() {
	return "GET"_s;
}

$Optional* HeadersTest$1::timeout() {
	return $Optional::empty();
}

bool HeadersTest$1::expectContinue() {
	return false;
}

$URI* HeadersTest$1::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$1::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$1::headers() {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $Map::of(this->val$name, $($List::of($of("foo"_s)))));
	$init($HeadersTest);
	return $HttpHeaders::of(map, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$1::HeadersTest$1() {
}

$Class* HeadersTest$1::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$1, name, initialize, &_HeadersTest$1_ClassInfo_, allocate$HeadersTest$1);
	return class$;
}

$Class* HeadersTest$1::class$ = nullptr;