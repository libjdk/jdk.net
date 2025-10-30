#include <HpackEncoderDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HpackEncoderDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HpackEncoderDriver::*)()>(&HpackEncoderDriver::init$))},
	{}
};

$ClassInfo _HpackEncoderDriver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HpackEncoderDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HpackEncoderDriver_MethodInfo_
};

$Object* allocate$HpackEncoderDriver($Class* clazz) {
	return $of($alloc(HpackEncoderDriver));
}

void HpackEncoderDriver::init$() {
}

HpackEncoderDriver::HpackEncoderDriver() {
}

$Class* HpackEncoderDriver::load$($String* name, bool initialize) {
	$loadClass(HpackEncoderDriver, name, initialize, &_HpackEncoderDriver_ClassInfo_, allocate$HpackEncoderDriver);
	return class$;
}

$Class* HpackEncoderDriver::class$ = nullptr;