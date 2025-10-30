#include <ShortRequestBody$ByteArrayRequestBody.h>

#include <ShortRequestBody$AbstractDelegateRequestBody.h>
#include <ShortRequestBody.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <jcpp.h>

using $ShortRequestBody = ::ShortRequestBody;
using $ShortRequestBody$AbstractDelegateRequestBody = ::ShortRequestBody$AbstractDelegateRequestBody;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;

$MethodInfo _ShortRequestBody$ByteArrayRequestBody_MethodInfo_[] = {
	{"<init>", "([BI)V", nullptr, 0, $method(static_cast<void(ShortRequestBody$ByteArrayRequestBody::*)($bytes*,int32_t)>(&ShortRequestBody$ByteArrayRequestBody::init$))},
	{}
};

$InnerClassInfo _ShortRequestBody$ByteArrayRequestBody_InnerClassesInfo_[] = {
	{"ShortRequestBody$ByteArrayRequestBody", "ShortRequestBody", "ByteArrayRequestBody", $STATIC},
	{"ShortRequestBody$AbstractDelegateRequestBody", "ShortRequestBody", "AbstractDelegateRequestBody", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ShortRequestBody$ByteArrayRequestBody_ClassInfo_ = {
	$ACC_SUPER,
	"ShortRequestBody$ByteArrayRequestBody",
	"ShortRequestBody$AbstractDelegateRequestBody",
	nullptr,
	nullptr,
	_ShortRequestBody$ByteArrayRequestBody_MethodInfo_,
	nullptr,
	nullptr,
	_ShortRequestBody$ByteArrayRequestBody_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShortRequestBody"
};

$Object* allocate$ShortRequestBody$ByteArrayRequestBody($Class* clazz) {
	return $of($alloc(ShortRequestBody$ByteArrayRequestBody));
}

void ShortRequestBody$ByteArrayRequestBody::init$($bytes* body, int32_t additionalLength) {
	$ShortRequestBody$AbstractDelegateRequestBody::init$($($HttpRequest$BodyPublishers::ofByteArray(body)), $nc(body)->length + additionalLength);
}

ShortRequestBody$ByteArrayRequestBody::ShortRequestBody$ByteArrayRequestBody() {
}

$Class* ShortRequestBody$ByteArrayRequestBody::load$($String* name, bool initialize) {
	$loadClass(ShortRequestBody$ByteArrayRequestBody, name, initialize, &_ShortRequestBody$ByteArrayRequestBody_ClassInfo_, allocate$ShortRequestBody$ByteArrayRequestBody);
	return class$;
}

$Class* ShortRequestBody$ByteArrayRequestBody::class$ = nullptr;