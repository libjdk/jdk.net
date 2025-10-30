#include <TestKit$ThrowingFunction.h>

#include <TestKit.h>
#include <jcpp.h>

using $TestKit = ::TestKit;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestKit$ThrowingFunction_MethodInfo_[] = {
	{"run", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _TestKit$ThrowingFunction_InnerClassesInfo_[] = {
	{"TestKit$ThrowingFunction", "TestKit", "ThrowingFunction", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestKit$ThrowingFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"TestKit$ThrowingFunction",
	nullptr,
	nullptr,
	nullptr,
	_TestKit$ThrowingFunction_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestKit$ThrowingFunction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestKit"
};

$Object* allocate$TestKit$ThrowingFunction($Class* clazz) {
	return $of($alloc(TestKit$ThrowingFunction));
}

$Class* TestKit$ThrowingFunction::load$($String* name, bool initialize) {
	$loadClass(TestKit$ThrowingFunction, name, initialize, &_TestKit$ThrowingFunction_ClassInfo_, allocate$TestKit$ThrowingFunction);
	return class$;
}

$Class* TestKit$ThrowingFunction::class$ = nullptr;