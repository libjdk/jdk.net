#include <JavadocExamples$FromMappingSubscriber.h>

#include <JavadocExamples$ObjectMapper.h>
#include <JavadocExamples.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/net/http/HttpResponse$BodySubscribers.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $JavadocExamples = ::JavadocExamples;
using $JavadocExamples$ObjectMapper = ::JavadocExamples$ObjectMapper;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $HttpResponse$BodySubscribers = ::java::net::http::HttpResponse$BodySubscribers;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;

class JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1 : public $Function {
	$class(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1, $NO_CLASS_INIT, $Function)
public:
	void init$($Class* targetType) {
		this->targetType = targetType;
	}
	virtual $Object* apply(Object$* is) override {
		 return $of(JavadocExamples$FromMappingSubscriber::lambda$asJSON$1(targetType, $cast($InputStream, is)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1>());
	}
	$Class* targetType = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1::fieldInfos[2] = {
	{"targetType", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1, targetType)},
	{}
};
$MethodInfo JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1::*)($Class*)>(&JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1::class$ = nullptr;

class JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1 : public $Supplier {
	$class(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($InputStream* is, $Class* targetType) {
		$set(this, is, is);
		this->targetType = targetType;
	}
	virtual $Object* get() override {
		 return JavadocExamples$FromMappingSubscriber::lambda$asJSON$0(is, targetType);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1>());
	}
	$InputStream* is = nullptr;
	$Class* targetType = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1::fieldInfos[3] = {
	{"is", "Ljava/io/InputStream;", nullptr, $PUBLIC, $field(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1, is)},
	{"targetType", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1, targetType)},
	{}
};
$MethodInfo JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1::*)($InputStream*,$Class*)>(&JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1::class$ = nullptr;

$MethodInfo _JavadocExamples$FromMappingSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavadocExamples$FromMappingSubscriber::*)()>(&JavadocExamples$FromMappingSubscriber::init$))},
	{"asJSON", "(Ljava/lang/Class;)Ljava/net/http/HttpResponse$BodySubscriber;", "<W:Ljava/lang/Object;>(Ljava/lang/Class<TW;>;)Ljava/net/http/HttpResponse$BodySubscriber<Ljava/util/function/Supplier<TW;>;>;", $PUBLIC | $STATIC, $method(static_cast<$HttpResponse$BodySubscriber*(*)($Class*)>(&JavadocExamples$FromMappingSubscriber::asJSON))},
	{"lambda$asJSON$0", "(Ljava/io/InputStream;Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($InputStream*,$Class*)>(&JavadocExamples$FromMappingSubscriber::lambda$asJSON$0))},
	{"lambda$asJSON$1", "(Ljava/lang/Class;Ljava/io/InputStream;)Ljava/util/function/Supplier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Supplier*(*)($Class*,$InputStream*)>(&JavadocExamples$FromMappingSubscriber::lambda$asJSON$1))},
	{}
};

$InnerClassInfo _JavadocExamples$FromMappingSubscriber_InnerClassesInfo_[] = {
	{"JavadocExamples$FromMappingSubscriber", "JavadocExamples", "FromMappingSubscriber", $STATIC},
	{}
};

$ClassInfo _JavadocExamples$FromMappingSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"JavadocExamples$FromMappingSubscriber",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JavadocExamples$FromMappingSubscriber_MethodInfo_,
	nullptr,
	nullptr,
	_JavadocExamples$FromMappingSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JavadocExamples"
};

$Object* allocate$JavadocExamples$FromMappingSubscriber($Class* clazz) {
	return $of($alloc(JavadocExamples$FromMappingSubscriber));
}

void JavadocExamples$FromMappingSubscriber::init$() {
}

$HttpResponse$BodySubscriber* JavadocExamples$FromMappingSubscriber::asJSON($Class* targetType) {
	$var($HttpResponse$BodySubscriber, upstream, $HttpResponse$BodySubscribers::ofInputStream());
	$var($HttpResponse$BodySubscriber, downstream, $HttpResponse$BodySubscribers::mapping(upstream, static_cast<$Function*>($$new(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1, targetType))));
	return downstream;
}

$Supplier* JavadocExamples$FromMappingSubscriber::lambda$asJSON$1($Class* targetType, $InputStream* is) {
	return static_cast<$Supplier*>($new(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1, is, targetType));
}

$Object* JavadocExamples$FromMappingSubscriber::lambda$asJSON$0($InputStream* is, $Class* targetType) {
	try {
		$var($InputStream, stream, is);
		{
			$var($Throwable, var$0, nullptr);
			$var($Object, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($JavadocExamples$ObjectMapper, objectMapper, $new($JavadocExamples$ObjectMapper));
					$assign(var$2, objectMapper->readValue(stream, targetType));
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (stream != nullptr) {
						try {
							stream->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (stream != nullptr) {
					stream->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

JavadocExamples$FromMappingSubscriber::JavadocExamples$FromMappingSubscriber() {
}

$Class* JavadocExamples$FromMappingSubscriber::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1::classInfo$.name)) {
			return JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$1::load$(name, initialize);
		}
		if (name->equals(JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1::classInfo$.name)) {
			return JavadocExamples$FromMappingSubscriber$$Lambda$lambda$asJSON$0$1::load$(name, initialize);
		}
	}
	$loadClass(JavadocExamples$FromMappingSubscriber, name, initialize, &_JavadocExamples$FromMappingSubscriber_ClassInfo_, allocate$JavadocExamples$FromMappingSubscriber);
	return class$;
}

$Class* JavadocExamples$FromMappingSubscriber::class$ = nullptr;