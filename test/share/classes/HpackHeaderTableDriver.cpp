#include <HpackHeaderTableDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HpackHeaderTableDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HpackHeaderTableDriver::*)()>(&HpackHeaderTableDriver::init$))},
	{}
};

$ClassInfo _HpackHeaderTableDriver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HpackHeaderTableDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HpackHeaderTableDriver_MethodInfo_
};

$Object* allocate$HpackHeaderTableDriver($Class* clazz) {
	return $of($alloc(HpackHeaderTableDriver));
}

void HpackHeaderTableDriver::init$() {
}

HpackHeaderTableDriver::HpackHeaderTableDriver() {
}

$Class* HpackHeaderTableDriver::load$($String* name, bool initialize) {
	$loadClass(HpackHeaderTableDriver, name, initialize, &_HpackHeaderTableDriver_ClassInfo_, allocate$HpackHeaderTableDriver);
	return class$;
}

$Class* HpackHeaderTableDriver::class$ = nullptr;