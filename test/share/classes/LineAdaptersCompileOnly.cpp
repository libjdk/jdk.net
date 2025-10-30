#include <LineAdaptersCompileOnly.h>

#include <LineAdaptersCompileOnly$CharSequenceSubscriber.h>
#include <LineAdaptersCompileOnly$ObjectSubscriber.h>
#include <LineAdaptersCompileOnly$StringSubscriber.h>
#include <LineAdaptersCompileOnly$StringSubscriberX.h>
#include <java/io/Serializable.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse$BodySubscribers.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef US_ASCII
#undef UTF_16
#undef UTF_8

using $LineAdaptersCompileOnly$CharSequenceSubscriber = ::LineAdaptersCompileOnly$CharSequenceSubscriber;
using $LineAdaptersCompileOnly$ObjectSubscriber = ::LineAdaptersCompileOnly$ObjectSubscriber;
using $LineAdaptersCompileOnly$StringSubscriber = ::LineAdaptersCompileOnly$StringSubscriber;
using $LineAdaptersCompileOnly$StringSubscriberX = ::LineAdaptersCompileOnly$StringSubscriberX;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $HttpResponse$BodySubscribers = ::java::net::http::HttpResponse$BodySubscribers;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Function = ::java::util::function::Function;

class LineAdaptersCompileOnly$$Lambda$lambda$static$0 : public $Function {
	$class(LineAdaptersCompileOnly$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subscriber) override {
		 return $of(LineAdaptersCompileOnly::lambda$static$0($cast($LineAdaptersCompileOnly$StringSubscriber, subscriber)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LineAdaptersCompileOnly$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LineAdaptersCompileOnly$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LineAdaptersCompileOnly$$Lambda$lambda$static$0::*)()>(&LineAdaptersCompileOnly$$Lambda$lambda$static$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LineAdaptersCompileOnly$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"LineAdaptersCompileOnly$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LineAdaptersCompileOnly$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LineAdaptersCompileOnly$$Lambda$lambda$static$0::class$ = nullptr;

class LineAdaptersCompileOnly$$Lambda$lambda$static$1$1 : public $Function {
	$class(LineAdaptersCompileOnly$$Lambda$lambda$static$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subscriber) override {
		 return $of(LineAdaptersCompileOnly::lambda$static$1($cast($LineAdaptersCompileOnly$StringSubscriber, subscriber)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LineAdaptersCompileOnly$$Lambda$lambda$static$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LineAdaptersCompileOnly$$Lambda$lambda$static$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LineAdaptersCompileOnly$$Lambda$lambda$static$1$1::*)()>(&LineAdaptersCompileOnly$$Lambda$lambda$static$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LineAdaptersCompileOnly$$Lambda$lambda$static$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"LineAdaptersCompileOnly$$Lambda$lambda$static$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LineAdaptersCompileOnly$$Lambda$lambda$static$1$1::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$$Lambda$lambda$static$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LineAdaptersCompileOnly$$Lambda$lambda$static$1$1::class$ = nullptr;

class LineAdaptersCompileOnly$$Lambda$lambda$static$2$2 : public $Function {
	$class(LineAdaptersCompileOnly$$Lambda$lambda$static$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subscriber) override {
		 return $of(LineAdaptersCompileOnly::lambda$static$2($cast($LineAdaptersCompileOnly$StringSubscriberX, subscriber)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LineAdaptersCompileOnly$$Lambda$lambda$static$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LineAdaptersCompileOnly$$Lambda$lambda$static$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LineAdaptersCompileOnly$$Lambda$lambda$static$2$2::*)()>(&LineAdaptersCompileOnly$$Lambda$lambda$static$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LineAdaptersCompileOnly$$Lambda$lambda$static$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"LineAdaptersCompileOnly$$Lambda$lambda$static$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LineAdaptersCompileOnly$$Lambda$lambda$static$2$2::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$$Lambda$lambda$static$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LineAdaptersCompileOnly$$Lambda$lambda$static$2$2::class$ = nullptr;

class LineAdaptersCompileOnly$$Lambda$lambda$static$3$3 : public $Function {
	$class(LineAdaptersCompileOnly$$Lambda$lambda$static$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subscriber) override {
		 return $of(LineAdaptersCompileOnly::lambda$static$3($cast($LineAdaptersCompileOnly$StringSubscriberX, subscriber)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LineAdaptersCompileOnly$$Lambda$lambda$static$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LineAdaptersCompileOnly$$Lambda$lambda$static$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LineAdaptersCompileOnly$$Lambda$lambda$static$3$3::*)()>(&LineAdaptersCompileOnly$$Lambda$lambda$static$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LineAdaptersCompileOnly$$Lambda$lambda$static$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"LineAdaptersCompileOnly$$Lambda$lambda$static$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LineAdaptersCompileOnly$$Lambda$lambda$static$3$3::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$$Lambda$lambda$static$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LineAdaptersCompileOnly$$Lambda$lambda$static$3$3::class$ = nullptr;

class LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4 : public $Function {
	$class(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(LineAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$4($cast($LineAdaptersCompileOnly$StringSubscriber, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4::*)()>(&LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4::class$ = nullptr;

class LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5 : public $Function {
	$class(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(LineAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$5($cast($LineAdaptersCompileOnly$StringSubscriber, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5::*)()>(&LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5::class$ = nullptr;

class LineAdaptersCompileOnly$$Lambda$getIntegerX$6 : public $Function {
	$class(LineAdaptersCompileOnly$$Lambda$getIntegerX$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($LineAdaptersCompileOnly$StringSubscriberX, inst$)->getIntegerX());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LineAdaptersCompileOnly$$Lambda$getIntegerX$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LineAdaptersCompileOnly$$Lambda$getIntegerX$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LineAdaptersCompileOnly$$Lambda$getIntegerX$6::*)()>(&LineAdaptersCompileOnly$$Lambda$getIntegerX$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LineAdaptersCompileOnly$$Lambda$getIntegerX$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"LineAdaptersCompileOnly$$Lambda$getIntegerX$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LineAdaptersCompileOnly$$Lambda$getIntegerX$6::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$$Lambda$getIntegerX$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LineAdaptersCompileOnly$$Lambda$getIntegerX$6::class$ = nullptr;

$FieldInfo _LineAdaptersCompileOnly_FieldInfo_[] = {
	{"f1", "Ljava/util/function/Function;", "Ljava/util/function/Function<LLineAdaptersCompileOnly$StringSubscriber;Ljava/lang/Integer;>;", $STATIC | $FINAL, $staticField(LineAdaptersCompileOnly, f1)},
	{"f2", "Ljava/util/function/Function;", "Ljava/util/function/Function<LLineAdaptersCompileOnly$StringSubscriber;Ljava/lang/Number;>;", $STATIC | $FINAL, $staticField(LineAdaptersCompileOnly, f2)},
	{"f3", "Ljava/util/function/Function;", "Ljava/util/function/Function<LLineAdaptersCompileOnly$StringSubscriberX;Ljava/lang/Integer;>;", $STATIC | $FINAL, $staticField(LineAdaptersCompileOnly, f3)},
	{"f4", "Ljava/util/function/Function;", "Ljava/util/function/Function<LLineAdaptersCompileOnly$StringSubscriberX;Ljava/lang/Number;>;", $STATIC | $FINAL, $staticField(LineAdaptersCompileOnly, f4)},
	{}
};

$MethodInfo _LineAdaptersCompileOnly_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LineAdaptersCompileOnly::*)()>(&LineAdaptersCompileOnly::init$))},
	{"lambda$makesSureDifferentGenericFunctionSignaturesCompile$4", "(LLineAdaptersCompileOnly$StringSubscriber;)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($LineAdaptersCompileOnly$StringSubscriber*)>(&LineAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$4))},
	{"lambda$makesSureDifferentGenericFunctionSignaturesCompile$5", "(LLineAdaptersCompileOnly$StringSubscriber;)Ljava/lang/Number;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Number*(*)($LineAdaptersCompileOnly$StringSubscriber*)>(&LineAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$5))},
	{"lambda$static$0", "(LLineAdaptersCompileOnly$StringSubscriber;)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($LineAdaptersCompileOnly$StringSubscriber*)>(&LineAdaptersCompileOnly::lambda$static$0))},
	{"lambda$static$1", "(LLineAdaptersCompileOnly$StringSubscriber;)Ljava/lang/Number;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Number*(*)($LineAdaptersCompileOnly$StringSubscriber*)>(&LineAdaptersCompileOnly::lambda$static$1))},
	{"lambda$static$2", "(LLineAdaptersCompileOnly$StringSubscriberX;)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($LineAdaptersCompileOnly$StringSubscriberX*)>(&LineAdaptersCompileOnly::lambda$static$2))},
	{"lambda$static$3", "(LLineAdaptersCompileOnly$StringSubscriberX;)Ljava/lang/Number;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Number*(*)($LineAdaptersCompileOnly$StringSubscriberX*)>(&LineAdaptersCompileOnly::lambda$static$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LineAdaptersCompileOnly::main))},
	{"makesSureDifferentGenericFunctionSignaturesCompile", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&LineAdaptersCompileOnly::makesSureDifferentGenericFunctionSignaturesCompile))},
	{"makesSureDifferentGenericSignaturesCompile", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&LineAdaptersCompileOnly::makesSureDifferentGenericSignaturesCompile))},
	{}
};

$InnerClassInfo _LineAdaptersCompileOnly_InnerClassesInfo_[] = {
	{"LineAdaptersCompileOnly$StringSubscriberX", "LineAdaptersCompileOnly", "StringSubscriberX", $STATIC},
	{"LineAdaptersCompileOnly$ObjectSubscriber", "LineAdaptersCompileOnly", "ObjectSubscriber", $STATIC},
	{"LineAdaptersCompileOnly$CharSequenceSubscriber", "LineAdaptersCompileOnly", "CharSequenceSubscriber", $STATIC},
	{"LineAdaptersCompileOnly$StringSubscriber", "LineAdaptersCompileOnly", "StringSubscriber", $STATIC},
	{}
};

$ClassInfo _LineAdaptersCompileOnly_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LineAdaptersCompileOnly",
	"java.lang.Object",
	nullptr,
	_LineAdaptersCompileOnly_FieldInfo_,
	_LineAdaptersCompileOnly_MethodInfo_,
	nullptr,
	nullptr,
	_LineAdaptersCompileOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LineAdaptersCompileOnly$StringSubscriberX,LineAdaptersCompileOnly$ObjectSubscriber,LineAdaptersCompileOnly$CharSequenceSubscriber,LineAdaptersCompileOnly$StringSubscriber"
};

$Object* allocate$LineAdaptersCompileOnly($Class* clazz) {
	return $of($alloc(LineAdaptersCompileOnly));
}

$Function* LineAdaptersCompileOnly::f1 = nullptr;
$Function* LineAdaptersCompileOnly::f2 = nullptr;
$Function* LineAdaptersCompileOnly::f3 = nullptr;
$Function* LineAdaptersCompileOnly::f4 = nullptr;

void LineAdaptersCompileOnly::init$() {
}

void LineAdaptersCompileOnly::main($StringArray* args) {
	$init(LineAdaptersCompileOnly);
	makesSureDifferentGenericSignaturesCompile();
}

void LineAdaptersCompileOnly::makesSureDifferentGenericSignaturesCompile() {
	$init(LineAdaptersCompileOnly);
	$useLocalCurrentObjectStackCache();
	$HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriber));
	$HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$CharSequenceSubscriber));
	$HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$ObjectSubscriber));
	$HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriber));
	$HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$CharSequenceSubscriber));
	$HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$ObjectSubscriber));
	$var($Flow$Subscriber, var$0, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriber)));
	$HttpResponse$BodyHandlers::fromLineSubscriber(var$0, $($Function::identity()), "\n"_s);
	$var($Flow$Subscriber, var$1, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$CharSequenceSubscriber)));
	$HttpResponse$BodyHandlers::fromLineSubscriber(var$1, $($Function::identity()), "\r\n"_s);
	$var($Flow$Subscriber, var$2, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$ObjectSubscriber)));
	$HttpResponse$BodyHandlers::fromLineSubscriber(var$2, $($Function::identity()), "\n"_s);
	$var($Flow$Subscriber, var$3, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriber)));
	$HttpResponse$BodyHandlers::fromLineSubscriber(var$3, $($Function::identity()), nullptr);
	$var($Flow$Subscriber, var$4, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$CharSequenceSubscriber)));
	$HttpResponse$BodyHandlers::fromLineSubscriber(var$4, $($Function::identity()), nullptr);
	$var($Flow$Subscriber, var$5, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$ObjectSubscriber)));
	$HttpResponse$BodyHandlers::fromLineSubscriber(var$5, $($Function::identity()), nullptr);
	$var($Flow$Subscriber, var$6, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriber)));
	$init($StandardCharsets);
	$HttpResponse$BodySubscribers::fromLineSubscriber(var$6, $($Function::identity()), $StandardCharsets::UTF_8, "\n"_s);
	$var($Flow$Subscriber, var$7, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$CharSequenceSubscriber)));
	$HttpResponse$BodySubscribers::fromLineSubscriber(var$7, $($Function::identity()), $StandardCharsets::UTF_16, "\r\n"_s);
	$var($Flow$Subscriber, var$8, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$ObjectSubscriber)));
	$HttpResponse$BodySubscribers::fromLineSubscriber(var$8, $($Function::identity()), $StandardCharsets::US_ASCII, "\n"_s);
	$var($Flow$Subscriber, var$9, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriber)));
	$HttpResponse$BodySubscribers::fromLineSubscriber(var$9, $($Function::identity()), $StandardCharsets::UTF_8, nullptr);
	$var($Flow$Subscriber, var$10, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$CharSequenceSubscriber)));
	$HttpResponse$BodySubscribers::fromLineSubscriber(var$10, $($Function::identity()), $StandardCharsets::UTF_16, nullptr);
	$var($Flow$Subscriber, var$11, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$ObjectSubscriber)));
	$HttpResponse$BodySubscribers::fromLineSubscriber(var$11, $($Function::identity()), $StandardCharsets::US_ASCII, nullptr);
}

void LineAdaptersCompileOnly::makesSureDifferentGenericFunctionSignaturesCompile() {
	$init(LineAdaptersCompileOnly);
	$useLocalCurrentObjectStackCache();
	$var($Flow$Subscriber, var$0, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriber)));
	$var($HttpResponse$BodyHandler, bh01, $HttpResponse$BodyHandlers::fromLineSubscriber(var$0, static_cast<$Function*>($$new(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4)), "\n"_s));
	$var($Flow$Subscriber, var$1, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriber)));
	$var($HttpResponse$BodyHandler, bh02, $HttpResponse$BodyHandlers::fromLineSubscriber(var$1, static_cast<$Function*>($$new(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5)), "\n"_s));
	$var($HttpResponse$BodyHandler, bh03, $HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriber), LineAdaptersCompileOnly::f1, "\n"_s));
	$var($HttpResponse$BodyHandler, bh04, $HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriber), LineAdaptersCompileOnly::f1, "\n"_s));
	$var($HttpResponse$BodyHandler, bh05, $HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriber), LineAdaptersCompileOnly::f2, "\n"_s));
	$var($HttpResponse$BodyHandler, bh06, $HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f1, "\n"_s));
	$var($HttpResponse$BodyHandler, bh07, $HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f1, "\n"_s));
	$var($HttpResponse$BodyHandler, bh08, $HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f2, "\n"_s));
	$var($Flow$Subscriber, var$2, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriberX)));
	$var($HttpResponse$BodyHandler, bh09, $HttpResponse$BodyHandlers::fromLineSubscriber(var$2, static_cast<$Function*>($$new(LineAdaptersCompileOnly$$Lambda$getIntegerX$6)), "\n"_s));
	$var($Flow$Subscriber, var$3, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriberX)));
	$var($HttpResponse$BodyHandler, bh10, $HttpResponse$BodyHandlers::fromLineSubscriber(var$3, static_cast<$Function*>($$new(LineAdaptersCompileOnly$$Lambda$getIntegerX$6)), "\n"_s));
	$var($HttpResponse$BodyHandler, bh11, $HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f3, "\n"_s));
	$var($HttpResponse$BodyHandler, bh12, $HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f3, "\n"_s));
	$var($HttpResponse$BodyHandler, bh13, $HttpResponse$BodyHandlers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f4, "\n"_s));
	$var($Flow$Subscriber, var$4, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriber)));
	$init($StandardCharsets);
	$var($HttpResponse$BodySubscriber, bs01, $HttpResponse$BodySubscribers::fromLineSubscriber(var$4, static_cast<$Function*>($$new(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4)), $StandardCharsets::UTF_8, "\n"_s));
	$var($Flow$Subscriber, var$5, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriber)));
	$var($HttpResponse$BodySubscriber, bs02, $HttpResponse$BodySubscribers::fromLineSubscriber(var$5, static_cast<$Function*>($$new(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5)), $StandardCharsets::UTF_8, "\n"_s));
	$var($HttpResponse$BodySubscriber, bs03, $HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriber), LineAdaptersCompileOnly::f1, $StandardCharsets::UTF_8, "\n"_s));
	$var($HttpResponse$BodySubscriber, bs04, $HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriber), LineAdaptersCompileOnly::f1, $StandardCharsets::UTF_8, "\n"_s));
	$var($HttpResponse$BodySubscriber, bs05, $HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriber), LineAdaptersCompileOnly::f2, $StandardCharsets::UTF_8, "\n"_s));
	$var($HttpResponse$BodySubscriber, bs06, $HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f1, $StandardCharsets::UTF_8, "\n"_s));
	$var($HttpResponse$BodySubscriber, bs07, $HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f1, $StandardCharsets::UTF_8, "\n"_s));
	$var($HttpResponse$BodySubscriber, bs08, $HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f2, $StandardCharsets::UTF_8, "\n"_s));
	$var($Flow$Subscriber, var$6, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriberX)));
	$var($HttpResponse$BodySubscriber, bs09, $HttpResponse$BodySubscribers::fromLineSubscriber(var$6, static_cast<$Function*>($$new(LineAdaptersCompileOnly$$Lambda$getIntegerX$6)), $StandardCharsets::UTF_8, "\n"_s));
	$var($Flow$Subscriber, var$7, static_cast<$Flow$Subscriber*>($new($LineAdaptersCompileOnly$StringSubscriberX)));
	$var($HttpResponse$BodySubscriber, bs10, $HttpResponse$BodySubscribers::fromLineSubscriber(var$7, static_cast<$Function*>($$new(LineAdaptersCompileOnly$$Lambda$getIntegerX$6)), $StandardCharsets::UTF_8, "\n"_s));
	$var($HttpResponse$BodySubscriber, bs11, $HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f3, $StandardCharsets::UTF_8, "\n"_s));
	$var($HttpResponse$BodySubscriber, bs12, $HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f3, $StandardCharsets::UTF_8, "\n"_s));
	$var($HttpResponse$BodySubscriber, bs13, $HttpResponse$BodySubscribers::fromLineSubscriber($$new($LineAdaptersCompileOnly$StringSubscriberX), LineAdaptersCompileOnly::f4, $StandardCharsets::UTF_8, "\n"_s));
}

$Number* LineAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$5($LineAdaptersCompileOnly$StringSubscriber* s) {
	$init(LineAdaptersCompileOnly);
	return $Integer::valueOf(7);
}

$Integer* LineAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$4($LineAdaptersCompileOnly$StringSubscriber* s) {
	$init(LineAdaptersCompileOnly);
	return $Integer::valueOf(6);
}

$Number* LineAdaptersCompileOnly::lambda$static$3($LineAdaptersCompileOnly$StringSubscriberX* subscriber) {
	$init(LineAdaptersCompileOnly);
	return $Integer::valueOf(4);
}

$Integer* LineAdaptersCompileOnly::lambda$static$2($LineAdaptersCompileOnly$StringSubscriberX* subscriber) {
	$init(LineAdaptersCompileOnly);
	return $Integer::valueOf(3);
}

$Number* LineAdaptersCompileOnly::lambda$static$1($LineAdaptersCompileOnly$StringSubscriber* subscriber) {
	$init(LineAdaptersCompileOnly);
	return $Integer::valueOf(2);
}

$Integer* LineAdaptersCompileOnly::lambda$static$0($LineAdaptersCompileOnly$StringSubscriber* subscriber) {
	$init(LineAdaptersCompileOnly);
	return $Integer::valueOf(1);
}

void clinit$LineAdaptersCompileOnly($Class* class$) {
	$assignStatic(LineAdaptersCompileOnly::f1, static_cast<$Function*>($new(LineAdaptersCompileOnly$$Lambda$lambda$static$0)));
	$assignStatic(LineAdaptersCompileOnly::f2, static_cast<$Function*>($new(LineAdaptersCompileOnly$$Lambda$lambda$static$1$1)));
	$assignStatic(LineAdaptersCompileOnly::f3, static_cast<$Function*>($new(LineAdaptersCompileOnly$$Lambda$lambda$static$2$2)));
	$assignStatic(LineAdaptersCompileOnly::f4, static_cast<$Function*>($new(LineAdaptersCompileOnly$$Lambda$lambda$static$3$3)));
}

LineAdaptersCompileOnly::LineAdaptersCompileOnly() {
}

$Class* LineAdaptersCompileOnly::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LineAdaptersCompileOnly$$Lambda$lambda$static$0::classInfo$.name)) {
			return LineAdaptersCompileOnly$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(LineAdaptersCompileOnly$$Lambda$lambda$static$1$1::classInfo$.name)) {
			return LineAdaptersCompileOnly$$Lambda$lambda$static$1$1::load$(name, initialize);
		}
		if (name->equals(LineAdaptersCompileOnly$$Lambda$lambda$static$2$2::classInfo$.name)) {
			return LineAdaptersCompileOnly$$Lambda$lambda$static$2$2::load$(name, initialize);
		}
		if (name->equals(LineAdaptersCompileOnly$$Lambda$lambda$static$3$3::classInfo$.name)) {
			return LineAdaptersCompileOnly$$Lambda$lambda$static$3$3::load$(name, initialize);
		}
		if (name->equals(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4::classInfo$.name)) {
			return LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$4::load$(name, initialize);
		}
		if (name->equals(LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5::classInfo$.name)) {
			return LineAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$5::load$(name, initialize);
		}
		if (name->equals(LineAdaptersCompileOnly$$Lambda$getIntegerX$6::classInfo$.name)) {
			return LineAdaptersCompileOnly$$Lambda$getIntegerX$6::load$(name, initialize);
		}
	}
	$loadClass(LineAdaptersCompileOnly, name, initialize, &_LineAdaptersCompileOnly_ClassInfo_, clinit$LineAdaptersCompileOnly, allocate$LineAdaptersCompileOnly);
	return class$;
}

$Class* LineAdaptersCompileOnly::class$ = nullptr;