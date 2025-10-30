#include <MethodsTest$1.h>

#include <MethodsTest.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/BiPredicate.h>
#include <jcpp.h>

#undef TEST_URI

using $MethodsTest = ::MethodsTest;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BiPredicate = ::java::util::function::BiPredicate;

class MethodsTest$1$$Lambda$lambda$headers$0 : public $BiPredicate {
	$class(MethodsTest$1$$Lambda$lambda$headers$0, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* x, Object$* y) override {
		 return MethodsTest$1::lambda$headers$0($cast($String, x), $cast($String, y));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodsTest$1$$Lambda$lambda$headers$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodsTest$1$$Lambda$lambda$headers$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodsTest$1$$Lambda$lambda$headers$0::*)()>(&MethodsTest$1$$Lambda$lambda$headers$0::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MethodsTest$1$$Lambda$lambda$headers$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"MethodsTest$1$$Lambda$lambda$headers$0",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	nullptr,
	methodInfos
};
$Class* MethodsTest$1$$Lambda$lambda$headers$0::load$($String* name, bool initialize) {
	$loadClass(MethodsTest$1$$Lambda$lambda$headers$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodsTest$1$$Lambda$lambda$headers$0::class$ = nullptr;

$FieldInfo _MethodsTest$1_FieldInfo_[] = {
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(MethodsTest$1, val$name)},
	{}
};

$MethodInfo _MethodsTest$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MethodsTest$1::*)($String*)>(&MethodsTest$1::init$))},
	{"bodyPublisher", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpRequest$BodyPublisher;>;", $PUBLIC},
	{"expectContinue", "()Z", nullptr, $PUBLIC},
	{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC},
	{"lambda$headers$0", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$String*)>(&MethodsTest$1::lambda$headers$0))},
	{"method", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"timeout", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Duration;>;", $PUBLIC},
	{"uri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"version", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/net/http/HttpClient$Version;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _MethodsTest$1_EnclosingMethodInfo_ = {
	"MethodsTest",
	"bad",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _MethodsTest$1_InnerClassesInfo_[] = {
	{"MethodsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodsTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"MethodsTest$1",
	"java.net.http.HttpRequest",
	nullptr,
	_MethodsTest$1_FieldInfo_,
	_MethodsTest$1_MethodInfo_,
	nullptr,
	&_MethodsTest$1_EnclosingMethodInfo_,
	_MethodsTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MethodsTest"
};

$Object* allocate$MethodsTest$1($Class* clazz) {
	return $of($alloc(MethodsTest$1));
}

void MethodsTest$1::init$($String* val$name) {
	$set(this, val$name, val$name);
	$HttpRequest::init$();
}

$Optional* MethodsTest$1::bodyPublisher() {
	return $Optional::of($($HttpRequest$BodyPublishers::noBody()));
}

$String* MethodsTest$1::method() {
	return this->val$name;
}

$Optional* MethodsTest$1::timeout() {
	return $Optional::empty();
}

bool MethodsTest$1::expectContinue() {
	return false;
}

$URI* MethodsTest$1::uri() {
	$init($MethodsTest);
	return $MethodsTest::TEST_URI;
}

$Optional* MethodsTest$1::version() {
	return $Optional::empty();
}

$HttpHeaders* MethodsTest$1::headers() {
	$useLocalCurrentObjectStackCache();
	$var($Map, var$0, $Map::of());
	return $HttpHeaders::of(var$0, static_cast<$BiPredicate*>($$new(MethodsTest$1$$Lambda$lambda$headers$0)));
}

bool MethodsTest$1::lambda$headers$0($String* x, $String* y) {
	$init(MethodsTest$1);
	return true;
}

MethodsTest$1::MethodsTest$1() {
}

$Class* MethodsTest$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MethodsTest$1$$Lambda$lambda$headers$0::classInfo$.name)) {
			return MethodsTest$1$$Lambda$lambda$headers$0::load$(name, initialize);
		}
	}
	$loadClass(MethodsTest$1, name, initialize, &_MethodsTest$1_ClassInfo_, allocate$MethodsTest$1);
	return class$;
}

$Class* MethodsTest$1::class$ = nullptr;