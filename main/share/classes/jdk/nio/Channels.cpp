#include <jdk/nio/Channels.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/Objects.h>
#include <jdk/nio/Channels$ReadWriteChannelImpl.h>
#include <jdk/nio/Channels$SelectableChannelCloser.h>
#include <sun/nio/ch/SelectorProviderImpl.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Objects = ::java::util::Objects;
using $Channels$ReadWriteChannelImpl = ::jdk::nio::Channels$ReadWriteChannelImpl;
using $Channels$SelectableChannelCloser = ::jdk::nio::Channels$SelectableChannelCloser;
using $SelectorProviderImpl = ::sun::nio::ch::SelectorProviderImpl;

namespace jdk {
	namespace nio {

$MethodInfo _Channels_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Channels::*)()>(&Channels::init$))},
	{"readWriteSelectableChannel", "(Ljava/io/FileDescriptor;Ljdk/nio/Channels$SelectableChannelCloser;)Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SelectableChannel*(*)($FileDescriptor*,$Channels$SelectableChannelCloser*)>(&Channels::readWriteSelectableChannel))},
	{}
};

$InnerClassInfo _Channels_InnerClassesInfo_[] = {
	{"jdk.nio.Channels$ReadWriteChannelImpl", "jdk.nio.Channels", "ReadWriteChannelImpl", $PRIVATE | $STATIC | $FINAL},
	{"jdk.nio.Channels$SelectableChannelCloser", "jdk.nio.Channels", "SelectableChannelCloser", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Channels_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.nio.Channels",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Channels_MethodInfo_,
	nullptr,
	nullptr,
	_Channels_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.nio.Channels$ReadWriteChannelImpl,jdk.nio.Channels$SelectableChannelCloser"
};

$Object* allocate$Channels($Class* clazz) {
	return $of($alloc(Channels));
}

void Channels::init$() {
}

$SelectableChannel* Channels::readWriteSelectableChannel($FileDescriptor* fd, $Channels$SelectableChannelCloser* closer) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(closer);
	if (!$nc(fd)->valid()) {
		$throwNew($IllegalArgumentException, "file descriptor is not valid"_s);
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkRead(fd);
		sm->checkWrite(fd);
	}
	$var($SelectorProvider, provider, $SelectorProvider::provider());
	if (!($instanceOf($SelectorProviderImpl, provider))) {
		$throwNew($UnsupportedOperationException, "custom SelectorProvider"_s);
	}
	return $new($Channels$ReadWriteChannelImpl, $cast($SelectorProviderImpl, provider), fd, closer);
}

Channels::Channels() {
}

$Class* Channels::load$($String* name, bool initialize) {
	$loadClass(Channels, name, initialize, &_Channels_ClassInfo_, allocate$Channels);
	return class$;
}

$Class* Channels::class$ = nullptr;

	} // nio
} // jdk