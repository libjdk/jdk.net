#include <HeadersTest$7.h>

#include <HeadersTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/Optional.h>
#include <jcpp.h>

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
using $Optional = ::java::util::Optional;

$MethodInfo _HeadersTest$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadersTest$7::*)()>(&HeadersTest$7::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadersTest$7_EnclosingMethodInfo_ = {
	"HeadersTest",
	"nullHeaders",
	"()V"
};

$InnerClassInfo _HeadersTest$7_InnerClassesInfo_[] = {
	{"HeadersTest$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadersTest$7_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest$7",
	"java.net.http.HttpRequest",
	nullptr,
	nullptr,
	_HeadersTest$7_MethodInfo_,
	nullptr,
	&_HeadersTest$7_EnclosingMethodInfo_,
	_HeadersTest$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest"
};

$Object* allocate$HeadersTest$7($Class* clazz) {
	return $of($alloc(HeadersTest$7));
}

void HeadersTest$7::init$() {
	$HttpRequest::init$();
}

$Optional* HeadersTest$7::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* HeadersTest$7::method() {
	return "GET"_s;
}

$Optional* HeadersTest$7::timeout() {
	return $Optional::empty();
}

bool HeadersTest$7::expectContinue() {
	return false;
}

$URI* HeadersTest$7::uri() {
	$init($HeadersTest);
	return $HeadersTest::TEST_URI;
}

$Optional* HeadersTest$7::version() {
	return $Optional::empty();
}

$HttpHeaders* HeadersTest$7::headers() {
	return nullptr;
}

HeadersTest$7::HeadersTest$7() {
}

$Class* HeadersTest$7::load$($String* name, bool initialize) {
	$loadClass(HeadersTest$7, name, initialize, &_HeadersTest$7_ClassInfo_, allocate$HeadersTest$7);
	return class$;
}

$Class* HeadersTest$7::class$ = nullptr;