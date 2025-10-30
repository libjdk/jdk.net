#include <TestKit$ThrowingProcedure.h>

#include <TestKit.h>
#include <jcpp.h>

using $TestKit = ::TestKit;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestKit$ThrowingProcedure_MethodInfo_[] = {
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _TestKit$ThrowingProcedure_InnerClassesInfo_[] = {
	{"TestKit$ThrowingProcedure", "TestKit", "ThrowingProcedure", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestKit$ThrowingProcedure_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"TestKit$ThrowingProcedure",
	nullptr,
	nullptr,
	nullptr,
	_TestKit$ThrowingProcedure_MethodInfo_,
	nullptr,
	nullptr,
	_TestKit$ThrowingProcedure_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestKit"
};

$Object* allocate$TestKit$ThrowingProcedure($Class* clazz) {
	return $of($alloc(TestKit$ThrowingProcedure));
}

$Class* TestKit$ThrowingProcedure::load$($String* name, bool initialize) {
	$loadClass(TestKit$ThrowingProcedure, name, initialize, &_TestKit$ThrowingProcedure_ClassInfo_, allocate$TestKit$ThrowingProcedure);
	return class$;
}

$Class* TestKit$ThrowingProcedure::class$ = nullptr;