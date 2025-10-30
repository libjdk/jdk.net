#include <ProxyServer.h>

#include <ProxyServer$1.h>
#include <ProxyServer$Connection.h>
#include <ProxyServer$Credentials.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <jcpp.h>

#undef IS_WINDOWS
#undef ROOT
#undef SO_REUSEADDR

using $ProxyServer$1 = ::ProxyServer$1;
using $ProxyServer$Connection = ::ProxyServer$Connection;
using $ProxyServer$Credentials = ::ProxyServer$Credentials;
using $Closeable = ::java::io::Closeable;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;

class ProxyServer$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(ProxyServer$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(ProxyServer::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProxyServer$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ProxyServer$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer$$Lambda$lambda$static$0::*)()>(&ProxyServer$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProxyServer$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProxyServer$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* ProxyServer$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(ProxyServer$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProxyServer$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _ProxyServer_FieldInfo_[] = {
	{"IS_WINDOWS", "Z", nullptr, $STATIC | $FINAL, $staticField(ProxyServer, IS_WINDOWS)},
	{"listener", "Ljava/nio/channels/ServerSocketChannel;", nullptr, 0, $field(ProxyServer, listener)},
	{"port", "I", nullptr, 0, $field(ProxyServer, port)},
	{"debug", "Z", nullptr, $VOLATILE, $field(ProxyServer, debug)},
	{"credentials", "LProxyServer$Credentials;", nullptr, $PRIVATE | $FINAL, $field(ProxyServer, credentials)},
	{"connections", "Ljava/util/concurrent/CopyOnWriteArrayList;", "Ljava/util/concurrent/CopyOnWriteArrayList<LProxyServer$Connection;>;", $FINAL, $field(ProxyServer, connections)},
	{"done", "Z", nullptr, $VOLATILE, $field(ProxyServer, done)},
	{}
};

$MethodInfo _ProxyServer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer::*)($Integer*)>(&ProxyServer::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer::*)($Integer*,$Boolean*,$String*,$String*)>(&ProxyServer::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Integer;Ljava/lang/Boolean;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer::*)($Integer*,$Boolean*)>(&ProxyServer::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Integer;Ljava/lang/Boolean;LProxyServer$Credentials;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer::*)($Integer*,$Boolean*,$ProxyServer$Credentials*)>(&ProxyServer::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer::*)($String*)>(&ProxyServer::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"execute", "()V", nullptr, $PUBLIC},
	{"getPort", "()I", nullptr, $PUBLIC},
	{"getProxyAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isWindows", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&ProxyServer::isWindows))},
	{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&ProxyServer::lambda$static$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ProxyServer::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProxyServer_InnerClassesInfo_[] = {
	{"ProxyServer$Connection", "ProxyServer", "Connection", 0},
	{"ProxyServer$Credentials", "ProxyServer", "Credentials", $PRIVATE | $STATIC},
	{"ProxyServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProxyServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ProxyServer",
	"java.lang.Thread",
	"java.io.Closeable",
	_ProxyServer_FieldInfo_,
	_ProxyServer_MethodInfo_,
	nullptr,
	nullptr,
	_ProxyServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ProxyServer$Connection,ProxyServer$Credentials,ProxyServer$1"
};

$Object* allocate$ProxyServer($Class* clazz) {
	return $of($alloc(ProxyServer));
}

$Object* ProxyServer::clone() {
	 return this->$Thread::clone();
}

$String* ProxyServer::toString() {
	 return this->$Thread::toString();
}

int32_t ProxyServer::hashCode() {
	 return this->$Thread::hashCode();
}

bool ProxyServer::equals(Object$* arg0) {
	 return this->$Thread::equals(arg0);
}

void ProxyServer::finalize() {
	this->$Thread::finalize();
}

bool ProxyServer::IS_WINDOWS = false;

bool ProxyServer::isWindows() {
	$init(ProxyServer);
	return ProxyServer::IS_WINDOWS;
}

void ProxyServer::init$($Integer* port) {
	ProxyServer::init$(port, $($Boolean::valueOf(false)));
}

void ProxyServer::init$($Integer* port, $Boolean* debug, $String* username, $String* password) {
	ProxyServer::init$(port, debug, $$new($ProxyServer$Credentials, username, password));
}

void ProxyServer::init$($Integer* port, $Boolean* debug) {
	ProxyServer::init$(port, debug, nullptr);
}

void ProxyServer::init$($Integer* port, $Boolean* debug, $ProxyServer$Credentials* credentials) {
	$useLocalCurrentObjectStackCache();
	$Thread::init$();
	this->debug = $nc(debug)->booleanValue();
	$set(this, listener, $ServerSocketChannel::open());
	$init($StandardSocketOptions);
	$nc(this->listener)->setOption($StandardSocketOptions::SO_REUSEADDR, $($Boolean::valueOf(false)));
	$var($InetAddress, var$0, $InetAddress::getLoopbackAddress());
	$nc(this->listener)->bind($$new($InetSocketAddress, var$0, $nc(port)->intValue()));
	this->port = $nc(($cast($InetSocketAddress, $($nc(this->listener)->getLocalAddress()))))->getPort();
	$set(this, credentials, credentials);
	setName("ProxyListener"_s);
	setDaemon(true);
	$set(this, connections, $new($CopyOnWriteArrayList));
	start();
}

void ProxyServer::init$($String* s) {
	$Thread::init$();
	$set(this, credentials, nullptr);
	$set(this, connections, $new($CopyOnWriteArrayList));
}

int32_t ProxyServer::getPort() {
	return this->port;
}

$InetSocketAddress* ProxyServer::getProxyAddress() {
	return $cast($InetSocketAddress, $nc(this->listener)->getLocalAddress());
}

void ProxyServer::close() {
	$useLocalCurrentObjectStackCache();
	if (this->debug) {
		$nc($System::out)->println("Proxy: closing server"_s);
	}
	this->done = true;
	$nc(this->listener)->close();
	{
		$var($Iterator, i$, $nc(this->connections)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ProxyServer$Connection, c, $cast($ProxyServer$Connection, i$->next()));
			{
				$nc(c)->close();
				c->awaitCompletion();
			}
		}
	}
}

void ProxyServer::run() {
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		execute();
	} else {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ProxyServer$1, this)));
	}
}

void ProxyServer::execute() {
	$useLocalCurrentObjectStackCache();
	int32_t id = 0;
	try {
		while (!this->done) {
			$var($SocketChannel, s, $nc(this->listener)->accept());
			++id;
			$var($ProxyServer$Connection, c, $new($ProxyServer$Connection, this, s, id));
			if (this->debug) {
				$nc($System::out)->println($$str({"Proxy: accepted new connection: "_s, c}));
			}
			$nc(this->connections)->add(c);
			c->init();
		}
	} catch ($Throwable& e) {
		if (this->debug && !this->done) {
			$nc($System::out)->println($$str({"Proxy: Fatal error, listener got "_s, e}));
			e->printStackTrace();
		}
	}
}

void ProxyServer::main($StringArray* args) {
	$init(ProxyServer);
	$useLocalCurrentObjectStackCache();
	int32_t port = $Integer::parseInt($nc(args)->get(0));
	bool debug = $nc(args)->length > 1 && $nc(args->get(1))->equals("-debug"_s);
	$nc($System::out)->println($$str({"Debugging : "_s, $$str(debug)}));
	$var($Integer, var$0, $Integer::valueOf(port));
	$var(ProxyServer, ps, $new(ProxyServer, var$0, $($Boolean::valueOf(debug))));
	$nc($System::out)->println($$str({"Proxy server listening on port "_s, $$str(ps->getPort())}));
	while (true) {
		$Thread::sleep(5000);
	}
}

$String* ProxyServer::lambda$static$0() {
	$init(ProxyServer);
	return $System::getProperty("os.name"_s, "unknown"_s);
}

void clinit$ProxyServer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($PrivilegedAction, action, static_cast<$PrivilegedAction*>($new(ProxyServer$$Lambda$lambda$static$0)));
		$var($String, osName, $cast($String, $AccessController::doPrivileged(action)));
		$init($Locale);
		ProxyServer::IS_WINDOWS = $($nc(osName)->toLowerCase($Locale::ROOT))->startsWith("win"_s);
	}
}

ProxyServer::ProxyServer() {
}

$Class* ProxyServer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ProxyServer$$Lambda$lambda$static$0::classInfo$.name)) {
			return ProxyServer$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(ProxyServer, name, initialize, &_ProxyServer_ClassInfo_, clinit$ProxyServer, allocate$ProxyServer);
	return class$;
}

$Class* ProxyServer::class$ = nullptr;