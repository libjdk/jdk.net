#include <LineAdaptersCompileOnly$StringSubscriberX.h>

#include <LineAdaptersCompileOnly$StringSubscriber.h>
#include <LineAdaptersCompileOnly.h>
#include <jcpp.h>

using $LineAdaptersCompileOnly = ::LineAdaptersCompileOnly;
using $LineAdaptersCompileOnly$StringSubscriber = ::LineAdaptersCompileOnly$StringSubscriber;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LineAdaptersCompileOnly$StringSubscriberX_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LineAdaptersCompileOnly$StringSubscriberX::*)()>(&LineAdaptersCompileOnly$StringSubscriberX::init$))},
	{"getIntegerX", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _LineAdaptersCompileOnly$StringSubscriberX_InnerClassesInfo_[] = {
	{"LineAdaptersCompileOnly$StringSubscriberX", "LineAdaptersCompileOnly", "StringSubscriberX", $STATIC},
	{"LineAdaptersCompileOnly$StringSubscriber", "LineAdaptersCompileOnly", "StringSubscriber", $STATIC},
	{}
};

$ClassInfo _LineAdaptersCompileOnly$StringSubscriberX_ClassInfo_ = {
	$ACC_SUPER,
	"LineAdaptersCompileOnly$StringSubscriberX",
	"LineAdaptersCompileOnly$StringSubscriber",
	nullptr,
	nullptr,
	_LineAdaptersCompileOnly$StringSubscriberX_MethodInfo_,
	nullptr,
	nullptr,
	_LineAdaptersCompileOnly$StringSubscriberX_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LineAdaptersCompileOnly"
};

$Object* allocate$LineAdaptersCompileOnly$StringSubscriberX($Class* clazz) {
	return $of($alloc(LineAdaptersCompileOnly$StringSubscriberX));
}

void LineAdaptersCompileOnly$StringSubscriberX::init$() {
	$LineAdaptersCompileOnly$StringSubscriber::init$();
}

int32_t LineAdaptersCompileOnly$StringSubscriberX::getIntegerX() {
	return 5;
}

LineAdaptersCompileOnly$StringSubscriberX::LineAdaptersCompileOnly$StringSubscriberX() {
}

$Class* LineAdaptersCompileOnly$StringSubscriberX::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$StringSubscriberX, name, initialize, &_LineAdaptersCompileOnly$StringSubscriberX_ClassInfo_, allocate$LineAdaptersCompileOnly$StringSubscriberX);
	return class$;
}

$Class* LineAdaptersCompileOnly$StringSubscriberX::class$ = nullptr;