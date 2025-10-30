#include <JavadocExamples.h>

#include <JavadocExamples$Foo.h>
#include <JavadocExamples$FromMappingSubscriber.h>
#include <JavadocExamples$LineParserSubscriber.h>
#include <JavadocExamples$PrintSubscriber.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/Authenticator.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient$Redirect.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse$BodySubscribers.h>
#include <java/net/http/HttpResponse$ResponseInfo.h>
#include <java/net/http/HttpResponse.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/time/Duration.h>
#include <java/util/List.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef HTTP_1_1
#undef NORMAL
#undef UTF_8

using $JavadocExamples$Foo = ::JavadocExamples$Foo;
using $JavadocExamples$FromMappingSubscriber = ::JavadocExamples$FromMappingSubscriber;
using $JavadocExamples$LineParserSubscriber = ::JavadocExamples$LineParserSubscriber;
using $JavadocExamples$PrintSubscriber = ::JavadocExamples$PrintSubscriber;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Authenticator = ::java::net::Authenticator;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpClient$Redirect = ::java::net::http::HttpClient$Redirect;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $HttpResponse$BodySubscribers = ::java::net::http::HttpResponse$BodySubscribers;
using $HttpResponse$ResponseInfo = ::java::net::http::HttpResponse$ResponseInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $Duration = ::java::time::Duration;
using $List = ::java::util::List;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Pattern = ::java::util::regex::Pattern;

class JavadocExamples$$Lambda$body : public $Function {
	$class(JavadocExamples$$Lambda$body, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($HttpResponse, inst$)->body();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$body>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$body::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$body::*)()>(&JavadocExamples$$Lambda$body::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$body::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$body",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$body::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$body, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$body::class$ = nullptr;

class JavadocExamples$$Lambda$println$1 : public $Consumer {
	$class(JavadocExamples$$Lambda$println$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->println($cast($String, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$println$1>());
	}
	$PrintStream* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavadocExamples$$Lambda$println$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocExamples$$Lambda$println$1, inst$)},
	{}
};
$MethodInfo JavadocExamples$$Lambda$println$1::methodInfos[3] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$println$1::*)($PrintStream*)>(&JavadocExamples$$Lambda$println$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$println$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$println$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* JavadocExamples$$Lambda$println$1::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$println$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$println$1::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2 : public $BiPredicate {
	$class(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* n, Object$* v) override {
		 return JavadocExamples::lambda$fromHttpRequest$0($cast($String, n), $cast($String, v));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::*)()>(&JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3 : public $BiPredicate {
	$class(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* n, Object$* v) override {
		 return JavadocExamples::lambda$fromHttpRequest$1($cast($String, n), $cast($String, v));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::*)()>(&JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4 : public $BiPredicate {
	$class(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$() {
	}
	virtual bool test(Object$* name, Object$* value) override {
		 return JavadocExamples::lambda$fromHttpRequest$2($cast($String, name), $cast($String, value));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::*)()>(&JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::class$ = nullptr;

class JavadocExamples$$Lambda$println$5 : public $Consumer {
	$class(JavadocExamples$$Lambda$println$5, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->println(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$println$5>());
	}
	$PrintStream* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavadocExamples$$Lambda$println$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocExamples$$Lambda$println$5, inst$)},
	{}
};
$MethodInfo JavadocExamples$$Lambda$println$5::methodInfos[3] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$println$5::*)($PrintStream*)>(&JavadocExamples$$Lambda$println$5::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$println$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$println$5",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* JavadocExamples$$Lambda$println$5::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$println$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$println$5::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* info) override {
		 return JavadocExamples::lambda$fromHttpResponse$3(info);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::*)()>(&JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::init$))},
	{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6",
	"java.lang.Object",
	"java.net.http.HttpResponse$BodyHandler",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		 return JavadocExamples::lambda$fromHttpResponse$4(responseInfo);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::*)()>(&JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::init$))},
	{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7",
	"java.lang.Object",
	"java.net.http.HttpResponse$BodyHandler",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		 return JavadocExamples::lambda$fromHttpResponse$5(responseInfo);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::*)()>(&JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::init$))},
	{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8",
	"java.lang.Object",
	"java.net.http.HttpResponse$BodyHandler",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		 return JavadocExamples::lambda$fromHttpResponse$6(responseInfo);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::*)()>(&JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::init$))},
	{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9",
	"java.lang.Object",
	"java.net.http.HttpResponse$BodyHandler",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* responseInfo) override {
		 return JavadocExamples::lambda$fromHttpResponse$7(responseInfo);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::*)()>(&JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::init$))},
	{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10",
	"java.lang.Object",
	"java.net.http.HttpResponse$BodyHandler",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11 : public $HttpResponse$BodyHandler {
	$class(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11, $NO_CLASS_INIT, $HttpResponse$BodyHandler)
public:
	void init$() {
	}
	virtual $HttpResponse$BodySubscriber* apply($HttpResponse$ResponseInfo* resp) override {
		 return JavadocExamples::lambda$fromHttpResponse$8(resp);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::*)()>(&JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::init$))},
	{"apply", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11",
	"java.lang.Object",
	"java.net.http.HttpResponse$BodyHandler",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::class$ = nullptr;

class JavadocExamples$$Lambda$statusCode$12 : public $Function {
	$class(JavadocExamples$$Lambda$statusCode$12, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($HttpResponse, inst$)->statusCode());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$statusCode$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$statusCode$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$statusCode$12::*)()>(&JavadocExamples$$Lambda$statusCode$12::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$statusCode$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$statusCode$12",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$statusCode$12::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$statusCode$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$statusCode$12::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13 : public $Consumer {
	$class(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* status) override {
		JavadocExamples::lambda$fromLineSubscriber1$9($cast($Integer, status));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::*)()>(&JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::class$ = nullptr;

class JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14 : public $Function {
	$class(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(JavadocExamples::lambda$fromLineSubscriber2$10($cast($JavadocExamples$LineParserSubscriber, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::*)()>(&JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::class$ = nullptr;

class JavadocExamples$$Lambda$getBytes$15 : public $Function {
	$class(JavadocExamples$$Lambda$getBytes$15, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($String, inst$)->getBytes());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$$Lambda$getBytes$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JavadocExamples$$Lambda$getBytes$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$$Lambda$getBytes$15::*)()>(&JavadocExamples$$Lambda$getBytes$15::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$$Lambda$getBytes$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$$Lambda$getBytes$15",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* JavadocExamples$$Lambda$getBytes$15::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$$Lambda$getBytes$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$$Lambda$getBytes$15::class$ = nullptr;

$FieldInfo _JavadocExamples_FieldInfo_[] = {
	{"request", "Ljava/net/http/HttpRequest;", nullptr, 0, $field(JavadocExamples, request)},
	{"client", "Ljava/net/http/HttpClient;", nullptr, 0, $field(JavadocExamples, client)},
	{"p", "Ljava/util/regex/Pattern;", nullptr, 0, $field(JavadocExamples, p)},
	{}
};

$MethodInfo _JavadocExamples_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples::*)()>(&JavadocExamples::init$))},
	{"fromHttpClientClasslevelDescription", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"fromHttpRequest", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"fromHttpResponse", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"fromLineSubscriber1", "()V", nullptr, 0},
	{"fromLineSubscriber2", "()V", nullptr, 0, nullptr, "java.io.IOException,java.lang.InterruptedException"},
	{"lambda$fromHttpRequest$0", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$String*)>(&JavadocExamples::lambda$fromHttpRequest$0))},
	{"lambda$fromHttpRequest$1", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$String*)>(&JavadocExamples::lambda$fromHttpRequest$1))},
	{"lambda$fromHttpRequest$2", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$String*)>(&JavadocExamples::lambda$fromHttpRequest$2))},
	{"lambda$fromHttpResponse$3", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpResponse$BodySubscriber*(*)($HttpResponse$ResponseInfo*)>(&JavadocExamples::lambda$fromHttpResponse$3))},
	{"lambda$fromHttpResponse$4", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpResponse$BodySubscriber*(*)($HttpResponse$ResponseInfo*)>(&JavadocExamples::lambda$fromHttpResponse$4))},
	{"lambda$fromHttpResponse$5", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpResponse$BodySubscriber*(*)($HttpResponse$ResponseInfo*)>(&JavadocExamples::lambda$fromHttpResponse$5))},
	{"lambda$fromHttpResponse$6", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpResponse$BodySubscriber*(*)($HttpResponse$ResponseInfo*)>(&JavadocExamples::lambda$fromHttpResponse$6))},
	{"lambda$fromHttpResponse$7", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpResponse$BodySubscriber*(*)($HttpResponse$ResponseInfo*)>(&JavadocExamples::lambda$fromHttpResponse$7))},
	{"lambda$fromHttpResponse$8", "(Ljava/net/http/HttpResponse$ResponseInfo;)Ljava/net/http/HttpResponse$BodySubscriber;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpResponse$BodySubscriber*(*)($HttpResponse$ResponseInfo*)>(&JavadocExamples::lambda$fromHttpResponse$8))},
	{"lambda$fromLineSubscriber1$9", "(Ljava/lang/Integer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Integer*)>(&JavadocExamples::lambda$fromLineSubscriber1$9))},
	{"lambda$fromLineSubscriber2$10", "(LJavadocExamples$LineParserSubscriber;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($JavadocExamples$LineParserSubscriber*)>(&JavadocExamples::lambda$fromLineSubscriber2$10))},
	{}
};

$InnerClassInfo _JavadocExamples_InnerClassesInfo_[] = {
	{"JavadocExamples$FromMappingSubscriber", "JavadocExamples", "FromMappingSubscriber", $STATIC},
	{"JavadocExamples$ObjectMapper", "JavadocExamples", "ObjectMapper", $STATIC},
	{"JavadocExamples$Foo", "JavadocExamples", "Foo", $PUBLIC | $STATIC},
	{"JavadocExamples$LineParserSubscriber", "JavadocExamples", "LineParserSubscriber", $STATIC | $FINAL},
	{"JavadocExamples$PrintSubscriber", "JavadocExamples", "PrintSubscriber", $STATIC | $FINAL},
	{}
};

$ClassInfo _JavadocExamples_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JavadocExamples",
	"java.lang.Object",
	nullptr,
	_JavadocExamples_FieldInfo_,
	_JavadocExamples_MethodInfo_,
	nullptr,
	nullptr,
	_JavadocExamples_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JavadocExamples$FromMappingSubscriber,JavadocExamples$ObjectMapper,JavadocExamples$Foo,JavadocExamples$LineParserSubscriber,JavadocExamples$PrintSubscriber"
};

$Object* allocate$JavadocExamples($Class* clazz) {
	return $of($alloc(JavadocExamples));
}

void JavadocExamples::init$() {
	$set(this, request, nullptr);
	$set(this, client, nullptr);
	$set(this, p, nullptr);
}

void JavadocExamples::fromHttpClientClasslevelDescription() {
	$useLocalCurrentObjectStackCache();
	$init($HttpClient$Version);
	$init($HttpClient$Redirect);
	$var($HttpClient, client, $nc($($nc($($nc($($nc($($nc($($nc($($HttpClient::newBuilder()))->version($HttpClient$Version::HTTP_1_1)))->followRedirects($HttpClient$Redirect::NORMAL)))->connectTimeout($($Duration::ofSeconds(20)))))->proxy($($ProxySelector::of($$new($InetSocketAddress, "proxy.example.com"_s, 80))))))->authenticator($($Authenticator::getDefault()))))->build());
	$var($HttpResponse, response, $nc(client)->send(this->request, $($HttpResponse$BodyHandlers::ofString())));
	$nc($System::out)->println($nc(response)->statusCode());
	$nc($System::out)->println($cast($String, $($nc(response)->body())));
	$var($HttpRequest, request, $nc($($nc($($nc($($nc($($nc($($HttpRequest::newBuilder()))->uri($($URI::create("https://foo.com/"_s)))))->timeout($($Duration::ofMinutes(2)))))->header("Content-Type"_s, "application/json"_s)))->POST($($HttpRequest$BodyPublishers::ofFile($($Paths::get("file.json"_s, $$new($StringArray, 0))))))))->build());
	$nc($($cast($CompletableFuture, $nc($(client->sendAsync(request, $($HttpResponse$BodyHandlers::ofString()))))->thenApply(static_cast<$Function*>($$new(JavadocExamples$$Lambda$body))))))->thenAccept(static_cast<$Consumer*>($$new(JavadocExamples$$Lambda$println$1, static_cast<$PrintStream*>($nc($System::out)))));
}

void JavadocExamples::fromHttpRequest() {
	$useLocalCurrentObjectStackCache();
	$var($HttpClient, client, $HttpClient::newHttpClient());
	$var($HttpRequest, request, $nc($($nc($($HttpRequest::newBuilder()))->uri($($URI::create("http://foo.com/"_s)))))->build());
	$nc($($cast($CompletableFuture, $nc($($cast($CompletableFuture, $nc($($nc(client)->sendAsync(request, $($HttpResponse$BodyHandlers::ofString()))))->thenApply(static_cast<$Function*>($$new(JavadocExamples$$Lambda$body))))))->thenAccept(static_cast<$Consumer*>($$new(JavadocExamples$$Lambda$println$1, static_cast<$PrintStream*>($nc($System::out))))))))->join();
	$var($HttpRequest, request1, $nc($($nc($($nc($($nc($($HttpRequest::newBuilder()))->uri($($URI::create("https://foo.com/"_s)))))->header("Content-Type"_s, "text/plain; charset=UTF-8"_s)))->POST($($HttpRequest$BodyPublishers::ofString("some body text"_s)))))->build());
	$var($HttpRequest, request2, $nc($($nc($($nc($($nc($($HttpRequest::newBuilder()))->uri($($URI::create("https://foo.com/"_s)))))->header("Content-Type"_s, "application/json"_s)))->POST($($HttpRequest$BodyPublishers::ofFile($($Paths::get("file.json"_s, $$new($StringArray, 0))))))))->build());
	$var($HttpRequest, request3, $nc($($nc($($nc($($HttpRequest::newBuilder()))->uri($($URI::create("https://foo.com/"_s)))))->POST($($HttpRequest$BodyPublishers::ofByteArray($$new($bytes, 0))))))->build());
	$HttpRequest::newBuilder(request, static_cast<$BiPredicate*>($$new(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2)));
	$HttpRequest::newBuilder(request, static_cast<$BiPredicate*>($$new(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3)));
	$HttpRequest::newBuilder(request, static_cast<$BiPredicate*>($$new(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4)));
}

void JavadocExamples::fromHttpResponse() {
	$useLocalCurrentObjectStackCache();
	$var($HttpResponse, response, $nc(this->client)->send(this->request, $($HttpResponse$BodyHandlers::ofString())));
	$var($HttpRequest, request, $nc($($nc($($HttpRequest::newBuilder()))->uri($($URI::create("http://www.foo.com/"_s)))))->build());
	$nc($($cast($CompletableFuture, $nc($($nc(this->client)->sendAsync(request, $($HttpResponse$BodyHandlers::ofFile($($Paths::get("/tmp/f"_s, $$new($StringArray, 0))))))))->thenApply(static_cast<$Function*>($$new(JavadocExamples$$Lambda$body))))))->thenAccept(static_cast<$Consumer*>($$new(JavadocExamples$$Lambda$println$5, static_cast<$PrintStream*>($nc($System::out)))));
	$var($HttpRequest, request1, $nc($($nc($($HttpRequest::newBuilder()))->uri($($URI::create("http://www.foo.com/"_s)))))->build());
	$var($HttpResponse$BodyHandler, bodyHandler, static_cast<$HttpResponse$BodyHandler*>($new(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6)));
	$nc($($cast($CompletableFuture, $nc($($nc(this->client)->sendAsync(request, bodyHandler)))->thenApply(static_cast<$Function*>($$new(JavadocExamples$$Lambda$body))))))->thenAccept(static_cast<$Consumer*>($$new(JavadocExamples$$Lambda$println$5, static_cast<$PrintStream*>($nc($System::out)))));
	$var($HttpResponse, response1, $nc(this->client)->send(request, $($HttpResponse$BodyHandlers::ofString())));
	$var($HttpResponse, response2, $nc(this->client)->send(request, $($HttpResponse$BodyHandlers::ofFile($($Paths::get("example.html"_s, $$new($StringArray, 0)))))));
	$var($HttpResponse, respons3, $nc(this->client)->send(request, $($HttpResponse$BodyHandlers::ofInputStream())));
	$var($HttpResponse, respons4, $nc(this->client)->send(request, $($HttpResponse$BodyHandlers::discarding())));
	$var($HttpResponse, response5, $nc(this->client)->send(request, static_cast<$HttpResponse$BodyHandler*>($$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7))));
	$var($HttpResponse, response6, $nc(this->client)->send(request, static_cast<$HttpResponse$BodyHandler*>($$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8))));
	$var($HttpResponse, response7, $nc(this->client)->send(request, static_cast<$HttpResponse$BodyHandler*>($$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9))));
	$var($HttpResponse, response8, $nc(this->client)->send(request, static_cast<$HttpResponse$BodyHandler*>($$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10))));
	$var($HttpResponse, response9, $nc(this->client)->send(request, static_cast<$HttpResponse$BodyHandler*>($$new(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11))));
	$var($String, resp, $nc(($cast($JavadocExamples$Foo, $($nc(($cast($Supplier, $($nc(response9)->body()))))->get()))))->asString());
}

void JavadocExamples::fromLineSubscriber1() {
	$useLocalCurrentObjectStackCache();
	$var($JavadocExamples$PrintSubscriber, subscriber, $new($JavadocExamples$PrintSubscriber, $System::out));
	$nc($($cast($CompletableFuture, $nc($($nc(this->client)->sendAsync(this->request, $($HttpResponse$BodyHandlers::fromLineSubscriber(subscriber)))))->thenApply(static_cast<$Function*>($$new(JavadocExamples$$Lambda$statusCode$12))))))->thenAccept(static_cast<$Consumer*>($$new(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13)));
}

void JavadocExamples::fromLineSubscriber2() {
	$useLocalCurrentObjectStackCache();
	$var($Pattern, pattern, this->p);
	$var($JavadocExamples$LineParserSubscriber, subscriber, $new($JavadocExamples$LineParserSubscriber, pattern));
	$var($HttpResponse, response, $nc(this->client)->send(this->request, $($HttpResponse$BodyHandlers::fromLineSubscriber(subscriber, static_cast<$Function*>($$new(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14)), "\n"_s))));
	if ($nc(response)->statusCode() != 200) {
		$nc($System::err)->printf("ERROR: %d status received%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(response->statusCode())))}));
	}
}

$List* JavadocExamples::lambda$fromLineSubscriber2$10($JavadocExamples$LineParserSubscriber* s) {
	return $nc(s)->getMatchingLines();
}

void JavadocExamples::lambda$fromLineSubscriber1$9($Integer* status) {
	if ($nc(status)->intValue() != 200) {
		$nc($System::err)->printf("ERROR: %d status received%n"_s, $$new($ObjectArray, {$of(status)}));
	}
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$8($HttpResponse$ResponseInfo* resp) {
	$load($JavadocExamples$Foo);
	return $JavadocExamples$FromMappingSubscriber::asJSON($JavadocExamples$Foo::class$);
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$7($HttpResponse$ResponseInfo* responseInfo) {
	$useLocalCurrentObjectStackCache();
	$init($StandardCharsets);
	$var($HttpResponse$BodySubscriber, var$0, $HttpResponse$BodySubscribers::ofString($StandardCharsets::UTF_8));
	return $HttpResponse$BodySubscribers::mapping(var$0, static_cast<$Function*>($$new(JavadocExamples$$Lambda$getBytes$15)));
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$6($HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::discarding();
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$5($HttpResponse$ResponseInfo* responseInfo) {
	return $HttpResponse$BodySubscribers::ofByteArray();
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$4($HttpResponse$ResponseInfo* responseInfo) {
	$useLocalCurrentObjectStackCache();
	return $HttpResponse$BodySubscribers::ofFile($($Paths::get("example.html"_s, $$new($StringArray, 0))));
}

$HttpResponse$BodySubscriber* JavadocExamples::lambda$fromHttpResponse$3($HttpResponse$ResponseInfo* info) {
	$useLocalCurrentObjectStackCache();
	return $nc(info)->statusCode() == 200 ? $HttpResponse$BodySubscribers::ofFile($($Paths::get("/tmp/f"_s, $$new($StringArray, 0)))) : $HttpResponse$BodySubscribers::replacing($($Paths::get("/NULL"_s, $$new($StringArray, 0))));
}

bool JavadocExamples::lambda$fromHttpRequest$2($String* name, $String* value) {
	return !$nc(name)->equalsIgnoreCase("Foo-Bar"_s);
}

bool JavadocExamples::lambda$fromHttpRequest$1($String* n, $String* v) {
	return false;
}

bool JavadocExamples::lambda$fromHttpRequest$0($String* n, $String* v) {
	return true;
}

JavadocExamples::JavadocExamples() {
}

$Class* JavadocExamples::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavadocExamples$$Lambda$body::classInfo$.name)) {
			return JavadocExamples$$Lambda$body::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$println$1::classInfo$.name)) {
			return JavadocExamples$$Lambda$println$1::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromHttpRequest$0$2::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromHttpRequest$1$3::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromHttpRequest$2$4::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$println$5::classInfo$.name)) {
			return JavadocExamples$$Lambda$println$5::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$3$6::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$4$7::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$5$8::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$6$9::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$7$10::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromHttpResponse$8$11::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$statusCode$12::classInfo$.name)) {
			return JavadocExamples$$Lambda$statusCode$12::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromLineSubscriber1$9$13::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::classInfo$.name)) {
			return JavadocExamples$$Lambda$lambda$fromLineSubscriber2$10$14::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$$Lambda$getBytes$15::classInfo$.name)) {
			return JavadocExamples$$Lambda$getBytes$15::load$(name, initialize);
		}
	}
	$loadClass(JavadocExamples, name, initialize, &_JavadocExamples_ClassInfo_, allocate$JavadocExamples);
	return class$;
}

$Class* JavadocExamples::class$ = nullptr;