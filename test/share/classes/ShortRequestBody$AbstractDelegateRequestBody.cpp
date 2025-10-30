#include <ShortRequestBody$AbstractDelegateRequestBody.h>

#include <ShortRequestBody.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jcpp.h>

using $ShortRequestBody = ::ShortRequestBody;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

$FieldInfo _ShortRequestBody$AbstractDelegateRequestBody_FieldInfo_[] = {
	{"delegate", "Ljava/net/http/HttpRequest$BodyPublisher;", nullptr, $FINAL, $field(ShortRequestBody$AbstractDelegateRequestBody, delegate)},
	{"contentLength", "J", nullptr, $FINAL, $field(ShortRequestBody$AbstractDelegateRequestBody, contentLength$)},
	{}
};

$MethodInfo _ShortRequestBody$AbstractDelegateRequestBody_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/HttpRequest$BodyPublisher;J)V", nullptr, 0, $method(static_cast<void(ShortRequestBody$AbstractDelegateRequestBody::*)($HttpRequest$BodyPublisher*,int64_t)>(&ShortRequestBody$AbstractDelegateRequestBody::init$))},
	{"contentLength", "()J", nullptr, $PUBLIC},
	{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _ShortRequestBody$AbstractDelegateRequestBody_InnerClassesInfo_[] = {
	{"ShortRequestBody$AbstractDelegateRequestBody", "ShortRequestBody", "AbstractDelegateRequestBody", $STATIC | $ABSTRACT},
	{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ShortRequestBody$AbstractDelegateRequestBody_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"ShortRequestBody$AbstractDelegateRequestBody",
	"java.lang.Object",
	"java.net.http.HttpRequest$BodyPublisher",
	_ShortRequestBody$AbstractDelegateRequestBody_FieldInfo_,
	_ShortRequestBody$AbstractDelegateRequestBody_MethodInfo_,
	nullptr,
	nullptr,
	_ShortRequestBody$AbstractDelegateRequestBody_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShortRequestBody"
};

$Object* allocate$ShortRequestBody$AbstractDelegateRequestBody($Class* clazz) {
	return $of($alloc(ShortRequestBody$AbstractDelegateRequestBody));
}

void ShortRequestBody$AbstractDelegateRequestBody::init$($HttpRequest$BodyPublisher* delegate, int64_t contentLength) {
	$set(this, delegate, delegate);
	this->contentLength$ = contentLength;
}

void ShortRequestBody$AbstractDelegateRequestBody::subscribe($Flow$Subscriber* subscriber) {
	$nc(this->delegate)->subscribe(subscriber);
}

int64_t ShortRequestBody$AbstractDelegateRequestBody::contentLength() {
	return this->contentLength$;
}

ShortRequestBody$AbstractDelegateRequestBody::ShortRequestBody$AbstractDelegateRequestBody() {
}

$Class* ShortRequestBody$AbstractDelegateRequestBody::load$($String* name, bool initialize) {
	$loadClass(ShortRequestBody$AbstractDelegateRequestBody, name, initialize, &_ShortRequestBody$AbstractDelegateRequestBody_ClassInfo_, allocate$ShortRequestBody$AbstractDelegateRequestBody);
	return class$;
}

$Class* ShortRequestBody$AbstractDelegateRequestBody::class$ = nullptr;