#include <HpackCircularBufferDriver.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HpackCircularBufferDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HpackCircularBufferDriver::*)()>(&HpackCircularBufferDriver::init$))},
	{}
};

$ClassInfo _HpackCircularBufferDriver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HpackCircularBufferDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HpackCircularBufferDriver_MethodInfo_
};

$Object* allocate$HpackCircularBufferDriver($Class* clazz) {
	return $of($alloc(HpackCircularBufferDriver));
}

void HpackCircularBufferDriver::init$() {
}

HpackCircularBufferDriver::HpackCircularBufferDriver() {
}

$Class* HpackCircularBufferDriver::load$($String* name, bool initialize) {
	$loadClass(HpackCircularBufferDriver, name, initialize, &_HpackCircularBufferDriver_ClassInfo_, allocate$HpackCircularBufferDriver);
	return class$;
}

$Class* HpackCircularBufferDriver::class$ = nullptr;