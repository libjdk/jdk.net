#include <HpackDecoderDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HpackDecoderDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HpackDecoderDriver::*)()>(&HpackDecoderDriver::init$))},
	{}
};

$ClassInfo _HpackDecoderDriver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HpackDecoderDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HpackDecoderDriver_MethodInfo_
};

$Object* allocate$HpackDecoderDriver($Class* clazz) {
	return $of($alloc(HpackDecoderDriver));
}

void HpackDecoderDriver::init$() {
}

HpackDecoderDriver::HpackDecoderDriver() {
}

$Class* HpackDecoderDriver::load$($String* name, bool initialize) {
	$loadClass(HpackDecoderDriver, name, initialize, &_HpackDecoderDriver_ClassInfo_, allocate$HpackDecoderDriver);
	return class$;
}

$Class* HpackDecoderDriver::class$ = nullptr;