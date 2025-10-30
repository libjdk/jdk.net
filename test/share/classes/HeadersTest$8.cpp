#include <HeadersTest$8.h>

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

$FieldInfo _HeadersTest$8_FieldInfo_[] = {
	{"val$uri", "Ljava/net/URI;", nullptr, $FINAL | $SYNTHETIC, $field(HeadersTest$8, val$uri)},
	{}
};

$MethodInfo _HeadersTest$8_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URI;)V", nullptr, 0, $method(static_cast<void(HeadersTest$8::*)($URI*)>(&HeadersTest$8::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadersTest$8_EnclosingMethodInfo_ = {
	"HeadersTest",
	"badURI",
	"()V"
};

$InnerClassInfo _HeadersTest$8_InnerClassesInfo_[] = {
	{"HeadersTest$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest$8_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest$8",
	"java.net.http.HttpRequest",
	nullptr,
	_HeadersTest$8_FieldInfo_,
	_HeadersTest$8_MethodInfo_,
	nullptr,
	&_HeadersTest$8_EnclosingMethodInfo_,
	_HeadersTest$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest"
};

$Object* allocate$HeadersTest$8($Class* clazz) {
	return $of($alloc(HeadersTest$8));
}

void HeadersTest$8::init$($URI* val$uri) {
	$set(this, val$uri, val$uri);
	$HttpRequest::init$();
}

$Optional* HeadersTest$8::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$8::method() {
	return "GET"_s;
}

$Optional* HeadersTest$8::timeout() {
	return $Optional::empty();
}

bool HeadersTest$8::expectContinue() {
	return false;
}

$URI* HeadersTest$8::uri() {
	return this->val$uri;
}

$Optional* HeadersTest$8::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$8::headers() {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $Map::of("x-good"_s, $($List::of($of("foo"_s)))));
	$init($HeadersTest);
	return $HttpHeaders::of(map, $HeadersTest::ACCEPT_ALL);
}

HeadersTest$8::HeadersTest$8() {
}

$Class* HeadersTest$8::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$8, name, initialize, &_HeadersTest$8_ClassInfo_, allocate$HeadersTest$8);
	return class$;
}

$Class* HeadersTest$8::class$ = nullptr;