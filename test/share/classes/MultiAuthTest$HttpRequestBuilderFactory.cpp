#include <MultiAuthTest$HttpRequestBuilderFactory.h>

#include <MultiAuthTest.h>
#include <java/net/URI.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <jcpp.h>

using $MultiAuthTest = ::MultiAuthTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $Function = ::java::util::function::Function;

$MethodInfo _MultiAuthTest$HttpRequestBuilderFactory_MethodInfo_[] = {
	{"request", "(Ljava/net/URI;)Ljava/net/http/HttpRequest$Builder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiAuthTest$HttpRequestBuilderFactory_InnerClassesInfo_[] = {
	{"MultiAuthTest$HttpRequestBuilderFactory", "MultiAuthTest", "HttpRequestBuilderFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.net.http.HttpRequest$Builder", "java.net.http.HttpRequest", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MultiAuthTest$HttpRequestBuilderFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"MultiAuthTest$HttpRequestBuilderFactory",
	nullptr,
	"java.util.function.Function",
	nullptr,
	_MultiAuthTest$HttpRequestBuilderFactory_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/net/URI;Ljava/net/http/HttpRequest$Builder;>;",
	nullptr,
	_MultiAuthTest$HttpRequestBuilderFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiAuthTest"
};

$Object* allocate$MultiAuthTest$HttpRequestBuilderFactory($Class* clazz) {
	return $of($alloc(MultiAuthTest$HttpRequestBuilderFactory));
}

$HttpRequest$Builder* MultiAuthTest$HttpRequestBuilderFactory::request($URI* uri) {
	return $cast($HttpRequest$Builder, this->apply(uri));
}

$Class* MultiAuthTest$HttpRequestBuilderFactory::load$($String* name, bool initialize) {
	$loadClass(MultiAuthTest$HttpRequestBuilderFactory, name, initialize, &_MultiAuthTest$HttpRequestBuilderFactory_ClassInfo_, allocate$MultiAuthTest$HttpRequestBuilderFactory);
	return class$;
}

$Class* MultiAuthTest$HttpRequestBuilderFactory::class$ = nullptr;