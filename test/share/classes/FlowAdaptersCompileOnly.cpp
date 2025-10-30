#include <FlowAdaptersCompileOnly.h>

#include <FlowAdaptersCompileOnly$BBPublisher.h>
#include <FlowAdaptersCompileOnly$CollectionSubscriber.h>
#include <FlowAdaptersCompileOnly$IntegerSubscriber.h>
#include <FlowAdaptersCompileOnly$IterableSubscriber.h>
#include <FlowAdaptersCompileOnly$ListSubscriber.h>
#include <FlowAdaptersCompileOnly$ListSubscriberX.h>
#include <FlowAdaptersCompileOnly$LongSubscriber.h>
#include <FlowAdaptersCompileOnly$MBBPublisher.h>
#include <FlowAdaptersCompileOnly$NumberSubscriber.h>
#include <FlowAdaptersCompileOnly$ObjectSubscriber.h>
#include <java/io/Serializable.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse$BodySubscribers.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly$BBPublisher = ::FlowAdaptersCompileOnly$BBPublisher;
using $FlowAdaptersCompileOnly$CollectionSubscriber = ::FlowAdaptersCompileOnly$CollectionSubscriber;
using $FlowAdaptersCompileOnly$IntegerSubscriber = ::FlowAdaptersCompileOnly$IntegerSubscriber;
using $FlowAdaptersCompileOnly$IterableSubscriber = ::FlowAdaptersCompileOnly$IterableSubscriber;
using $FlowAdaptersCompileOnly$ListSubscriber = ::FlowAdaptersCompileOnly$ListSubscriber;
using $FlowAdaptersCompileOnly$ListSubscriberX = ::FlowAdaptersCompileOnly$ListSubscriberX;
using $FlowAdaptersCompileOnly$LongSubscriber = ::FlowAdaptersCompileOnly$LongSubscriber;
using $FlowAdaptersCompileOnly$MBBPublisher = ::FlowAdaptersCompileOnly$MBBPublisher;
using $FlowAdaptersCompileOnly$NumberSubscriber = ::FlowAdaptersCompileOnly$NumberSubscriber;
using $FlowAdaptersCompileOnly$ObjectSubscriber = ::FlowAdaptersCompileOnly$ObjectSubscriber;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $HttpResponse$BodySubscribers = ::java::net::http::HttpResponse$BodySubscribers;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Function = ::java::util::function::Function;

class FlowAdaptersCompileOnly$$Lambda$lambda$static$0 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subscriber) override {
		 return $of(FlowAdaptersCompileOnly::lambda$static$0($cast($FlowAdaptersCompileOnly$ListSubscriber, subscriber)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$static$0::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$static$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$0::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subscriber) override {
		 return $of(FlowAdaptersCompileOnly::lambda$static$1($cast($FlowAdaptersCompileOnly$ListSubscriber, subscriber)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subscriber) override {
		 return $of(FlowAdaptersCompileOnly::lambda$static$2($cast($FlowAdaptersCompileOnly$ListSubscriberX, subscriber)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subscriber) override {
		 return $of(FlowAdaptersCompileOnly::lambda$static$3($cast($FlowAdaptersCompileOnly$ListSubscriberX, subscriber)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* sub) override {
		 return $of(FlowAdaptersCompileOnly::lambda$static$8($cast($FlowAdaptersCompileOnly$NumberSubscriber, sub)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* sub) override {
		 return $of(FlowAdaptersCompileOnly::lambda$static$9($cast($FlowAdaptersCompileOnly$IntegerSubscriber, sub)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* sub) override {
		 return $of(FlowAdaptersCompileOnly::lambda$static$10($cast($FlowAdaptersCompileOnly$LongSubscriber, sub)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(FlowAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$4($cast($FlowAdaptersCompileOnly$ListSubscriber, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(FlowAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$5($cast($FlowAdaptersCompileOnly$ListSubscriber, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$getIntegerX$9 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$getIntegerX$9, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($FlowAdaptersCompileOnly$ListSubscriberX, inst$)->getIntegerX());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$getIntegerX$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$getIntegerX$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$getIntegerX$9::*)()>(&FlowAdaptersCompileOnly$$Lambda$getIntegerX$9::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$getIntegerX$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$getIntegerX$9",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$getIntegerX$9::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$getIntegerX$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$getIntegerX$9::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$getInteger$10 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$getInteger$10, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($FlowAdaptersCompileOnly$IntegerSubscriber, inst$)->getInteger());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$getInteger$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$getInteger$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$getInteger$10::*)()>(&FlowAdaptersCompileOnly$$Lambda$getInteger$10::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$getInteger$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$getInteger$10",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$getInteger$10::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$getInteger$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$getInteger$10::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$getNumber$11 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$getNumber$11, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($FlowAdaptersCompileOnly$NumberSubscriber, inst$)->getNumber());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$getNumber$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$getNumber$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$getNumber$11::*)()>(&FlowAdaptersCompileOnly$$Lambda$getNumber$11::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$getNumber$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$getNumber$11",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$getNumber$11::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$getNumber$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$getNumber$11::class$ = nullptr;

class FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12 : public $Function {
	$class(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* sub) override {
		 return $of(FlowAdaptersCompileOnly::lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11(sub));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12::*)()>(&FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12::class$ = nullptr;

$FieldInfo _FlowAdaptersCompileOnly_FieldInfo_[] = {
	{"f1", "Ljava/util/function/Function;", "Ljava/util/function/Function<LFlowAdaptersCompileOnly$ListSubscriber;Ljava/lang/Integer;>;", $STATIC | $FINAL, $staticField(FlowAdaptersCompileOnly, f1)},
	{"f2", "Ljava/util/function/Function;", "Ljava/util/function/Function<LFlowAdaptersCompileOnly$ListSubscriber;Ljava/lang/Number;>;", $STATIC | $FINAL, $staticField(FlowAdaptersCompileOnly, f2)},
	{"f3", "Ljava/util/function/Function;", "Ljava/util/function/Function<LFlowAdaptersCompileOnly$ListSubscriberX;Ljava/lang/Integer;>;", $STATIC | $FINAL, $staticField(FlowAdaptersCompileOnly, f3)},
	{"f4", "Ljava/util/function/Function;", "Ljava/util/function/Function<LFlowAdaptersCompileOnly$ListSubscriberX;Ljava/lang/Number;>;", $STATIC | $FINAL, $staticField(FlowAdaptersCompileOnly, f4)},
	{"numMapper", "Ljava/util/function/Function;", "Ljava/util/function/Function<LFlowAdaptersCompileOnly$NumberSubscriber;Ljava/lang/Number;>;", $STATIC | $FINAL, $staticField(FlowAdaptersCompileOnly, numMapper)},
	{"intMapper", "Ljava/util/function/Function;", "Ljava/util/function/Function<LFlowAdaptersCompileOnly$IntegerSubscriber;Ljava/lang/Integer;>;", $STATIC | $FINAL, $staticField(FlowAdaptersCompileOnly, intMapper)},
	{"longMapper", "Ljava/util/function/Function;", "Ljava/util/function/Function<LFlowAdaptersCompileOnly$LongSubscriber;Ljava/lang/Long;>;", $STATIC | $FINAL, $staticField(FlowAdaptersCompileOnly, longMapper)},
	{}
};

$MethodInfo _FlowAdaptersCompileOnly_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowAdaptersCompileOnly::*)()>(&FlowAdaptersCompileOnly::init$))},
	{"lambda$makesSureDifferentGenericFunctionSignaturesCompile$4", "(LFlowAdaptersCompileOnly$ListSubscriber;)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($FlowAdaptersCompileOnly$ListSubscriber*)>(&FlowAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$4))},
	{"lambda$makesSureDifferentGenericFunctionSignaturesCompile$5", "(LFlowAdaptersCompileOnly$ListSubscriber;)Ljava/lang/Number;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Number*(*)($FlowAdaptersCompileOnly$ListSubscriber*)>(&FlowAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$5))},
	{"lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11", "(Ljava/lang/Object;)Ljava/lang/Number;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Number*(*)(Object$*)>(&FlowAdaptersCompileOnly::lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11))},
	{"lambda$static$0", "(LFlowAdaptersCompileOnly$ListSubscriber;)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($FlowAdaptersCompileOnly$ListSubscriber*)>(&FlowAdaptersCompileOnly::lambda$static$0))},
	{"lambda$static$1", "(LFlowAdaptersCompileOnly$ListSubscriber;)Ljava/lang/Number;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Number*(*)($FlowAdaptersCompileOnly$ListSubscriber*)>(&FlowAdaptersCompileOnly::lambda$static$1))},
	{"lambda$static$10", "(LFlowAdaptersCompileOnly$LongSubscriber;)Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Long*(*)($FlowAdaptersCompileOnly$LongSubscriber*)>(&FlowAdaptersCompileOnly::lambda$static$10))},
	{"lambda$static$2", "(LFlowAdaptersCompileOnly$ListSubscriberX;)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($FlowAdaptersCompileOnly$ListSubscriberX*)>(&FlowAdaptersCompileOnly::lambda$static$2))},
	{"lambda$static$3", "(LFlowAdaptersCompileOnly$ListSubscriberX;)Ljava/lang/Number;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Number*(*)($FlowAdaptersCompileOnly$ListSubscriberX*)>(&FlowAdaptersCompileOnly::lambda$static$3))},
	{"lambda$static$8", "(LFlowAdaptersCompileOnly$NumberSubscriber;)Ljava/lang/Number;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Number*(*)($FlowAdaptersCompileOnly$NumberSubscriber*)>(&FlowAdaptersCompileOnly::lambda$static$8))},
	{"lambda$static$9", "(LFlowAdaptersCompileOnly$IntegerSubscriber;)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($FlowAdaptersCompileOnly$IntegerSubscriber*)>(&FlowAdaptersCompileOnly::lambda$static$9))},
	{"makesSureDifferentGenericFunctionSignaturesCompile", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FlowAdaptersCompileOnly::makesSureDifferentGenericFunctionSignaturesCompile))},
	{"makesSureDifferentGenericSignaturesCompile", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FlowAdaptersCompileOnly::makesSureDifferentGenericSignaturesCompile))},
	{"makesSureDifferentGenericSubscriberSignaturesCompile", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$LongSubscriber", "FlowAdaptersCompileOnly", "LongSubscriber", $STATIC},
	{"FlowAdaptersCompileOnly$IntegerSubscriber", "FlowAdaptersCompileOnly", "IntegerSubscriber", $STATIC},
	{"FlowAdaptersCompileOnly$NumberSubscriber", "FlowAdaptersCompileOnly", "NumberSubscriber", $STATIC},
	{"FlowAdaptersCompileOnly$ListSubscriberX", "FlowAdaptersCompileOnly", "ListSubscriberX", $STATIC},
	{"FlowAdaptersCompileOnly$ObjectSubscriber", "FlowAdaptersCompileOnly", "ObjectSubscriber", $STATIC},
	{"FlowAdaptersCompileOnly$IterableSubscriber", "FlowAdaptersCompileOnly", "IterableSubscriber", $STATIC},
	{"FlowAdaptersCompileOnly$CollectionSubscriber", "FlowAdaptersCompileOnly", "CollectionSubscriber", $STATIC},
	{"FlowAdaptersCompileOnly$ListSubscriber", "FlowAdaptersCompileOnly", "ListSubscriber", $STATIC},
	{"FlowAdaptersCompileOnly$MBBPublisher", "FlowAdaptersCompileOnly", "MBBPublisher", $STATIC},
	{"FlowAdaptersCompileOnly$BBPublisher", "FlowAdaptersCompileOnly", "BBPublisher", $STATIC},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FlowAdaptersCompileOnly",
	"java.lang.Object",
	nullptr,
	_FlowAdaptersCompileOnly_FieldInfo_,
	_FlowAdaptersCompileOnly_MethodInfo_,
	nullptr,
	nullptr,
	_FlowAdaptersCompileOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly$LongSubscriber,FlowAdaptersCompileOnly$IntegerSubscriber,FlowAdaptersCompileOnly$NumberSubscriber,FlowAdaptersCompileOnly$ListSubscriberX,FlowAdaptersCompileOnly$ObjectSubscriber,FlowAdaptersCompileOnly$IterableSubscriber,FlowAdaptersCompileOnly$CollectionSubscriber,FlowAdaptersCompileOnly$ListSubscriber,FlowAdaptersCompileOnly$MBBPublisher,FlowAdaptersCompileOnly$BBPublisher"
};

$Object* allocate$FlowAdaptersCompileOnly($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly));
}

$Function* FlowAdaptersCompileOnly::f1 = nullptr;
$Function* FlowAdaptersCompileOnly::f2 = nullptr;
$Function* FlowAdaptersCompileOnly::f3 = nullptr;
$Function* FlowAdaptersCompileOnly::f4 = nullptr;
$Function* FlowAdaptersCompileOnly::numMapper = nullptr;
$Function* FlowAdaptersCompileOnly::intMapper = nullptr;
$Function* FlowAdaptersCompileOnly::longMapper = nullptr;

void FlowAdaptersCompileOnly::init$() {
}

void FlowAdaptersCompileOnly::makesSureDifferentGenericSignaturesCompile() {
	$init(FlowAdaptersCompileOnly);
	$useLocalCurrentObjectStackCache();
	$HttpRequest$BodyPublishers::fromPublisher($$new($FlowAdaptersCompileOnly$BBPublisher));
	$HttpRequest$BodyPublishers::fromPublisher($$new($FlowAdaptersCompileOnly$MBBPublisher));
	$HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriber));
	$HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$CollectionSubscriber));
	$HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$IterableSubscriber));
	$HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ObjectSubscriber));
	$HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriber));
	$HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$CollectionSubscriber));
	$HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$IterableSubscriber));
	$HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ObjectSubscriber));
	$HttpRequest$BodyPublishers::fromPublisher($$new($FlowAdaptersCompileOnly$BBPublisher), 1);
	$HttpRequest$BodyPublishers::fromPublisher($$new($FlowAdaptersCompileOnly$MBBPublisher), 1);
	$var($Flow$Subscriber, var$0, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriber)));
	$HttpResponse$BodyHandlers::fromSubscriber(var$0, $($Function::identity()));
	$var($Flow$Subscriber, var$1, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$CollectionSubscriber)));
	$HttpResponse$BodyHandlers::fromSubscriber(var$1, $($Function::identity()));
	$var($Flow$Subscriber, var$2, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$IterableSubscriber)));
	$HttpResponse$BodyHandlers::fromSubscriber(var$2, $($Function::identity()));
	$var($Flow$Subscriber, var$3, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ObjectSubscriber)));
	$HttpResponse$BodyHandlers::fromSubscriber(var$3, $($Function::identity()));
	$var($Flow$Subscriber, var$4, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriber)));
	$HttpResponse$BodySubscribers::fromSubscriber(var$4, $($Function::identity()));
	$var($Flow$Subscriber, var$5, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$CollectionSubscriber)));
	$HttpResponse$BodySubscribers::fromSubscriber(var$5, $($Function::identity()));
	$var($Flow$Subscriber, var$6, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$IterableSubscriber)));
	$HttpResponse$BodySubscribers::fromSubscriber(var$6, $($Function::identity()));
	$var($Flow$Subscriber, var$7, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ObjectSubscriber)));
	$HttpResponse$BodySubscribers::fromSubscriber(var$7, $($Function::identity()));
}

void FlowAdaptersCompileOnly::makesSureDifferentGenericFunctionSignaturesCompile() {
	$init(FlowAdaptersCompileOnly);
	$useLocalCurrentObjectStackCache();
	$var($Flow$Subscriber, var$0, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriber)));
	$var($HttpResponse$BodyHandler, bh01, $HttpResponse$BodyHandlers::fromSubscriber(var$0, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7))));
	$var($Flow$Subscriber, var$1, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriber)));
	$var($HttpResponse$BodyHandler, bh02, $HttpResponse$BodyHandlers::fromSubscriber(var$1, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8))));
	$var($HttpResponse$BodyHandler, bh03, $HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriber), FlowAdaptersCompileOnly::f1));
	$var($HttpResponse$BodyHandler, bh04, $HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriber), FlowAdaptersCompileOnly::f1));
	$var($HttpResponse$BodyHandler, bh05, $HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriber), FlowAdaptersCompileOnly::f2));
	$var($HttpResponse$BodyHandler, bh06, $HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f1));
	$var($HttpResponse$BodyHandler, bh07, $HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f1));
	$var($HttpResponse$BodyHandler, bh08, $HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f2));
	$var($Flow$Subscriber, var$2, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriberX)));
	$var($HttpResponse$BodyHandler, bh09, $HttpResponse$BodyHandlers::fromSubscriber(var$2, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$getIntegerX$9))));
	$var($Flow$Subscriber, var$3, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriberX)));
	$var($HttpResponse$BodyHandler, bh10, $HttpResponse$BodyHandlers::fromSubscriber(var$3, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$getIntegerX$9))));
	$var($HttpResponse$BodyHandler, bh11, $HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f3));
	$var($HttpResponse$BodyHandler, bh12, $HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f3));
	$var($HttpResponse$BodyHandler, bh13, $HttpResponse$BodyHandlers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f4));
	$var($Flow$Subscriber, var$4, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriber)));
	$var($HttpResponse$BodySubscriber, bs01, $HttpResponse$BodySubscribers::fromSubscriber(var$4, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7))));
	$var($Flow$Subscriber, var$5, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriber)));
	$var($HttpResponse$BodySubscriber, bs02, $HttpResponse$BodySubscribers::fromSubscriber(var$5, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8))));
	$var($HttpResponse$BodySubscriber, bs03, $HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriber), FlowAdaptersCompileOnly::f1));
	$var($HttpResponse$BodySubscriber, bs04, $HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriber), FlowAdaptersCompileOnly::f1));
	$var($HttpResponse$BodySubscriber, bs05, $HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriber), FlowAdaptersCompileOnly::f2));
	$var($HttpResponse$BodySubscriber, bs06, $HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f1));
	$var($HttpResponse$BodySubscriber, bs07, $HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f1));
	$var($HttpResponse$BodySubscriber, bs08, $HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f2));
	$var($Flow$Subscriber, var$6, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriberX)));
	$var($HttpResponse$BodySubscriber, bs09, $HttpResponse$BodySubscribers::fromSubscriber(var$6, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$getIntegerX$9))));
	$var($Flow$Subscriber, var$7, static_cast<$Flow$Subscriber*>($new($FlowAdaptersCompileOnly$ListSubscriberX)));
	$var($HttpResponse$BodySubscriber, bs10, $HttpResponse$BodySubscribers::fromSubscriber(var$7, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$getIntegerX$9))));
	$var($HttpResponse$BodySubscriber, bs11, $HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f3));
	$var($HttpResponse$BodySubscriber, bs12, $HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f3));
	$var($HttpResponse$BodySubscriber, bs13, $HttpResponse$BodySubscribers::fromSubscriber($$new($FlowAdaptersCompileOnly$ListSubscriberX), FlowAdaptersCompileOnly::f4));
}

void FlowAdaptersCompileOnly::makesSureDifferentGenericSubscriberSignaturesCompile() {
	$useLocalCurrentObjectStackCache();
	$var($HttpClient, client, nullptr);
	$var($HttpRequest, request, nullptr);
	$var($FlowAdaptersCompileOnly$IntegerSubscriber, sub1, $new($FlowAdaptersCompileOnly$IntegerSubscriber));
	$var($HttpResponse, r1, $nc(client)->send(request, $($HttpResponse$BodyHandlers::fromSubscriber(sub1, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$getInteger$10))))));
	$var($HttpResponse, r2, client->send(request, $($HttpResponse$BodyHandlers::fromSubscriber(sub1, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$getInteger$10))))));
	$var($HttpResponse, r3, client->send(request, $($HttpResponse$BodyHandlers::fromSubscriber(sub1, static_cast<$Function*>($$new(FlowAdaptersCompileOnly$$Lambda$getNumber$11))))));
	$var($HttpResponse, r4, client->send(request, $($HttpResponse$BodyHandlers::fromSubscriber(sub1, FlowAdaptersCompileOnly::intMapper))));
	$var($HttpResponse, r5, client->send(request, $($HttpResponse$BodyHandlers::fromSubscriber(sub1, FlowAdaptersCompileOnly::intMapper))));
	$var($HttpResponse, r6, client->send(request, $($HttpResponse$BodyHandlers::fromSubscriber(sub1, FlowAdaptersCompileOnly::numMapper))));
	$var($Function, objectMapper, static_cast<$Function*>($new(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12)));
	client->sendAsync(request, $($HttpResponse$BodyHandlers::fromSubscriber(sub1, objectMapper)));
}

$Number* FlowAdaptersCompileOnly::lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11(Object$* sub) {
	$init(FlowAdaptersCompileOnly);
	return $Integer::valueOf(1);
}

$Long* FlowAdaptersCompileOnly::lambda$static$10($FlowAdaptersCompileOnly$LongSubscriber* sub) {
	$init(FlowAdaptersCompileOnly);
	return $nc(sub)->getLong();
}

$Integer* FlowAdaptersCompileOnly::lambda$static$9($FlowAdaptersCompileOnly$IntegerSubscriber* sub) {
	$init(FlowAdaptersCompileOnly);
	return $nc(sub)->getInteger();
}

$Number* FlowAdaptersCompileOnly::lambda$static$8($FlowAdaptersCompileOnly$NumberSubscriber* sub) {
	$init(FlowAdaptersCompileOnly);
	return $nc(sub)->getNumber();
}

$Number* FlowAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$5($FlowAdaptersCompileOnly$ListSubscriber* s) {
	$init(FlowAdaptersCompileOnly);
	return $Integer::valueOf(7);
}

$Integer* FlowAdaptersCompileOnly::lambda$makesSureDifferentGenericFunctionSignaturesCompile$4($FlowAdaptersCompileOnly$ListSubscriber* s) {
	$init(FlowAdaptersCompileOnly);
	return $Integer::valueOf(6);
}

$Number* FlowAdaptersCompileOnly::lambda$static$3($FlowAdaptersCompileOnly$ListSubscriberX* subscriber) {
	$init(FlowAdaptersCompileOnly);
	return $Integer::valueOf(4);
}

$Integer* FlowAdaptersCompileOnly::lambda$static$2($FlowAdaptersCompileOnly$ListSubscriberX* subscriber) {
	$init(FlowAdaptersCompileOnly);
	return $Integer::valueOf(3);
}

$Number* FlowAdaptersCompileOnly::lambda$static$1($FlowAdaptersCompileOnly$ListSubscriber* subscriber) {
	$init(FlowAdaptersCompileOnly);
	return $Integer::valueOf(2);
}

$Integer* FlowAdaptersCompileOnly::lambda$static$0($FlowAdaptersCompileOnly$ListSubscriber* subscriber) {
	$init(FlowAdaptersCompileOnly);
	return $Integer::valueOf(1);
}

void clinit$FlowAdaptersCompileOnly($Class* class$) {
	$assignStatic(FlowAdaptersCompileOnly::f1, static_cast<$Function*>($new(FlowAdaptersCompileOnly$$Lambda$lambda$static$0)));
	$assignStatic(FlowAdaptersCompileOnly::f2, static_cast<$Function*>($new(FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1)));
	$assignStatic(FlowAdaptersCompileOnly::f3, static_cast<$Function*>($new(FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2)));
	$assignStatic(FlowAdaptersCompileOnly::f4, static_cast<$Function*>($new(FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3)));
	$assignStatic(FlowAdaptersCompileOnly::numMapper, static_cast<$Function*>($new(FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4)));
	$assignStatic(FlowAdaptersCompileOnly::intMapper, static_cast<$Function*>($new(FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5)));
	$assignStatic(FlowAdaptersCompileOnly::longMapper, static_cast<$Function*>($new(FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6)));
}

FlowAdaptersCompileOnly::FlowAdaptersCompileOnly() {
}

$Class* FlowAdaptersCompileOnly::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$static$0::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$static$1$1::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$static$2$2::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$static$3$3::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$static$8$4::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$static$9$5::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$static$10$6::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$4$7::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericFunctionSignaturesCompile$5$8::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$getIntegerX$9::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$getIntegerX$9::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$getInteger$10::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$getInteger$10::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$getNumber$11::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$getNumber$11::load$(name, initialize);
		}
		if (name->equals(FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12::classInfo$.name)) {
			return FlowAdaptersCompileOnly$$Lambda$lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11$12::load$(name, initialize);
		}
	}
	$loadClass(FlowAdaptersCompileOnly, name, initialize, &_FlowAdaptersCompileOnly_ClassInfo_, clinit$FlowAdaptersCompileOnly, allocate$FlowAdaptersCompileOnly);
	return class$;
}

$Class* FlowAdaptersCompileOnly::class$ = nullptr;