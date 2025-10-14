#ifndef _jdk_nio_Channels$SelectableChannelCloser_h_
#define _jdk_nio_Channels$SelectableChannelCloser_h_
//$ interface jdk.nio.Channels$SelectableChannelCloser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace channels {
			class SelectableChannel;
		}
	}
}

namespace jdk {
	namespace nio {

class $import Channels$SelectableChannelCloser : public ::java::lang::Object {
	$interface(Channels$SelectableChannelCloser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void implCloseChannel(::java::nio::channels::SelectableChannel* sc) {}
	virtual void implReleaseChannel(::java::nio::channels::SelectableChannel* sc) {}
};

	} // nio
} // jdk

#endif // _jdk_nio_Channels$SelectableChannelCloser_h_