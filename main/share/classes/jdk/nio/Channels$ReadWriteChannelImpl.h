#ifndef _jdk_nio_Channels$ReadWriteChannelImpl_h_
#define _jdk_nio_Channels$ReadWriteChannelImpl_h_
//$ class jdk.nio.Channels$ReadWriteChannelImpl
//$ extends java.nio.channels.spi.AbstractSelectableChannel
//$ implements sun.nio.ch.SelChImpl

#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <sun/nio/ch/SelChImpl.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace jdk {
	namespace nio {
		class Channels$SelectableChannelCloser;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class SelectionKeyImpl;
			class SelectorProviderImpl;
		}
	}
}

namespace jdk {
	namespace nio {

class Channels$ReadWriteChannelImpl : public ::java::nio::channels::spi::AbstractSelectableChannel, public ::sun::nio::ch::SelChImpl {
	$class(Channels$ReadWriteChannelImpl, $NO_CLASS_INIT, ::java::nio::channels::spi::AbstractSelectableChannel, ::sun::nio::ch::SelChImpl)
public:
	Channels$ReadWriteChannelImpl();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::SelectorProviderImpl* provider, ::java::io::FileDescriptor* fd, ::jdk::nio::Channels$SelectableChannelCloser* closer);
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	virtual void implCloseSelectableChannel() override;
	virtual void implConfigureBlocking(bool block) override;
	virtual bool isOpen() override;
	virtual void kill() override;
	using ::java::nio::channels::spi::AbstractSelectableChannel::register$;
	virtual $String* toString() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski);
	virtual int32_t validOps() override;
	::java::io::FileDescriptor* fd = nullptr;
	int32_t fdVal = 0;
	::jdk::nio::Channels$SelectableChannelCloser* closer = nullptr;
};

	} // nio
} // jdk

#endif // _jdk_nio_Channels$ReadWriteChannelImpl_h_