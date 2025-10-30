#include <HeaderWriterDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeaderWriterDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeaderWriterDriver::*)()>(&HeaderWriterDriver::init$))},
	{}
};

$ClassInfo _HeaderWriterDriver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"HeaderWriterDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeaderWriterDriver_MethodInfo_
};

$Object* allocate$HeaderWriterDriver($Class* clazz) {
	return $of($alloc(HeaderWriterDriver));
}

void HeaderWriterDriver::init$() {
}

HeaderWriterDriver::HeaderWriterDriver() {
}

$Class* HeaderWriterDriver::load$($String* name, bool initialize) {
	$loadClass(HeaderWriterDriver, name, initialize, &_HeaderWriterDriver_ClassInfo_, allocate$HeaderWriterDriver);
	return class$;
}

$Class* HeaderWriterDriver::class$ = nullptr;