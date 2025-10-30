#include <jdk/nio/Channels$SelectableChannelCloser.h>

#include <java/nio/channels/SelectableChannel.h>
#include <jdk/nio/Channels.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $Channels = ::jdk::nio::Channels;

namespace jdk {
	namespace nio {

$MethodInfo _Channels$SelectableChannelCloser_MethodInfo_[] = {
	{"implCloseChannel", "(Ljava/nio/channels/SelectableChannel;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"implReleaseChannel", "(Ljava/nio/channels/SelectableChannel;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Channels$SelectableChannelCloser_InnerClassesInfo_[] = {
	{"jdk.nio.Channels$SelectableChannelCloser", "jdk.nio.Channels", "SelectableChannelCloser", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Channels$SelectableChannelCloser_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.nio.Channels$SelectableChannelCloser",
	nullptr,
	nullptr,
	nullptr,
	_Channels$SelectableChannelCloser_MethodInfo_,
	nullptr,
	nullptr,
	_Channels$SelectableChannelCloser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.Channels"
};

$Object* allocate$Channels$SelectableChannelCloser($Class* clazz) {
	return $of($alloc(Channels$SelectableChannelCloser));
}

$Class* Channels$SelectableChannelCloser::load$($String* name, bool initialize) {
	$loadClass(Channels$SelectableChannelCloser, name, initialize, &_Channels$SelectableChannelCloser_ClassInfo_, allocate$Channels$SelectableChannelCloser);
	return class$;
}

$Class* Channels$SelectableChannelCloser::class$ = nullptr;

	} // nio
} // jdk