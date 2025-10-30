#include <ShortRequestBody$StringRequestBody.h>

#include <ShortRequestBody$AbstractDelegateRequestBody.h>
#include <ShortRequestBody.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef UTF_8

using $ShortRequestBody = ::ShortRequestBody;
using $ShortRequestBody$AbstractDelegateRequestBody = ::ShortRequestBody$AbstractDelegateRequestBody;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$MethodInfo _ShortRequestBody$StringRequestBody_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(ShortRequestBody$StringRequestBody::*)($String*,int32_t)>(&ShortRequestBody$StringRequestBody::init$))},
	{}
};

$InnerClassInfo _ShortRequestBody$StringRequestBody_InnerClassesInfo_[] = {
	{"ShortRequestBody$StringRequestBody", "ShortRequestBody", "StringRequestBody", $STATIC},
	{"ShortRequestBody$AbstractDelegateRequestBody", "ShortRequestBody", "AbstractDelegateRequestBody", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ShortRequestBody$StringRequestBody_ClassInfo_ = {
	$ACC_SUPER,
	"ShortRequestBody$StringRequestBody",
	"ShortRequestBody$AbstractDelegateRequestBody",
	nullptr,
	nullptr,
	_ShortRequestBody$StringRequestBody_MethodInfo_,
	nullptr,
	nullptr,
	_ShortRequestBody$StringRequestBody_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShortRequestBody"
};

$Object* allocate$ShortRequestBody$StringRequestBody($Class* clazz) {
	return $of($alloc(ShortRequestBody$StringRequestBody));
}

void ShortRequestBody$StringRequestBody::init$($String* body, int32_t additionalLength) {
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest$BodyPublisher, var$0, $HttpRequest$BodyPublishers::ofString(body));
	$init($StandardCharsets);
	$ShortRequestBody$AbstractDelegateRequestBody::init$(var$0, $($nc(body)->getBytes($StandardCharsets::UTF_8))->length + additionalLength);
}

ShortRequestBody$StringRequestBody::ShortRequestBody$StringRequestBody() {
}

$Class* ShortRequestBody$StringRequestBody::load$($String* name, bool initialize) {
	$loadClass(ShortRequestBody$StringRequestBody, name, initialize, &_ShortRequestBody$StringRequestBody_ClassInfo_, allocate$ShortRequestBody$StringRequestBody);
	return class$;
}

$Class* ShortRequestBody$StringRequestBody::class$ = nullptr;