#include <DummySecureWebSocketServer$WebServerSocketChannel.h>

#include <DummySecureWebSocketServer$WebServerSocketChannel$Accepter.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel$Addressable.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel$Binder.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel$Closer.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel$Config.h>
#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <DummySecureWebSocketServer.h>
#include <java/io/Closeable.h>
#include <java/io/Serializable.h>
#include <java/lang/AutoCloseable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <jcpp.h>

using $DummySecureWebSocketServer = ::DummySecureWebSocketServer;
using $DummySecureWebSocketServer$WebServerSocketChannel$Accepter = ::DummySecureWebSocketServer$WebServerSocketChannel$Accepter;
using $DummySecureWebSocketServer$WebServerSocketChannel$Addressable = ::DummySecureWebSocketServer$WebServerSocketChannel$Addressable;
using $DummySecureWebSocketServer$WebServerSocketChannel$Binder = ::DummySecureWebSocketServer$WebServerSocketChannel$Binder;
using $DummySecureWebSocketServer$WebServerSocketChannel$Closer = ::DummySecureWebSocketServer$WebServerSocketChannel$Closer;
using $DummySecureWebSocketServer$WebServerSocketChannel$Config = ::DummySecureWebSocketServer$WebServerSocketChannel$Config;
using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $Closeable = ::java::io::Closeable;
using $Serializable = ::java::io::Serializable;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0 : public $DummySecureWebSocketServer$WebServerSocketChannel$Accepter {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Accepter)
public:
	void init$($ServerSocket* ss) {
		$set(this, ss, ss);
	}
	virtual $DummySecureWebSocketServer$WebSocketChannel* accept() override {
		 return DummySecureWebSocketServer$WebServerSocketChannel::lambda$of$0(ss);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0>());
	}
	$ServerSocket* ss = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::fieldInfos[2] = {
	{"ss", "Ljava/net/ServerSocket;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, ss)},
	{}
};
$MethodInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::methodInfos[3] = {
	{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::*)($ServerSocket*)>(&DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::init$))},
	{"accept", "()LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0",
	"java.lang.Object",
	"DummySecureWebSocketServer$WebServerSocketChannel$Accepter",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::class$ = nullptr;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1 : public $DummySecureWebSocketServer$WebServerSocketChannel$Binder {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Binder)
public:
	void init$($ServerSocket* inst) {
		$set(this, inst$, inst);
	}
	virtual void bind($SocketAddress* arg0) override {
		$nc(inst$)->bind(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1>());
	}
	$ServerSocket* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, inst$)},
	{}
};
$MethodInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::methodInfos[3] = {
	{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::*)($ServerSocket*)>(&DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::init$))},
	{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1",
	"java.lang.Object",
	"DummySecureWebSocketServer$WebServerSocketChannel$Binder",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::class$ = nullptr;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2 : public $DummySecureWebSocketServer$WebServerSocketChannel$Addressable {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Addressable)
public:
	void init$($ServerSocket* inst) {
		$set(this, inst$, inst);
	}
	virtual $SocketAddress* getLocalAddress() override {
		 return $nc(inst$)->getLocalSocketAddress();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2>());
	}
	$ServerSocket* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, inst$)},
	{}
};
$MethodInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::methodInfos[3] = {
	{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::*)($ServerSocket*)>(&DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::init$))},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2",
	"java.lang.Object",
	"DummySecureWebSocketServer$WebServerSocketChannel$Addressable",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::class$ = nullptr;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3 : public $DummySecureWebSocketServer$WebServerSocketChannel$Config {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Config)
public:
	void init$($ServerSocket* inst) {
		$set(this, inst$, inst);
	}
	virtual void setOption($SocketOption* arg0, Object$* arg1) override {
		$nc(inst$)->setOption(arg0, arg1);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3>());
	}
	$ServerSocket* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, inst$)},
	{}
};
$MethodInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::methodInfos[3] = {
	{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::*)($ServerSocket*)>(&DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::init$))},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3",
	"java.lang.Object",
	"DummySecureWebSocketServer$WebServerSocketChannel$Config",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::class$ = nullptr;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4 : public $DummySecureWebSocketServer$WebServerSocketChannel$Closer {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Closer)
public:
	void init$($ServerSocket* inst) {
		$set(this, inst$, inst);
	}
	virtual void close() override {
		$nc(inst$)->close();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4>());
	}
	$ServerSocket* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, inst$)},
	{}
};
$MethodInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::methodInfos[3] = {
	{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::*)($ServerSocket*)>(&DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4",
	"java.lang.Object",
	"DummySecureWebSocketServer$WebServerSocketChannel$Closer",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::class$ = nullptr;

$FieldInfo _DummySecureWebSocketServer$WebServerSocketChannel_FieldInfo_[] = {
	{"server", "Ljava/lang/AutoCloseable;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, server)},
	{"accepter", "LDummySecureWebSocketServer$WebServerSocketChannel$Accepter;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, accepter)},
	{"binder", "LDummySecureWebSocketServer$WebServerSocketChannel$Binder;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, binder)},
	{"address", "LDummySecureWebSocketServer$WebServerSocketChannel$Addressable;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, address)},
	{"config", "LDummySecureWebSocketServer$WebServerSocketChannel$Config;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, config)},
	{"closer", "LDummySecureWebSocketServer$WebServerSocketChannel$Closer;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, closer)},
	{}
};

$MethodInfo _DummySecureWebSocketServer$WebServerSocketChannel_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/AutoCloseable;LDummySecureWebSocketServer$WebServerSocketChannel$Accepter;LDummySecureWebSocketServer$WebServerSocketChannel$Binder;LDummySecureWebSocketServer$WebServerSocketChannel$Addressable;LDummySecureWebSocketServer$WebServerSocketChannel$Config;LDummySecureWebSocketServer$WebServerSocketChannel$Closer;)V", nullptr, 0, $method(static_cast<void(DummySecureWebSocketServer$WebServerSocketChannel::*)($AutoCloseable*,$DummySecureWebSocketServer$WebServerSocketChannel$Accepter*,$DummySecureWebSocketServer$WebServerSocketChannel$Binder*,$DummySecureWebSocketServer$WebServerSocketChannel$Addressable*,$DummySecureWebSocketServer$WebServerSocketChannel$Config*,$DummySecureWebSocketServer$WebServerSocketChannel$Closer*)>(&DummySecureWebSocketServer$WebServerSocketChannel::init$))},
	{"accept", "()LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"lambda$of$0", "(Ljava/net/ServerSocket;)LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DummySecureWebSocketServer$WebSocketChannel*(*)($ServerSocket*)>(&DummySecureWebSocketServer$WebServerSocketChannel::lambda$of$0)), "java.io.IOException"},
	{"of", "(Ljava/net/ServerSocket;)LDummySecureWebSocketServer$WebServerSocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DummySecureWebSocketServer$WebServerSocketChannel*(*)($ServerSocket*)>(&DummySecureWebSocketServer$WebServerSocketChannel::of))},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebServerSocketChannel_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Addressable", "DummySecureWebSocketServer$WebServerSocketChannel", "Addressable", $STATIC | $INTERFACE | $ABSTRACT},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Closer", "DummySecureWebSocketServer$WebServerSocketChannel", "Closer", $STATIC | $INTERFACE | $ABSTRACT},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Config", "DummySecureWebSocketServer$WebServerSocketChannel", "Config", $STATIC | $INTERFACE | $ABSTRACT},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Binder", "DummySecureWebSocketServer$WebServerSocketChannel", "Binder", $STATIC | $INTERFACE | $ABSTRACT},
	{"DummySecureWebSocketServer$WebServerSocketChannel$Accepter", "DummySecureWebSocketServer$WebServerSocketChannel", "Accepter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebServerSocketChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DummySecureWebSocketServer$WebServerSocketChannel",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_DummySecureWebSocketServer$WebServerSocketChannel_FieldInfo_,
	_DummySecureWebSocketServer$WebServerSocketChannel_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebServerSocketChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebServerSocketChannel($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebServerSocketChannel));
}

void DummySecureWebSocketServer$WebServerSocketChannel::init$($AutoCloseable* server, $DummySecureWebSocketServer$WebServerSocketChannel$Accepter* accepter, $DummySecureWebSocketServer$WebServerSocketChannel$Binder* binder, $DummySecureWebSocketServer$WebServerSocketChannel$Addressable* address, $DummySecureWebSocketServer$WebServerSocketChannel$Config* config, $DummySecureWebSocketServer$WebServerSocketChannel$Closer* closer) {
	$set(this, server, server);
	$set(this, accepter, accepter);
	$set(this, binder, binder);
	$set(this, address, address);
	$set(this, config, config);
	$set(this, closer, closer);
}

void DummySecureWebSocketServer$WebServerSocketChannel::close() {
	$nc(this->closer)->close();
}

$String* DummySecureWebSocketServer$WebServerSocketChannel::toString() {
	return $nc($of(this->server))->toString();
}

$DummySecureWebSocketServer$WebSocketChannel* DummySecureWebSocketServer$WebServerSocketChannel::accept() {
	return $nc(this->accepter)->accept();
}

void DummySecureWebSocketServer$WebServerSocketChannel::bind($SocketAddress* address) {
	$nc(this->binder)->bind(address);
}

void DummySecureWebSocketServer$WebServerSocketChannel::setOption($SocketOption* option, Object$* value) {
	$nc(this->config)->setOption(option, value);
}

$SocketAddress* DummySecureWebSocketServer$WebServerSocketChannel::getLocalAddress() {
	return $nc(this->address)->getLocalAddress();
}

DummySecureWebSocketServer$WebServerSocketChannel* DummySecureWebSocketServer$WebServerSocketChannel::of($ServerSocket* ss) {
	$init(DummySecureWebSocketServer$WebServerSocketChannel);
	$useLocalCurrentObjectStackCache();
	$var($DummySecureWebSocketServer$WebServerSocketChannel$Accepter, a, static_cast<$DummySecureWebSocketServer$WebServerSocketChannel$Accepter*>($new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, ss)));
	$var($AutoCloseable, var$0, static_cast<$AutoCloseable*>(ss));
	$var($DummySecureWebSocketServer$WebServerSocketChannel$Accepter, var$1, a);
	$var($DummySecureWebSocketServer$WebServerSocketChannel$Binder, var$2, static_cast<$DummySecureWebSocketServer$WebServerSocketChannel$Binder*>($new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, static_cast<$ServerSocket*>($nc(ss)))));
	$var($DummySecureWebSocketServer$WebServerSocketChannel$Addressable, var$3, static_cast<$DummySecureWebSocketServer$WebServerSocketChannel$Addressable*>($new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, static_cast<$ServerSocket*>(ss))));
	$var($DummySecureWebSocketServer$WebServerSocketChannel$Config, var$4, static_cast<$DummySecureWebSocketServer$WebServerSocketChannel$Config*>($new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, static_cast<$ServerSocket*>(ss))));
	return $new(DummySecureWebSocketServer$WebServerSocketChannel, var$0, var$1, var$2, var$3, var$4, static_cast<$DummySecureWebSocketServer$WebServerSocketChannel$Closer*>($$new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, static_cast<$ServerSocket*>(ss))));
}

$DummySecureWebSocketServer$WebSocketChannel* DummySecureWebSocketServer$WebServerSocketChannel::lambda$of$0($ServerSocket* ss) {
	$init(DummySecureWebSocketServer$WebServerSocketChannel);
	return $DummySecureWebSocketServer$WebSocketChannel::of($($nc(ss)->accept()));
}

DummySecureWebSocketServer$WebServerSocketChannel::DummySecureWebSocketServer$WebServerSocketChannel() {
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::classInfo$.name)) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::classInfo$.name)) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::classInfo$.name)) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::classInfo$.name)) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::classInfo$.name)) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::load$(name, initialize);
		}
	}
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel, name, initialize, &_DummySecureWebSocketServer$WebServerSocketChannel_ClassInfo_, allocate$DummySecureWebSocketServer$WebServerSocketChannel);
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel::class$ = nullptr;