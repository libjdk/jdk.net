#include <ShortRequestBody$FileRequestBody.h>

#include <ShortRequestBody$AbstractDelegateRequestBody.h>
#include <ShortRequestBody.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ShortRequestBody = ::ShortRequestBody;
using $ShortRequestBody$AbstractDelegateRequestBody = ::ShortRequestBody$AbstractDelegateRequestBody;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

$MethodInfo _ShortRequestBody$FileRequestBody_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;I)V", nullptr, 0, $method(static_cast<void(ShortRequestBody$FileRequestBody::*)($Path*,int32_t)>(&ShortRequestBody$FileRequestBody::init$)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ShortRequestBody$FileRequestBody_InnerClassesInfo_[] = {
	{"ShortRequestBody$FileRequestBody", "ShortRequestBody", "FileRequestBody", $STATIC},
	{"ShortRequestBody$AbstractDelegateRequestBody", "ShortRequestBody", "AbstractDelegateRequestBody", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ShortRequestBody$FileRequestBody_ClassInfo_ = {
	$ACC_SUPER,
	"ShortRequestBody$FileRequestBody",
	"ShortRequestBody$AbstractDelegateRequestBody",
	nullptr,
	nullptr,
	_ShortRequestBody$FileRequestBody_MethodInfo_,
	nullptr,
	nullptr,
	_ShortRequestBody$FileRequestBody_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShortRequestBody"
};

$Object* allocate$ShortRequestBody$FileRequestBody($Class* clazz) {
	return $of($alloc(ShortRequestBody$FileRequestBody));
}

void ShortRequestBody$FileRequestBody::init$($Path* path, int32_t additionalLength) {
	$var($HttpRequest$BodyPublisher, var$0, $HttpRequest$BodyPublishers::ofFile(path));
	$ShortRequestBody$AbstractDelegateRequestBody::init$(var$0, $Files::size(path) + additionalLength);
}

ShortRequestBody$FileRequestBody::ShortRequestBody$FileRequestBody() {
}

$Class* ShortRequestBody$FileRequestBody::load$($String* name, bool initialize) {
	$loadClass(ShortRequestBody$FileRequestBody, name, initialize, &_ShortRequestBody$FileRequestBody_ClassInfo_, allocate$ShortRequestBody$FileRequestBody);
	return class$;
}

$Class* ShortRequestBody$FileRequestBody::class$ = nullptr;