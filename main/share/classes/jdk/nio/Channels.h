#ifndef _jdk_nio_Channels_h_
#define _jdk_nio_Channels_h_
//$ class jdk.nio.Channels
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SelectableChannel;
		}
	}
}
namespace jdk {
	namespace nio {
		class Channels$SelectableChannelCloser;
	}
}

namespace jdk {
	namespace nio {

class $export Channels : public ::java::lang::Object {
	$class(Channels, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Channels();
	void init$();
	static ::java::nio::channels::SelectableChannel* readWriteSelectableChannel(::java::io::FileDescriptor* fd, ::jdk::nio::Channels$SelectableChannelCloser* closer);
};

	} // nio
} // jdk

#endif // _jdk_nio_Channels_h_