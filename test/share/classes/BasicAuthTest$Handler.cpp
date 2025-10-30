#include <BasicAuthTest$Handler.h>

#include <BasicAuthTest.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef US_ASCII

using $BasicAuthTest = ::BasicAuthTest;
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

$FieldInfo _BasicAuthTest$Handler_FieldInfo_[] = {
	{"ok", "Z", nullptr, $STATIC | $VOLATILE, $staticField(BasicAuthTest$Handler, ok)},
	{}
};

$MethodInfo _BasicAuthTest$Handler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicAuthTest$Handler::*)()>(&BasicAuthTest$Handler::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _BasicAuthTest$Handler_InnerClassesInfo_[] = {
	{"BasicAuthTest$Handler", "BasicAuthTest", "Handler", $STATIC},
	{}
};

$ClassInfo _BasicAuthTest$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"BasicAuthTest$Handler",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_BasicAuthTest$Handler_FieldInfo_,
	_BasicAuthTest$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicAuthTest$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"BasicAuthTest"
};

$Object* allocate$BasicAuthTest$Handler($Class* clazz) {
	return $of($alloc(BasicAuthTest$Handler));
}

$volatile(bool) BasicAuthTest$Handler::ok = false;

void BasicAuthTest$Handler::init$() {
}

void BasicAuthTest$Handler::handle($HttpExchange* he) {
	$useLocalCurrentObjectStackCache();
	$var($String, method, $nc(he)->getRequestMethod());
	$var($InputStream, is, he->getRequestBody());
	if ($nc(method)->equalsIgnoreCase("POST"_s)) {
		$init($StandardCharsets);
		$var($String, requestBody, $new($String, $($nc(is)->readAllBytes()), $StandardCharsets::US_ASCII));
		if (!requestBody->equals("This is the POST body 123909090909090"_s)) {
			he->sendResponseHeaders(500, -1);
			BasicAuthTest$Handler::ok = false;
		} else {
			he->sendResponseHeaders(200, -1);
			BasicAuthTest$Handler::ok = true;
		}
	} else {
		he->sendResponseHeaders(200, "Hello world"_s->length());
		$var($OutputStream, os, he->getResponseBody());
		$init($StandardCharsets);
		$nc(os)->write($("Hello world"_s->getBytes($StandardCharsets::US_ASCII)));
		os->close();
		BasicAuthTest$Handler::ok = true;
	}
}

BasicAuthTest$Handler::BasicAuthTest$Handler() {
}

$Class* BasicAuthTest$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicAuthTest$Handler, name, initialize, &_BasicAuthTest$Handler_ClassInfo_, allocate$BasicAuthTest$Handler);
	return class$;
}

$Class* BasicAuthTest$Handler::class$ = nullptr;