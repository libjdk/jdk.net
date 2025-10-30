#include <HttpRequestBuilderTest.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/time/Duration.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef TEST_URI

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $Duration = ::java::time::Duration;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

class HttpRequestBuilderTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$0::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$0::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$1$1::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$2$2::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$3$3::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$3$3::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$4$4 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$4();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$4$4::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$4$4::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$5$5 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$5$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$5();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$5$5::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$5$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$5$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$5$5::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$5$5::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$6$6 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$6$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$6();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$6$6::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$6$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$6$6",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$6$6::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$6$6::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$uri$7 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$uri$7, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($nc(inst$)->uri($cast($URI, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$uri$7>());
	}
	$HttpRequest$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$uri$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$uri$7, inst$)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$uri$7::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$uri$7::*)($HttpRequest$Builder*)>(&HttpRequestBuilderTest$$Lambda$uri$7::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$uri$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$uri$7",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$uri$7::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$uri$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$uri$7::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$header$8 : public $BiFunction {
	$class(HttpRequestBuilderTest$$Lambda$header$8, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0, Object$* arg1) override {
		 return $of($nc(inst$)->header($cast($String, arg0), $cast($String, arg1)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$header$8>());
	}
	$HttpRequest$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$header$8::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$header$8, inst$)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$header$8::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$header$8::*)($HttpRequest$Builder*)>(&HttpRequestBuilderTest$$Lambda$header$8::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$header$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$header$8",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$header$8::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$header$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$header$8::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$headers$9 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$headers$9, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($nc(inst$)->headers($cast($StringArray, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$headers$9>());
	}
	$HttpRequest$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$headers$9::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$headers$9, inst$)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$headers$9::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$headers$9::*)($HttpRequest$Builder*)>(&HttpRequestBuilderTest$$Lambda$headers$9::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$headers$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$headers$9",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$headers$9::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$headers$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$headers$9::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$7$10 : public $Runnable {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$7$10, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HttpRequestBuilderTest::lambda$main$7();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$7$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$7$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$7$10::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$7$10::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$7$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$7$10",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$7$10::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$7$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$7$10::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$POST$11 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$POST$11, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($nc(inst$)->POST($cast($HttpRequest$BodyPublisher, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$POST$11>());
	}
	$HttpRequest$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$POST$11::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$POST$11, inst$)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$POST$11::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$POST$11::*)($HttpRequest$Builder*)>(&HttpRequestBuilderTest$$Lambda$POST$11::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$POST$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$POST$11",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$POST$11::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$POST$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$POST$11::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$PUT$12 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$PUT$12, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($nc(inst$)->PUT($cast($HttpRequest$BodyPublisher, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$PUT$12>());
	}
	$HttpRequest$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$PUT$12::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$PUT$12, inst$)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$PUT$12::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$PUT$12::*)($HttpRequest$Builder*)>(&HttpRequestBuilderTest$$Lambda$PUT$12::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$PUT$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$PUT$12",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$PUT$12::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$PUT$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$PUT$12::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$method$13 : public $BiFunction {
	$class(HttpRequestBuilderTest$$Lambda$method$13, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0, Object$* arg1) override {
		 return $of($nc(inst$)->method($cast($String, arg0), $cast($HttpRequest$BodyPublisher, arg1)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$method$13>());
	}
	$HttpRequest$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$method$13::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$method$13, inst$)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$method$13::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$method$13::*)($HttpRequest$Builder*)>(&HttpRequestBuilderTest$$Lambda$method$13::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$method$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$method$13",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$method$13::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$method$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$method$13::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$setHeader$14 : public $BiFunction {
	$class(HttpRequestBuilderTest$$Lambda$setHeader$14, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0, Object$* arg1) override {
		 return $of($nc(inst$)->setHeader($cast($String, arg0), $cast($String, arg1)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$setHeader$14>());
	}
	$HttpRequest$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$setHeader$14::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$setHeader$14, inst$)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$setHeader$14::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$setHeader$14::*)($HttpRequest$Builder*)>(&HttpRequestBuilderTest$$Lambda$setHeader$14::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$setHeader$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$setHeader$14",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$setHeader$14::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$setHeader$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$setHeader$14::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$timeout$15 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$timeout$15, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($nc(inst$)->timeout($cast($Duration, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$timeout$15>());
	}
	$HttpRequest$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$timeout$15::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$timeout$15, inst$)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$timeout$15::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$timeout$15::*)($HttpRequest$Builder*)>(&HttpRequestBuilderTest$$Lambda$timeout$15::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$timeout$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$timeout$15",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$timeout$15::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$timeout$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$timeout$15::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$version$16 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$version$16, $NO_CLASS_INIT, $Function)
public:
	void init$($HttpRequest$Builder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($nc(inst$)->version($cast($HttpClient$Version, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$version$16>());
	}
	$HttpRequest$Builder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$version$16::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$version$16, inst$)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$version$16::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpRequest$Builder;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$version$16::*)($HttpRequest$Builder*)>(&HttpRequestBuilderTest$$Lambda$version$16::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$version$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$version$16",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$version$16::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$version$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$version$16::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$8$17 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$8$17, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$8());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$8$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$8$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$8$17::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$8$17::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$8$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$8$17",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$8$17::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$8$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$8$17::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$9$18 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$9$18, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$9());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$9$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$9$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$9$18::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$9$18::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$9$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$9$18",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$9$18::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$9$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$9$18::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$10$19 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$10$19, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$10());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$10$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$10$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$10$19::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$10$19::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$10$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$10$19",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$10$19::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$10$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$10$19::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$11$20 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$11$20, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$11());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$11$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$11$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$11$20::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$11$20::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$11$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$11$20",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$11$20::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$11$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$11$20::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$12$21 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$12$21, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$12());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$12$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$12$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$12$21::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$12$21::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$12$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$12$21",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$12$21::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$12$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$12$21::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$13$22 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$13$22, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$13());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$13$22>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$13$22::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$13$22::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$13$22::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$13$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$13$22",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$13$22::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$13$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$13$22::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$14$23 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$14$23, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$14());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$14$23>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$14$23::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$14$23::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$14$23::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$14$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$14$23",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$14$23::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$14$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$14$23::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$15$24 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$15$24, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$15());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$15$24>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$15$24::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$15$24::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$15$24::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$15$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$15$24",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$15$24::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$15$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$15$24::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$16$25 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$16$25, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$16());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$16$25>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$16$25::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$16$25::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$16$25::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$16$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$16$25",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$16$25::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$16$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$16$25::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$17$26 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$17$26, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$17());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$17$26>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$17$26::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$17$26::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$17$26::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$17$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$17$26",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$17$26::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$17$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$17$26::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$main$18$27 : public $Supplier {
	$class(HttpRequestBuilderTest$$Lambda$lambda$main$18$27, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(HttpRequestBuilderTest::lambda$main$18());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$main$18$27>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$main$18$27::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$main$18$27::*)()>(&HttpRequestBuilderTest$$Lambda$lambda$main$18$27::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$main$18$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$main$18$27",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$18$27::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$main$18$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$main$18$27::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$getSimpleName$28 : public $Function {
	$class(HttpRequestBuilderTest$$Lambda$getSimpleName$28, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Class, inst$)->getSimpleName());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$getSimpleName$28>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpRequestBuilderTest$$Lambda$getSimpleName$28::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$getSimpleName$28::*)()>(&HttpRequestBuilderTest$$Lambda$getSimpleName$28::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$getSimpleName$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$getSimpleName$28",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$getSimpleName$28::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$getSimpleName$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$getSimpleName$28::class$ = nullptr;

class HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29 : public $Predicate {
	$class(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Exception* x) {
		$set(this, x, x);
	}
	virtual bool test(Object$* c) override {
		 return HttpRequestBuilderTest::lambda$isExpected$19(x, $cast($Class, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29>());
	}
	$Exception* x = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::fieldInfos[2] = {
	{"x", "Ljava/lang/Exception;", nullptr, $PUBLIC, $field(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, x)},
	{}
};
$MethodInfo HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::*)($Exception*)>(&HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::load$($String* name, bool initialize) {
	$loadClass(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::class$ = nullptr;

$FieldInfo _HttpRequestBuilderTest_FieldInfo_[] = {
	{"TEST_URI", "Ljava/net/URI;", nullptr, $STATIC | $FINAL, $staticField(HttpRequestBuilderTest, TEST_URI)},
	{}
};

$MethodInfo _HttpRequestBuilderTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpRequestBuilderTest::*)()>(&HttpRequestBuilderTest::init$))},
	{"expectedNames", "([Ljava/lang/Class;)Ljava/lang/String;", "([Ljava/lang/Class<+Ljava/lang/Exception;>;)Ljava/lang/String;", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$String*(*)($ClassArray*)>(&HttpRequestBuilderTest::expectedNames))},
	{"isExpected", "(Ljava/lang/Exception;[Ljava/lang/Class;)Z", "(Ljava/lang/Exception;[Ljava/lang/Class<+Ljava/lang/Exception;>;)Z", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<bool(*)($Exception*,$ClassArray*)>(&HttpRequestBuilderTest::isExpected))},
	{"lambda$isExpected$19", "(Ljava/lang/Exception;Ljava/lang/Class;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Exception*,$Class*)>(&HttpRequestBuilderTest::lambda$isExpected$19))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HttpRequestBuilderTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HttpRequestBuilderTest::lambda$main$1))},
	{"lambda$main$10", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$10))},
	{"lambda$main$11", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$11))},
	{"lambda$main$12", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$12))},
	{"lambda$main$13", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$13))},
	{"lambda$main$14", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$14))},
	{"lambda$main$15", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$15))},
	{"lambda$main$16", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$16))},
	{"lambda$main$17", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$17))},
	{"lambda$main$18", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$18))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HttpRequestBuilderTest::lambda$main$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HttpRequestBuilderTest::lambda$main$3))},
	{"lambda$main$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HttpRequestBuilderTest::lambda$main$4))},
	{"lambda$main$5", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HttpRequestBuilderTest::lambda$main$5))},
	{"lambda$main$6", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HttpRequestBuilderTest::lambda$main$6))},
	{"lambda$main$7", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HttpRequestBuilderTest::lambda$main$7))},
	{"lambda$main$8", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$8))},
	{"lambda$main$9", "()Ljava/net/http/HttpRequest$Builder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpRequest$Builder*(*)()>(&HttpRequestBuilderTest::lambda$main$9))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HttpRequestBuilderTest::main)), "java.lang.Exception"},
	{"method", "(Ljava/lang/String;Ljava/util/function/Supplier;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/util/function/Supplier<Ljava/net/http/HttpRequest$Builder;>;Ljava/lang/String;)V", $STATIC, $method(static_cast<void(*)($String*,$Supplier*,$String*)>(&HttpRequestBuilderTest::method))},
	{"shouldFail", "([Ljava/lang/Class;)Z", "([Ljava/lang/Class<+Ljava/lang/Exception;>;)Z", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<bool(*)($ClassArray*)>(&HttpRequestBuilderTest::shouldFail))},
	{"test0", "(Ljava/lang/String;Ljava/lang/Runnable;[Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Runnable;[Ljava/lang/Class<+Ljava/lang/Exception;>;)V", $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$Runnable*,$ClassArray*)>(&HttpRequestBuilderTest::test0))},
	{"test1", "(Ljava/lang/String;Ljava/lang/Object;Ljava/util/function/Function;Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljava/lang/String;TR;Ljava/util/function/Function<TP;TR;>;TP;[Ljava/lang/Class<+Ljava/lang/Exception;>;)TR;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($String*,Object$*,$Function*,Object$*,$ClassArray*)>(&HttpRequestBuilderTest::test1))},
	{"test2", "(Ljava/lang/String;Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/lang/Object;Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P1:Ljava/lang/Object;P2:Ljava/lang/Object;>(Ljava/lang/String;TR;Ljava/util/function/BiFunction<TP1;TP2;TR;>;TP1;TP2;[Ljava/lang/Class<+Ljava/lang/Exception;>;)TR;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($String*,Object$*,$BiFunction*,Object$*,Object$*,$ClassArray*)>(&HttpRequestBuilderTest::test2))},
	{}
};

$ClassInfo _HttpRequestBuilderTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HttpRequestBuilderTest",
	"java.lang.Object",
	nullptr,
	_HttpRequestBuilderTest_FieldInfo_,
	_HttpRequestBuilderTest_MethodInfo_
};

$Object* allocate$HttpRequestBuilderTest($Class* clazz) {
	return $of($alloc(HttpRequestBuilderTest));
}

$URI* HttpRequestBuilderTest::TEST_URI = nullptr;

void HttpRequestBuilderTest::init$() {
}

void HttpRequestBuilderTest::main($StringArray* args) {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	$load($IllegalStateException);
	test0("newBuilder().build()"_s, static_cast<$Runnable*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$0)), $$new($ClassArray, {$IllegalStateException::class$}));
	$load($NullPointerException);
	test0("newBuilder(null)"_s, static_cast<$Runnable*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$1$1)), $$new($ClassArray, {$NullPointerException::class$}));
	$load($IllegalArgumentException);
	test0("newBuilder(URI.create(\"badScheme://www.foo.com/\")"_s, static_cast<$Runnable*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$2$2)), $$new($ClassArray, {$IllegalArgumentException::class$}));
	test0("newBuilder(URI.create(\"http://www.foo.com:-1/\")"_s, static_cast<$Runnable*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$3$3)), $$new($ClassArray, {$IllegalArgumentException::class$}));
	test0("newBuilder(URI.create(\"https://www.foo.com:-1/\")"_s, static_cast<$Runnable*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$4$4)), $$new($ClassArray, {$IllegalArgumentException::class$}));
	$var($String, var$0, $str({"newBuilder("_s, HttpRequestBuilderTest::TEST_URI, ").uri(null)"_s}));
	test0(var$0, static_cast<$Runnable*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$5$5)), $$new($ClassArray, {$NullPointerException::class$}));
	test0("newBuilder(uri).build()"_s, static_cast<$Runnable*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$6$6)), $$new($ClassArray, 0));
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder());
	$assign(builder, $cast($HttpRequest$Builder, test1("uri"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$uri$7, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($URI*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$var($String, var$1, "uri"_s);
	$var($Object, var$2, $of(builder));
	$var($Function, var$3, static_cast<$Function*>($new(HttpRequestBuilderTest$$Lambda$uri$7, static_cast<$HttpRequest$Builder*>($nc(builder)))));
	$assign(builder, $cast($HttpRequest$Builder, test1(var$1, var$2, var$3, $($URI::create("http://www.foo.com:-1/"_s)), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$var($String, var$4, "uri"_s);
	$var($Object, var$5, $of(builder));
	$var($Function, var$6, static_cast<$Function*>($new(HttpRequestBuilderTest$$Lambda$uri$7, static_cast<$HttpRequest$Builder*>($nc(builder)))));
	$assign(builder, $cast($HttpRequest$Builder, test1(var$4, var$5, var$6, $($URI::create("https://www.foo.com:-1/"_s)), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, static_cast<$BiFunction*>($$new(HttpRequestBuilderTest$$Lambda$header$8, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($String*)nullptr, "bar"_s, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, static_cast<$BiFunction*>($$new(HttpRequestBuilderTest$$Lambda$header$8, static_cast<$HttpRequest$Builder*>($nc(builder)))), "foo"_s, ($String*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, static_cast<$BiFunction*>($$new(HttpRequestBuilderTest$$Lambda$header$8, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($String*)nullptr, ($String*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, static_cast<$BiFunction*>($$new(HttpRequestBuilderTest$$Lambda$header$8, static_cast<$HttpRequest$Builder*>($nc(builder)))), ""_s, "bar"_s, $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("header"_s, builder, static_cast<$BiFunction*>($$new(HttpRequestBuilderTest$$Lambda$header$8, static_cast<$HttpRequest$Builder*>($nc(builder)))), "foo"_s, "\r"_s, $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($StringArray*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, 0), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		($String*)nullptr,
		"bar"_s
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		"foo"_s,
		($String*)nullptr
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		($String*)nullptr,
		($String*)nullptr
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		($String*)nullptr
	}), $$new($ClassArray, {
		$NullPointerException::class$,
		$IllegalArgumentException::class$
	}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		($String*)nullptr,
		($String*)nullptr
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		"baz"_s,
		($String*)nullptr
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		"\r"_s,
		"baz"_s
	}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		"baz"_s,
		"\n"_s
	}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		""_s,
		"baz"_s
	}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		($String*)nullptr,
		"baz"_s
	}), $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {
		"foo"_s,
		"bar"_s,
		"baz"_s
	}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("headers"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$headers$9, static_cast<$HttpRequest$Builder*>($nc(builder)))), $$new($StringArray, {"foo"_s}), $$new($ClassArray, {$IllegalArgumentException::class$}))));
	test0("DELETE"_s, static_cast<$Runnable*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$7$10)), nullptr);
	$var($String, var$7, "POST"_s);
	$var($Object, var$8, $of(builder));
	$var($Function, var$9, static_cast<$Function*>($new(HttpRequestBuilderTest$$Lambda$POST$11, static_cast<$HttpRequest$Builder*>($nc(builder)))));
	$assign(builder, $cast($HttpRequest$Builder, test1(var$7, var$8, var$9, $($HttpRequest$BodyPublishers::noBody()), nullptr)));
	$var($String, var$10, "PUT"_s);
	$var($Object, var$11, $of(builder));
	$var($Function, var$12, static_cast<$Function*>($new(HttpRequestBuilderTest$$Lambda$PUT$12, static_cast<$HttpRequest$Builder*>($nc(builder)))));
	$assign(builder, $cast($HttpRequest$Builder, test1(var$10, var$11, var$12, $($HttpRequest$BodyPublishers::noBody()), nullptr)));
	$var($String, var$13, "method"_s);
	$var($Object, var$14, $of(builder));
	$var($BiFunction, var$15, static_cast<$BiFunction*>($new(HttpRequestBuilderTest$$Lambda$method$13, static_cast<$HttpRequest$Builder*>($nc(builder)))));
	$var($Object, var$16, $of("GET"_s));
	$assign(builder, $cast($HttpRequest$Builder, test2(var$13, var$14, var$15, var$16, $($HttpRequest$BodyPublishers::noBody()), nullptr)));
	$assign(builder, $cast($HttpRequest$Builder, test1("POST"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$POST$11, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($HttpRequest$BodyPublisher*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("PUT"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$PUT$12, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($HttpRequest$BodyPublisher*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("method"_s, builder, static_cast<$BiFunction*>($$new(HttpRequestBuilderTest$$Lambda$method$13, static_cast<$HttpRequest$Builder*>($nc(builder)))), "GET"_s, ($HttpRequest$BodyPublisher*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("setHeader"_s, builder, static_cast<$BiFunction*>($$new(HttpRequestBuilderTest$$Lambda$setHeader$14, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($String*)nullptr, "bar"_s, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("setHeader"_s, builder, static_cast<$BiFunction*>($$new(HttpRequestBuilderTest$$Lambda$setHeader$14, static_cast<$HttpRequest$Builder*>($nc(builder)))), "foo"_s, ($String*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test2("setHeader"_s, builder, static_cast<$BiFunction*>($$new(HttpRequestBuilderTest$$Lambda$setHeader$14, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($String*)nullptr, ($String*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("timeout"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$timeout$15, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($Duration*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$assign(builder, $cast($HttpRequest$Builder, test1("version"_s, builder, static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$version$16, static_cast<$HttpRequest$Builder*>($nc(builder)))), ($HttpClient$Version*)nullptr, $$new($ClassArray, {$NullPointerException::class$}))));
	$var($String, var$17, "method"_s);
	$var($Object, var$18, $of(builder));
	$var($BiFunction, var$19, static_cast<$BiFunction*>($new(HttpRequestBuilderTest$$Lambda$method$13, static_cast<$HttpRequest$Builder*>($nc(builder)))));
	$assign(builder, $cast($HttpRequest$Builder, test2(var$17, var$18, var$19, nullptr, $($HttpRequest$BodyPublishers::ofString("foo"_s)), $$new($ClassArray, {$NullPointerException::class$}))));
	method("newBuilder(TEST_URI).build().method() == GET"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$8$17)), "GET"_s);
	method("newBuilder(TEST_URI).GET().build().method() == GET"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$9$18)), "GET"_s);
	method("newBuilder(TEST_URI).POST(ofString(\"\")).GET().build().method() == GET"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$10$19)), "GET"_s);
	method("newBuilder(TEST_URI).PUT(ofString(\"\")).GET().build().method() == GET"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$11$20)), "GET"_s);
	method("newBuilder(TEST_URI).DELETE().GET().build().method() == GET"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$12$21)), "GET"_s);
	method("newBuilder(TEST_URI).POST(ofString(\"\")).build().method() == POST"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$13$22)), "POST"_s);
	method("newBuilder(TEST_URI).PUT(ofString(\"\")).build().method() == PUT"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$14$23)), "PUT"_s);
	method("newBuilder(TEST_URI).DELETE().build().method() == DELETE"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$15$24)), "DELETE"_s);
	method("newBuilder(TEST_URI).GET().POST(ofString(\"\")).build().method() == POST"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$16$25)), "POST"_s);
	method("newBuilder(TEST_URI).GET().PUT(ofString(\"\")).build().method() == PUT"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$17$26)), "PUT"_s);
	method("newBuilder(TEST_URI).GET().DELETE().build().method() == DELETE"_s, static_cast<$Supplier*>($$new(HttpRequestBuilderTest$$Lambda$lambda$main$18$27)), "DELETE"_s);
}

bool HttpRequestBuilderTest::shouldFail($ClassArray* exceptions) {
	$init(HttpRequestBuilderTest);
	return exceptions != nullptr && exceptions->length > 0;
}

$String* HttpRequestBuilderTest::expectedNames($ClassArray* exceptions) {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return $cast($String, $nc($($nc($($Stream::of(exceptions)))->map(static_cast<$Function*>($$new(HttpRequestBuilderTest$$Lambda$getSimpleName$28)))))->collect($($Collectors::joining("|"_s))));
}

bool HttpRequestBuilderTest::isExpected($Exception* x, $ClassArray* expected) {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return expected != nullptr && $nc($($nc($($nc($($Stream::of(expected)))->filter(static_cast<$Predicate*>($$new(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29, x)))))->findAny()))->isPresent();
}

void HttpRequestBuilderTest::method($String* name, $Supplier* supplier, $String* expectedMethod) {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest, request, $nc(($cast($HttpRequest$Builder, $($nc(supplier)->get()))))->build());
	$var($String, method, $nc(request)->method());
	bool var$0 = $nc($(request->method()))->equals("GET"_s);
	if (var$0 && $nc($(request->bodyPublisher()))->isPresent()) {
		$throwNew($AssertionError, $of($$str({"failed: "_s, name, ". Unexpected body processor for GET: "_s, $($nc($(request->bodyPublisher()))->get())})));
	}
	if ($nc(expectedMethod)->equals(method)) {
		$nc($System::out)->println($$str({"success: "_s, name}));
	} else {
		$throwNew($AssertionError, $of($$str({"failed: "_s, name, ". Expected "_s, expectedMethod, ", got "_s, method})));
	}
}

void HttpRequestBuilderTest::test0($String* name, $Runnable* r, $ClassArray* ex) {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	try {
		$nc(r)->run();
		if (!shouldFail(ex)) {
			$nc($System::out)->println($$str({"success: "_s, name}));
			return;
		} else {
			$throwNew($AssertionError, $of($$str({"Expected "_s, $(expectedNames(ex)), " not raised for "_s, name})));
		}
	} catch ($Exception& x) {
		if (!isExpected(x, ex)) {
			$throw(x);
		} else {
			$nc($System::out)->println($$str({"success: "_s, name, " - Got expected exception: "_s, x}));
		}
	}
}

$Object* HttpRequestBuilderTest::test1($String* name, Object$* receiver, $Function* m, Object$* arg, $ClassArray* ex) {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	$var($String, argMessage, arg == nullptr ? "null"_s : $nc($of(arg))->toString());
	if ($instanceOf($StringArray, arg)) {
		$assign(argMessage, $nc($of($($Arrays::asList($cast($StringArray, arg)))))->toString());
	}
	try {
		$var($Object, result, $nc(m)->apply(arg));
		if (!shouldFail(ex)) {
			$nc($System::out)->println($$str({"success: "_s, name, "("_s, argMessage, ")"_s}));
			return $of(result);
		} else {
			$throwNew($AssertionError, $of($$str({"Expected "_s, $(expectedNames(ex)), " not raised for "_s, name, "("_s, argMessage, ")"_s})));
		}
	} catch ($Exception& x) {
		if (!isExpected(x, ex)) {
			$throw(x);
		} else {
			$nc($System::out)->println($$str({"success: "_s, name, "("_s, argMessage, ") - Got expected exception: "_s, x}));
			return $of(receiver);
		}
	}
	$shouldNotReachHere();
}

$Object* HttpRequestBuilderTest::test2($String* name, Object$* receiver, $BiFunction* m, Object$* arg1, Object$* arg2, $ClassArray* ex) {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Object, result, $nc(m)->apply(arg1, arg2));
		if (!shouldFail(ex)) {
			$nc($System::out)->println($$str({"success: "_s, name, "("_s, arg1, ", "_s, arg2, ")"_s}));
			return $of(result);
		} else {
			$throwNew($AssertionError, $of($$str({"Expected "_s, $(expectedNames(ex)), " not raised for "_s, name, "("_s, arg1, ", "_s, arg2, ")"_s})));
		}
	} catch ($Exception& x) {
		if (!isExpected(x, ex)) {
			$throw(x);
		} else {
			$nc($System::out)->println($$str({"success: "_s, name, "("_s, arg1, ", "_s, arg2, ") - Got expected exception: "_s, x}));
			return $of(receiver);
		}
	}
	$shouldNotReachHere();
}

bool HttpRequestBuilderTest::lambda$isExpected$19($Exception* x, $Class* c) {
	$init(HttpRequestBuilderTest);
	return $nc(c)->isInstance(x);
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$18() {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->GET()))->DELETE();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$17() {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->GET()))->PUT($($HttpRequest$BodyPublishers::ofString(""_s)));
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$16() {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->GET()))->POST($($HttpRequest$BodyPublishers::ofString(""_s)));
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$15() {
	$init(HttpRequestBuilderTest);
	return $nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->DELETE();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$14() {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return $nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->PUT($($HttpRequest$BodyPublishers::ofString(""_s)));
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$13() {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return $nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->POST($($HttpRequest$BodyPublishers::ofString(""_s)));
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$12() {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->DELETE()))->GET();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$11() {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->PUT($($HttpRequest$BodyPublishers::ofString(""_s)))))->GET();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$10() {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->POST($($HttpRequest$BodyPublishers::ofString(""_s)))))->GET();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$9() {
	$init(HttpRequestBuilderTest);
	return $nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->GET();
}

$HttpRequest$Builder* HttpRequestBuilderTest::lambda$main$8() {
	$init(HttpRequestBuilderTest);
	return $HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI);
}

void HttpRequestBuilderTest::lambda$main$7() {
	$init(HttpRequestBuilderTest);
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->DELETE()))->build();
}

void HttpRequestBuilderTest::lambda$main$6() {
	$init(HttpRequestBuilderTest);
	$nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->build();
}

void HttpRequestBuilderTest::lambda$main$5() {
	$init(HttpRequestBuilderTest);
	$nc($($HttpRequest::newBuilder(HttpRequestBuilderTest::TEST_URI)))->uri(nullptr);
}

void HttpRequestBuilderTest::lambda$main$4() {
	$init(HttpRequestBuilderTest);
	$HttpRequest::newBuilder($($URI::create("https://www.foo.com:-1/"_s)));
}

void HttpRequestBuilderTest::lambda$main$3() {
	$init(HttpRequestBuilderTest);
	$HttpRequest::newBuilder($($URI::create("http://www.foo.com:-1/"_s)));
}

void HttpRequestBuilderTest::lambda$main$2() {
	$init(HttpRequestBuilderTest);
	$HttpRequest::newBuilder($($URI::create("badScheme://www.foo.com/"_s)));
}

void HttpRequestBuilderTest::lambda$main$1() {
	$init(HttpRequestBuilderTest);
	$HttpRequest::newBuilder(nullptr);
}

void HttpRequestBuilderTest::lambda$main$0() {
	$init(HttpRequestBuilderTest);
	$nc($($HttpRequest::newBuilder()))->build();
}

void clinit$HttpRequestBuilderTest($Class* class$) {
	$assignStatic(HttpRequestBuilderTest::TEST_URI, $URI::create("http://www.foo.com/"_s));
}

HttpRequestBuilderTest::HttpRequestBuilderTest() {
}

$Class* HttpRequestBuilderTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$4$4::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$5$5::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$5$5::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$6$6::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$6$6::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$uri$7::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$uri$7::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$header$8::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$header$8::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$headers$9::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$headers$9::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$7$10::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$7$10::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$POST$11::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$POST$11::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$PUT$12::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$PUT$12::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$method$13::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$method$13::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$setHeader$14::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$setHeader$14::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$timeout$15::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$timeout$15::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$version$16::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$version$16::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$8$17::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$8$17::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$9$18::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$9$18::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$10$19::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$10$19::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$11$20::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$11$20::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$12$21::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$12$21::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$13$22::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$13$22::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$14$23::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$14$23::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$15$24::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$15$24::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$16$25::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$16$25::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$17$26::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$17$26::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$main$18$27::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$main$18$27::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$getSimpleName$28::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$getSimpleName$28::load$(name, initialize);
		}
		if (name->equals(HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::classInfo$.name)) {
			return HttpRequestBuilderTest$$Lambda$lambda$isExpected$19$29::load$(name, initialize);
		}
	}
	$loadClass(HttpRequestBuilderTest, name, initialize, &_HttpRequestBuilderTest_ClassInfo_, clinit$HttpRequestBuilderTest, allocate$HttpRequestBuilderTest);
	return class$;
}

$Class* HttpRequestBuilderTest::class$ = nullptr;