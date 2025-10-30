#include <FlowAdaptersCompileOnly$BBPublisher.h>

#include <FlowAdaptersCompileOnly.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly = ::FlowAdaptersCompileOnly;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

$MethodInfo _FlowAdaptersCompileOnly$BBPublisher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FlowAdaptersCompileOnly$BBPublisher::*)()>(&FlowAdaptersCompileOnly$BBPublisher::init$))},
	{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$BBPublisher_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$BBPublisher", "FlowAdaptersCompileOnly", "BBPublisher", $STATIC},
	{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$BBPublisher_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$BBPublisher",
	"java.lang.Object",
	"java.util.concurrent.Flow$Publisher",
	nullptr,
	_FlowAdaptersCompileOnly$BBPublisher_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Publisher<Ljava/nio/ByteBuffer;>;",
	nullptr,
	_FlowAdaptersCompileOnly$BBPublisher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$BBPublisher($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$BBPublisher));
}

void FlowAdaptersCompileOnly$BBPublisher::init$() {
}

void FlowAdaptersCompileOnly$BBPublisher::subscribe($Flow$Subscriber* subscriber) {
}

FlowAdaptersCompileOnly$BBPublisher::FlowAdaptersCompileOnly$BBPublisher() {
}

$Class* FlowAdaptersCompileOnly$BBPublisher::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$BBPublisher, name, initialize, &_FlowAdaptersCompileOnly$BBPublisher_ClassInfo_, allocate$FlowAdaptersCompileOnly$BBPublisher);
	return class$;
}

$Class* FlowAdaptersCompileOnly$BBPublisher::class$ = nullptr;