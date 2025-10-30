#include <TckDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TckDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TckDriver::*)()>(&TckDriver::init$))},
	{}
};

$ClassInfo _TckDriver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TckDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TckDriver_MethodInfo_
};

$Object* allocate$TckDriver($Class* clazz) {
	return $of($alloc(TckDriver));
}

void TckDriver::init$() {
}

TckDriver::TckDriver() {
}

$Class* TckDriver::load$($String* name, bool initialize) {
	$loadClass(TckDriver, name, initialize, &_TckDriver_ClassInfo_, allocate$TckDriver);
	return class$;
}

$Class* TckDriver::class$ = nullptr;