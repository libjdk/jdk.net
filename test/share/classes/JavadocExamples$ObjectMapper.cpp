#include <JavadocExamples$ObjectMapper.h>

#include <JavadocExamples.h>
#include <java/io/InputStream.h>
#include <java/lang/Error.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <jcpp.h>

using $JavadocExamples = ::JavadocExamples;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;

$MethodInfo _JavadocExamples$ObjectMapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavadocExamples$ObjectMapper::*)()>(&JavadocExamples$ObjectMapper::init$))},
	{"map", "([BLjava/lang/Class;)Ljava/lang/Object;", "<W:Ljava/lang/Object;>([BLjava/lang/Class<TW;>;)TW;", $STATIC, $method(static_cast<$Object*(*)($bytes*,$Class*)>(&JavadocExamples$ObjectMapper::map))},
	{"readValue", "(Ljava/io/InputStream;Ljava/lang/Class;)Ljava/lang/Object;", "<W:Ljava/lang/Object;>(Ljava/io/InputStream;Ljava/lang/Class<TW;>;)TW;", 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JavadocExamples$ObjectMapper_InnerClassesInfo_[] = {
	{"JavadocExamples$ObjectMapper", "JavadocExamples", "ObjectMapper", $STATIC},
	{}
};

$ClassInfo _JavadocExamples$ObjectMapper_ClassInfo_ = {
	$ACC_SUPER,
	"JavadocExamples$ObjectMapper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JavadocExamples$ObjectMapper_MethodInfo_,
	nullptr,
	nullptr,
	_JavadocExamples$ObjectMapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JavadocExamples"
};

$Object* allocate$JavadocExamples$ObjectMapper($Class* clazz) {
	return $of($alloc(JavadocExamples$ObjectMapper));
}

void JavadocExamples$ObjectMapper::init$() {
}

$Object* JavadocExamples$ObjectMapper::readValue($InputStream* is, $Class* targetType) {
	$var($bytes, bytes, $nc(is)->readAllBytes());
	return $of(map(bytes, targetType));
}

$Object* JavadocExamples$ObjectMapper::map($bytes* bytes, $Class* targetType) {
	$load(JavadocExamples$ObjectMapper);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($bytes);
		return $of($nc($($nc(targetType)->getConstructor($$new($ClassArray, {$getClass($bytes)}))))->newInstance($$new($ObjectArray, {$of(bytes)})));
	} catch ($RuntimeException& x) {
		$throw(x);
	} catch ($Error& x) {
		$throw(x);
	} catch ($Exception& x) {
		$throwNew($UndeclaredThrowableException, x);
	}
	$shouldNotReachHere();
}

JavadocExamples$ObjectMapper::JavadocExamples$ObjectMapper() {
}

$Class* JavadocExamples$ObjectMapper::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$ObjectMapper, name, initialize, &_JavadocExamples$ObjectMapper_ClassInfo_, allocate$JavadocExamples$ObjectMapper);
	return class$;
}

$Class* JavadocExamples$ObjectMapper::class$ = nullptr;