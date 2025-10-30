#include <FlowAdaptersCompileOnly$MBBPublisher.h>

#include <FlowAdaptersCompileOnly.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly = ::FlowAdaptersCompileOnly;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

$MethodInfo _FlowAdaptersCompileOnly$MBBPublisher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FlowAdaptersCompileOnly$MBBPublisher::*)()>(&FlowAdaptersCompileOnly$MBBPublisher::init$))},
	{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/MappedByteBuffer;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$MBBPublisher_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$MBBPublisher", "FlowAdaptersCompileOnly", "MBBPublisher", $STATIC},
	{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$MBBPublisher_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$MBBPublisher",
	"java.lang.Object",
	"java.util.concurrent.Flow$Publisher",
	nullptr,
	_FlowAdaptersCompileOnly$MBBPublisher_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Publisher<Ljava/nio/MappedByteBuffer;>;",
	nullptr,
	_FlowAdaptersCompileOnly$MBBPublisher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$MBBPublisher($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$MBBPublisher));
}

void FlowAdaptersCompileOnly$MBBPublisher::init$() {
}

void FlowAdaptersCompileOnly$MBBPublisher::subscribe($Flow$Subscriber* subscriber) {
}

FlowAdaptersCompileOnly$MBBPublisher::FlowAdaptersCompileOnly$MBBPublisher() {
}

$Class* FlowAdaptersCompileOnly$MBBPublisher::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$MBBPublisher, name, initialize, &_FlowAdaptersCompileOnly$MBBPublisher_ClassInfo_, allocate$FlowAdaptersCompileOnly$MBBPublisher);
	return class$;
}

$Class* FlowAdaptersCompileOnly$MBBPublisher::class$ = nullptr;