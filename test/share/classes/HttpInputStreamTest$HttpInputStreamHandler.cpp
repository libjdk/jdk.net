#include <HttpInputStreamTest$HttpInputStreamHandler.h>

#include <HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream.h>
#include <HttpInputStreamTest.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse$ResponseInfo.h>
#include <jcpp.h>

#undef MAX_BUFFERS_IN_QUEUE

using $HttpInputStreamTest = ::HttpInputStreamTest;
using $HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream = ::HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $HttpResponse$ResponseInfo = ::java::net::http::HttpResponse$ResponseInfo;

$FieldInfo _HttpInputStreamTest$HttpInputStreamHandler_FieldInfo_[] = {
	{"MAX_BUFFERS_IN_QUEUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HttpInputStreamTest$HttpInputStreamHandler, MAX_BUFFERS_IN_QUEUE)},
	{"maxBuffers", "I", nullptr, $PRIVATE | $FINAL, $field(HttpInputStreamTest$HttpInputStreamHandler, maxBuffers)},
	{}
};

$MethodInfo _HttpInputStreamTest$HttpInputStreamHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpInputStreamTest$HttpInputStreamHandler::*)()>(&HttpInputStreamTest$HttpInputStreamHandler::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(HttpInputStreamTest$HttpInputStreamHandler::*)(int32_t)>(&HttpInputStreamTest$HttpInputStreamHandler::init$))},
	{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber<Ljava/io/InputStream;>;", $PUBLIC},
	{}
};

$InnerClassInfo _HttpInputStreamTest$HttpInputStreamHandler_InnerClassesInfo_[] = {
	{"HttpInputStreamTest$HttpInputStreamHandler", "HttpInputStreamTest", "HttpInputStreamHandler", $PUBLIC | $STATIC},
	{"java.net.http.HttpResponse$BodyHandler", "java.net.http.HttpResponse", "BodyHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream", "HttpInputStreamTest$HttpInputStreamHandler", "HttpResponseInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HttpInputStreamTest$HttpInputStreamHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HttpInputStreamTest$HttpInputStreamHandler",
	"java.lang.Object",
	"java.net.http.HttpResponse$BodyHandler",
	_HttpInputStreamTest$HttpInputStreamHandler_FieldInfo_,
	_HttpInputStreamTest$HttpInputStreamHandler_MethodInfo_,
	"Ljava/lang/Object;Ljava/net/http/HttpResponse$BodyHandler<Ljava/io/InputStream;>;",
	nullptr,
	_HttpInputStreamTest$HttpInputStreamHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HttpInputStreamTest"
};

$Object* allocate$HttpInputStreamTest$HttpInputStreamHandler($Class* clazz) {
	return $of($alloc(HttpInputStreamTest$HttpInputStreamHandler));
}

void HttpInputStreamTest$HttpInputStreamHandler::init$() {
	HttpInputStreamTest$HttpInputStreamHandler::init$(HttpInputStreamTest$HttpInputStreamHandler::MAX_BUFFERS_IN_QUEUE);
}

void HttpInputStreamTest$HttpInputStreamHandler::init$(int32_t maxBuffers) {
	this->maxBuffers = maxBuffers <= 0 ? HttpInputStreamTest$HttpInputStreamHandler::MAX_BUFFERS_IN_QUEUE : maxBuffers;
}

$HttpResponse$BodySubscriber* HttpInputStreamTest$HttpInputStreamHandler::apply($HttpResponse$ResponseInfo* rinfo) {
	return $new($HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, this->maxBuffers);
}

HttpInputStreamTest$HttpInputStreamHandler::HttpInputStreamTest$HttpInputStreamHandler() {
}

$Class* HttpInputStreamTest$HttpInputStreamHandler::load$($String* name, bool initialize) {
	$loadClass(HttpInputStreamTest$HttpInputStreamHandler, name, initialize, &_HttpInputStreamTest$HttpInputStreamHandler_ClassInfo_, allocate$HttpInputStreamTest$HttpInputStreamHandler);
	return class$;
}

$Class* HttpInputStreamTest$HttpInputStreamHandler::class$ = nullptr;