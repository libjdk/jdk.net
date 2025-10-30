#include <HpackBinaryTestDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HpackBinaryTestDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HpackBinaryTestDriver::*)()>(&HpackBinaryTestDriver::init$))},
	{}
};

$ClassInfo _HpackBinaryTestDriver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HpackBinaryTestDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HpackBinaryTestDriver_MethodInfo_
};

$Object* allocate$HpackBinaryTestDriver($Class* clazz) {
	return $of($alloc(HpackBinaryTestDriver));
}

void HpackBinaryTestDriver::init$() {
}

HpackBinaryTestDriver::HpackBinaryTestDriver() {
}

$Class* HpackBinaryTestDriver::load$($String* name, bool initialize) {
	$loadClass(HpackBinaryTestDriver, name, initialize, &_HpackBinaryTestDriver_ClassInfo_, allocate$HpackBinaryTestDriver);
	return class$;
}

$Class* HpackBinaryTestDriver::class$ = nullptr;