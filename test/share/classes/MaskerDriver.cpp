#include <MaskerDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MaskerDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MaskerDriver::*)()>(&MaskerDriver::init$))},
	{}
};

$ClassInfo _MaskerDriver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MaskerDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MaskerDriver_MethodInfo_
};

$Object* allocate$MaskerDriver($Class* clazz) {
	return $of($alloc(MaskerDriver));
}

void MaskerDriver::init$() {
}

MaskerDriver::MaskerDriver() {
}

$Class* MaskerDriver::load$($String* name, bool initialize) {
	$loadClass(MaskerDriver, name, initialize, &_MaskerDriver_ClassInfo_, allocate$MaskerDriver);
	return class$;
}

$Class* MaskerDriver::class$ = nullptr;