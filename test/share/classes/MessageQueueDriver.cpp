#include <MessageQueueDriver.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MessageQueueDriver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MessageQueueDriver::*)()>(&MessageQueueDriver::init$))},
	{}
};

$ClassInfo _MessageQueueDriver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MessageQueueDriver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MessageQueueDriver_MethodInfo_
};

$Object* allocate$MessageQueueDriver($Class* clazz) {
	return $of($alloc(MessageQueueDriver));
}

void MessageQueueDriver::init$() {
}

MessageQueueDriver::MessageQueueDriver() {
}

$Class* MessageQueueDriver::load$($String* name, bool initialize) {
	$loadClass(MessageQueueDriver, name, initialize, &_MessageQueueDriver_ClassInfo_, allocate$MessageQueueDriver);
	return class$;
}

$Class* MessageQueueDriver::class$ = nullptr;