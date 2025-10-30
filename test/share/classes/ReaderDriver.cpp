#include <ReaderDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReaderDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReaderDriver::*)()>(&ReaderDriver::init$))},
	{}
};

$ClassInfo _ReaderDriver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"ReaderDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReaderDriver_MethodInfo_
};

$Object* allocate$ReaderDriver($Class* clazz) {
	return $of($alloc(ReaderDriver));
}

void ReaderDriver::init$() {
}

ReaderDriver::ReaderDriver() {
}

$Class* ReaderDriver::load$($String* name, bool initialize) {
	$loadClass(ReaderDriver, name, initialize, &_ReaderDriver_ClassInfo_, allocate$ReaderDriver);
	return class$;
}

$Class* ReaderDriver::class$ = nullptr;