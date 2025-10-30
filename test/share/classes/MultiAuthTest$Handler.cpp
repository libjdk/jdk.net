#include <MultiAuthTest$Handler.h>

#include <MultiAuthTest.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef POST_BODY
#undef US_ASCII

using $MultiAuthTest = ::MultiAuthTest;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$FieldInfo _MultiAuthTest$Handler_FieldInfo_[] = {
	{"ok", "Z", nullptr, $STATIC | $VOLATILE, $staticField(MultiAuthTest$Handler, ok)},
	{}
};

$MethodInfo _MultiAuthTest$Handler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MultiAuthTest$Handler::*)()>(&MultiAuthTest$Handler::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _MultiAuthTest$Handler_InnerClassesInfo_[] = {
	{"MultiAuthTest$Handler", "MultiAuthTest", "Handler", $STATIC},
	{}
};

$ClassInfo _MultiAuthTest$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"MultiAuthTest$Handler",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_MultiAuthTest$Handler_FieldInfo_,
	_MultiAuthTest$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_MultiAuthTest$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiAuthTest"
};

$Object* allocate$MultiAuthTest$Handler($Class* clazz) {
	return $of($alloc(MultiAuthTest$Handler));
}

$volatile(bool) MultiAuthTest$Handler::ok = false;

void MultiAuthTest$Handler::init$() {
}

void MultiAuthTest$Handler::handle($HttpExchange* he) {
	$useLocalCurrentObjectStackCache();
	$var($String, method, $nc(he)->getRequestMethod());
	$var($InputStream, is, he->getRequestBody());
	if ($nc(method)->equalsIgnoreCase("POST"_s)) {
		$init($StandardCharsets);
		$var($String, requestBody, $new($String, $($nc(is)->readAllBytes()), $StandardCharsets::US_ASCII));
		$init($MultiAuthTest);
		if (!requestBody->equals($MultiAuthTest::POST_BODY)) {
			he->sendResponseHeaders(500, -1);
			MultiAuthTest$Handler::ok = false;
		} else {
			he->sendResponseHeaders(200, -1);
			MultiAuthTest$Handler::ok = true;
		}
	} else {
		he->sendResponseHeaders(200, "Hello world"_s->length());
		$var($OutputStream, os, he->getResponseBody());
		$init($StandardCharsets);
		$nc(os)->write($("Hello world"_s->getBytes($StandardCharsets::US_ASCII)));
		os->close();
		MultiAuthTest$Handler::ok = true;
	}
}

MultiAuthTest$Handler::MultiAuthTest$Handler() {
}

$Class* MultiAuthTest$Handler::load$($String* name, bool initialize) {
	$loadClass(MultiAuthTest$Handler, name, initialize, &_MultiAuthTest$Handler_ClassInfo_, allocate$MultiAuthTest$Handler);
	return class$;
}

$Class* MultiAuthTest$Handler::class$ = nullptr;