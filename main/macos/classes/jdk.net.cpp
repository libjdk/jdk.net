#include <jdk.net.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <jdk/net/ExtendedSocketOptions.h>
#include <jdk/net/ExtendedSocketOptions$1.h>
#include <jdk/net/ExtendedSocketOptions$ExtSocketOption.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions$1.h>
#include <jdk/net/MacOSXSocketOptions.h>
#include <jdk/net/NetworkPermission.h>
#include <jdk/net/Sockets.h>
#include <jdk/net/Sockets$KeepAliveOptions.h>
#include <jdk/net/Sockets$QuickAck.h>
#include <jdk/net/UnixDomainPrincipal.h>
#include <jdk/nio/Channels.h>
#include <jdk/nio/Channels$ReadWriteChannelImpl.h>
#include <jdk/nio/Channels$SelectableChannelCloser.h>


#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _jdk$net_classes_[] = {
	$classEntry("jdk.net.ExtendedSocketOptions", ::jdk::net::ExtendedSocketOptions),
	$classEntry("jdk.net.ExtendedSocketOptions$1", ::jdk::net::ExtendedSocketOptions$1),
	$classEntry("jdk.net.ExtendedSocketOptions$ExtSocketOption", ::jdk::net::ExtendedSocketOptions$ExtSocketOption),
	$classEntry("jdk.net.ExtendedSocketOptions$PlatformSocketOptions", ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions),
	$classEntry("jdk.net.ExtendedSocketOptions$PlatformSocketOptions$1", ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions$1),
	$classEntry("jdk.net.MacOSXSocketOptions", ::jdk::net::MacOSXSocketOptions),
	$classEntry("jdk.net.NetworkPermission", ::jdk::net::NetworkPermission),
	$classEntry("jdk.net.Sockets", ::jdk::net::Sockets),
	$classEntry("jdk.net.Sockets$KeepAliveOptions", ::jdk::net::Sockets$KeepAliveOptions),
	$classEntry("jdk.net.Sockets$QuickAck", ::jdk::net::Sockets$QuickAck),
	$classEntry("jdk.net.UnixDomainPrincipal", ::jdk::net::UnixDomainPrincipal),
	$classEntry("jdk.nio.Channels", ::jdk::nio::Channels),
	$classEntry("jdk.nio.Channels$ReadWriteChannelImpl", ::jdk::nio::Channels$ReadWriteChannelImpl),
	$classEntry("jdk.nio.Channels$SelectableChannelCloser", ::jdk::nio::Channels$SelectableChannelCloser)
};

const char* _jdk$net_packages_[] = {
	"jdk.net",
	"jdk.nio"
};

void jdk$net$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_jdk$net_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$net_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void jdk$net$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$net$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$net$GetPackages() {
	int32_t length = $lengthOf(_jdk$net_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_jdk$net_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* jdk$net$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_jdk$net_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_jdk$net_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* jdk$net$GetResource($String* name) {
	return nullptr;
}

void jdk$net::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.net", "17.35", "",
		&_jdk$net_ModuleInfo_,
		jdk$net$LibEventAction,
		jdk$net$GetPackages,
		jdk$net$GetClassEntry,
		jdk$net$GetResource
	};
	$System::addLibrary(&lib);
}