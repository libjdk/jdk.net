#include <jdk/nio/Channels$ReadWriteChannelImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jdk/nio/Channels$SelectableChannelCloser.h>
#include <jdk/nio/Channels.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/SelectorProviderImpl.h>
#include <jcpp.h>

#undef OP_READ
#undef OP_WRITE
#undef POLLERR
#undef POLLHUP
#undef POLLIN
#undef POLLOUT

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Channels = ::jdk::nio::Channels;
using $Channels$SelectableChannelCloser = ::jdk::nio::Channels$SelectableChannelCloser;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $Net = ::sun::nio::ch::Net;
using $SelChImpl = ::sun::nio::ch::SelChImpl;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $SelectorProviderImpl = ::sun::nio::ch::SelectorProviderImpl;

namespace jdk {
	namespace nio {

$FieldInfo _Channels$ReadWriteChannelImpl_FieldInfo_[] = {
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $FINAL, $field(Channels$ReadWriteChannelImpl, fd)},
	{"fdVal", "I", nullptr, $PRIVATE | $FINAL, $field(Channels$ReadWriteChannelImpl, fdVal)},
	{"closer", "Ljdk/nio/Channels$SelectableChannelCloser;", nullptr, $PRIVATE | $FINAL, $field(Channels$ReadWriteChannelImpl, closer)},
	{}
};

$MethodInfo _Channels$ReadWriteChannelImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/nio/ch/SelectorProviderImpl;Ljava/io/FileDescriptor;Ljdk/nio/Channels$SelectableChannelCloser;)V", nullptr, 0, $method(static_cast<void(Channels$ReadWriteChannelImpl::*)($SelectorProviderImpl*,$FileDescriptor*,$Channels$SelectableChannelCloser*)>(&Channels$ReadWriteChannelImpl::init$))},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC},
	{"getFDVal", "()I", nullptr, $PUBLIC},
	{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"implConfigureBlocking", "(Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"kill", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateAndSetReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateAndUpdateReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateInterestOps", "(I)I", nullptr, $PUBLIC},
	{"translateReadyOps", "(IILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Channels$ReadWriteChannelImpl::*)(int32_t,int32_t,$SelectionKeyImpl*)>(&Channels$ReadWriteChannelImpl::translateReadyOps))},
	{"validOps", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Channels$ReadWriteChannelImpl_InnerClassesInfo_[] = {
	{"jdk.nio.Channels$ReadWriteChannelImpl", "jdk.nio.Channels", "ReadWriteChannelImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Channels$ReadWriteChannelImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.nio.Channels$ReadWriteChannelImpl",
	"java.nio.channels.spi.AbstractSelectableChannel",
	"sun.nio.ch.SelChImpl",
	_Channels$ReadWriteChannelImpl_FieldInfo_,
	_Channels$ReadWriteChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Channels$ReadWriteChannelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.Channels"
};

$Object* allocate$Channels$ReadWriteChannelImpl($Class* clazz) {
	return $of($alloc(Channels$ReadWriteChannelImpl));
}

void Channels$ReadWriteChannelImpl::close() {
	this->$AbstractSelectableChannel::close();
}

bool Channels$ReadWriteChannelImpl::isOpen() {
	 return this->$AbstractSelectableChannel::isOpen();
}

int32_t Channels$ReadWriteChannelImpl::hashCode() {
	 return this->$AbstractSelectableChannel::hashCode();
}

bool Channels$ReadWriteChannelImpl::equals(Object$* arg0) {
	 return this->$AbstractSelectableChannel::equals(arg0);
}

$Object* Channels$ReadWriteChannelImpl::clone() {
	 return this->$AbstractSelectableChannel::clone();
}

$String* Channels$ReadWriteChannelImpl::toString() {
	 return this->$AbstractSelectableChannel::toString();
}

void Channels$ReadWriteChannelImpl::finalize() {
	this->$AbstractSelectableChannel::finalize();
}

void Channels$ReadWriteChannelImpl::init$($SelectorProviderImpl* provider, $FileDescriptor* fd, $Channels$SelectableChannelCloser* closer) {
	$AbstractSelectableChannel::init$(provider);
	$set(this, fd, fd);
	this->fdVal = $IOUtil::fdVal(fd);
	$set(this, closer, closer);
}

$FileDescriptor* Channels$ReadWriteChannelImpl::getFD() {
	return this->fd;
}

int32_t Channels$ReadWriteChannelImpl::getFDVal() {
	return this->fdVal;
}

int32_t Channels$ReadWriteChannelImpl::validOps() {
	return ($SelectionKey::OP_READ | $SelectionKey::OP_WRITE);
}

bool Channels$ReadWriteChannelImpl::translateReadyOps(int32_t ops, int32_t initialOps, $SelectionKeyImpl* ski) {
	int32_t intOps = $nc(ski)->nioInterestOps();
	int32_t oldOps = ski->nioReadyOps();
	int32_t newOps = initialOps;
	$init($Net);
	if (((int32_t)(ops & (uint32_t)($Net::POLLERR | $Net::POLLHUP))) != 0) {
		newOps = intOps;
		ski->nioReadyOps(newOps);
		return ((int32_t)(newOps & (uint32_t)~oldOps)) != 0;
	}
	if ((((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLIN)) != 0) && (((int32_t)(intOps & (uint32_t)$SelectionKey::OP_READ)) != 0)) {
		newOps |= $SelectionKey::OP_READ;
	}
	if ((((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLOUT)) != 0) && (((int32_t)(intOps & (uint32_t)$SelectionKey::OP_WRITE)) != 0)) {
		newOps |= $SelectionKey::OP_WRITE;
	}
	ski->nioReadyOps(newOps);
	return ((int32_t)(newOps & (uint32_t)~oldOps)) != 0;
}

bool Channels$ReadWriteChannelImpl::translateAndUpdateReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, $nc(ski)->nioReadyOps(), ski);
}

bool Channels$ReadWriteChannelImpl::translateAndSetReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, 0, ski);
}

int32_t Channels$ReadWriteChannelImpl::translateInterestOps(int32_t ops) {
	int32_t newOps = 0;
	if (((int32_t)(ops & (uint32_t)$SelectionKey::OP_READ)) != 0) {
		$init($Net);
		newOps |= $Net::POLLIN;
	}
	if (((int32_t)(ops & (uint32_t)$SelectionKey::OP_WRITE)) != 0) {
		$init($Net);
		newOps |= $Net::POLLOUT;
	}
	return newOps;
}

void Channels$ReadWriteChannelImpl::implConfigureBlocking(bool block) {
	$IOUtil::configureBlocking(this->fd, block);
}

void Channels$ReadWriteChannelImpl::implCloseSelectableChannel() {
	$nc(this->closer)->implCloseChannel(this);
}

void Channels$ReadWriteChannelImpl::kill() {
	$nc(this->closer)->implReleaseChannel(this);
}

Channels$ReadWriteChannelImpl::Channels$ReadWriteChannelImpl() {
}

$Class* Channels$ReadWriteChannelImpl::load$($String* name, bool initialize) {
	$loadClass(Channels$ReadWriteChannelImpl, name, initialize, &_Channels$ReadWriteChannelImpl_ClassInfo_, allocate$Channels$ReadWriteChannelImpl);
	return class$;
}

$Class* Channels$ReadWriteChannelImpl::class$ = nullptr;

	} // nio
} // jdk