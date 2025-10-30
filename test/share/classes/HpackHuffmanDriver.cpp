#include <HpackHuffmanDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HpackHuffmanDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HpackHuffmanDriver::*)()>(&HpackHuffmanDriver::init$))},
	{}
};

$ClassInfo _HpackHuffmanDriver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HpackHuffmanDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HpackHuffmanDriver_MethodInfo_
};

$Object* allocate$HpackHuffmanDriver($Class* clazz) {
	return $of($alloc(HpackHuffmanDriver));
}

void HpackHuffmanDriver::init$() {
}

HpackHuffmanDriver::HpackHuffmanDriver() {
}

$Class* HpackHuffmanDriver::load$($String* name, bool initialize) {
	$loadClass(HpackHuffmanDriver, name, initialize, &_HpackHuffmanDriver_ClassInfo_, allocate$HpackHuffmanDriver);
	return class$;
}

$Class* HpackHuffmanDriver::class$ = nullptr;