#include <DummySecureWebSocketServer$WebSocketChannel.h>

#include <DummySecureWebSocketServer$WebSocketChannel$Closer.h>
#include <DummySecureWebSocketServer$WebSocketChannel$Config.h>
#include <DummySecureWebSocketServer$WebSocketChannel$Reader.h>
#include <DummySecureWebSocketServer$WebSocketChannel$Writer.h>
#include <DummySecureWebSocketServer.h>
#include <java/io/Closeable.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AutoCloseable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $DummySecureWebSocketServer = ::DummySecureWebSocketServer;
using $DummySecureWebSocketServer$WebSocketChannel$Closer = ::DummySecureWebSocketServer$WebSocketChannel$Closer;
using $DummySecureWebSocketServer$WebSocketChannel$Config = ::DummySecureWebSocketServer$WebSocketChannel$Config;
using $DummySecureWebSocketServer$WebSocketChannel$Reader = ::DummySecureWebSocketServer$WebSocketChannel$Reader;
using $DummySecureWebSocketServer$WebSocketChannel$Writer = ::DummySecureWebSocketServer$WebSocketChannel$Writer;
using $Closeable = ::java::io::Closeable;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Socket = ::java::net::Socket;
using $SocketOption = ::java::net::SocketOption;
using $ByteBuffer = ::java::nio::ByteBuffer;

class DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0 : public $DummySecureWebSocketServer$WebSocketChannel$Reader {
	$class(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebSocketChannel$Reader)
public:
	void init$($Socket* s) {
		$set(this, s, s);
	}
	virtual int32_t read($ByteBuffer* bb) override {
		 return DummySecureWebSocketServer$WebSocketChannel::lambda$of$0(s, bb);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0>());
	}
	$Socket* s = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::fieldInfos[2] = {
	{"s", "Ljava/net/Socket;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, s)},
	{}
};
$MethodInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::methodInfos[3] = {
	{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::*)($Socket*)>(&DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::init$))},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0",
	"java.lang.Object",
	"DummySecureWebSocketServer$WebSocketChannel$Reader",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::class$ = nullptr;

class DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1 : public $DummySecureWebSocketServer$WebSocketChannel$Writer {
	$class(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebSocketChannel$Writer)
public:
	void init$($Socket* s) {
		$set(this, s, s);
	}
	virtual void write($ByteBuffer* bb) override {
		DummySecureWebSocketServer$WebSocketChannel::lambda$of$1(s, bb);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1>());
	}
	$Socket* s = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::fieldInfos[2] = {
	{"s", "Ljava/net/Socket;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, s)},
	{}
};
$MethodInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::*)($Socket*)>(&DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::init$))},
	{"write", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1",
	"java.lang.Object",
	"DummySecureWebSocketServer$WebSocketChannel$Writer",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::class$ = nullptr;

class DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2 : public $DummySecureWebSocketServer$WebSocketChannel$Config {
	$class(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebSocketChannel$Config)
public:
	void init$($Socket* inst) {
		$set(this, inst$, inst);
	}
	virtual void setOption($SocketOption* arg0, Object$* arg1) override {
		$nc(inst$)->setOption(arg0, arg1);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2>());
	}
	$Socket* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, inst$)},
	{}
};
$MethodInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::methodInfos[3] = {
	{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::*)($Socket*)>(&DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::init$))},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2",
	"java.lang.Object",
	"DummySecureWebSocketServer$WebSocketChannel$Config",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::class$ = nullptr;

class DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3 : public $DummySecureWebSocketServer$WebSocketChannel$Closer {
	$class(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebSocketChannel$Closer)
public:
	void init$($Socket* inst) {
		$set(this, inst$, inst);
	}
	virtual void close() override {
		$nc(inst$)->close();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3>());
	}
	$Socket* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, inst$)},
	{}
};
$MethodInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::methodInfos[3] = {
	{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::*)($Socket*)>(&DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3",
	"java.lang.Object",
	"DummySecureWebSocketServer$WebSocketChannel$Closer",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::class$ = nullptr;

$FieldInfo _DummySecureWebSocketServer$WebSocketChannel_FieldInfo_[] = {
	{"channel", "Ljava/lang/AutoCloseable;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, channel)},
	{"reader", "LDummySecureWebSocketServer$WebSocketChannel$Reader;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, reader)},
	{"writer", "LDummySecureWebSocketServer$WebSocketChannel$Writer;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, writer)},
	{"config", "LDummySecureWebSocketServer$WebSocketChannel$Config;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, config)},
	{"closer", "LDummySecureWebSocketServer$WebSocketChannel$Closer;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, closer)},
	{}
};

$MethodInfo _DummySecureWebSocketServer$WebSocketChannel_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/AutoCloseable;LDummySecureWebSocketServer$WebSocketChannel$Reader;LDummySecureWebSocketServer$WebSocketChannel$Writer;LDummySecureWebSocketServer$WebSocketChannel$Config;LDummySecureWebSocketServer$WebSocketChannel$Closer;)V", nullptr, 0, $method(static_cast<void(DummySecureWebSocketServer$WebSocketChannel::*)($AutoCloseable*,$DummySecureWebSocketServer$WebSocketChannel$Reader*,$DummySecureWebSocketServer$WebSocketChannel$Writer*,$DummySecureWebSocketServer$WebSocketChannel$Config*,$DummySecureWebSocketServer$WebSocketChannel$Closer*)>(&DummySecureWebSocketServer$WebSocketChannel::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"lambda$of$0", "(Ljava/net/Socket;Ljava/nio/ByteBuffer;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Socket*,$ByteBuffer*)>(&DummySecureWebSocketServer$WebSocketChannel::lambda$of$0)), "java.io.IOException"},
	{"lambda$of$1", "(Ljava/net/Socket;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Socket*,$ByteBuffer*)>(&DummySecureWebSocketServer$WebSocketChannel::lambda$of$1)), "java.io.IOException"},
	{"of", "(Ljava/net/Socket;)LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DummySecureWebSocketServer$WebSocketChannel*(*)($Socket*)>(&DummySecureWebSocketServer$WebSocketChannel::of))},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$WebSocketChannel_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebSocketChannel$Closer", "DummySecureWebSocketServer$WebSocketChannel", "Closer", $STATIC | $INTERFACE | $ABSTRACT},
	{"DummySecureWebSocketServer$WebSocketChannel$Config", "DummySecureWebSocketServer$WebSocketChannel", "Config", $STATIC | $INTERFACE | $ABSTRACT},
	{"DummySecureWebSocketServer$WebSocketChannel$Writer", "DummySecureWebSocketServer$WebSocketChannel", "Writer", $STATIC | $INTERFACE | $ABSTRACT},
	{"DummySecureWebSocketServer$WebSocketChannel$Reader", "DummySecureWebSocketServer$WebSocketChannel", "Reader", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DummySecureWebSocketServer$WebSocketChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DummySecureWebSocketServer$WebSocketChannel",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_DummySecureWebSocketServer$WebSocketChannel_FieldInfo_,
	_DummySecureWebSocketServer$WebSocketChannel_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$WebSocketChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$WebSocketChannel($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$WebSocketChannel));
}

void DummySecureWebSocketServer$WebSocketChannel::init$($AutoCloseable* channel, $DummySecureWebSocketServer$WebSocketChannel$Reader* reader, $DummySecureWebSocketServer$WebSocketChannel$Writer* writer, $DummySecureWebSocketServer$WebSocketChannel$Config* config, $DummySecureWebSocketServer$WebSocketChannel$Closer* closer) {
	$set(this, channel, channel);
	$set(this, reader, reader);
	$set(this, writer, writer);
	$set(this, config, config);
	$set(this, closer, closer);
}

void DummySecureWebSocketServer$WebSocketChannel::close() {
	$nc(this->closer)->close();
}

$String* DummySecureWebSocketServer$WebSocketChannel::toString() {
	return $nc($of(this->channel))->toString();
}

int32_t DummySecureWebSocketServer$WebSocketChannel::read($ByteBuffer* bb) {
	return $nc(this->reader)->read(bb);
}

void DummySecureWebSocketServer$WebSocketChannel::write($ByteBuffer* bb) {
	$nc(this->writer)->write(bb);
}

void DummySecureWebSocketServer$WebSocketChannel::setOption($SocketOption* option, Object$* value) {
	$nc(this->config)->setOption(option, value);
}

DummySecureWebSocketServer$WebSocketChannel* DummySecureWebSocketServer$WebSocketChannel::of($Socket* s) {
	$init(DummySecureWebSocketServer$WebSocketChannel);
	$useLocalCurrentObjectStackCache();
	$var($DummySecureWebSocketServer$WebSocketChannel$Reader, reader, static_cast<$DummySecureWebSocketServer$WebSocketChannel$Reader*>($new(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, s)));
	$var($DummySecureWebSocketServer$WebSocketChannel$Writer, writer, static_cast<$DummySecureWebSocketServer$WebSocketChannel$Writer*>($new(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, s)));
	$var($AutoCloseable, var$0, static_cast<$AutoCloseable*>(s));
	$var($DummySecureWebSocketServer$WebSocketChannel$Reader, var$1, reader);
	$var($DummySecureWebSocketServer$WebSocketChannel$Writer, var$2, writer);
	$var($DummySecureWebSocketServer$WebSocketChannel$Config, var$3, static_cast<$DummySecureWebSocketServer$WebSocketChannel$Config*>($new(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, static_cast<$Socket*>($nc(s)))));
	return $new(DummySecureWebSocketServer$WebSocketChannel, var$0, var$1, var$2, var$3, static_cast<$DummySecureWebSocketServer$WebSocketChannel$Closer*>($$new(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, static_cast<$Socket*>(s))));
}

void DummySecureWebSocketServer$WebSocketChannel::lambda$of$1($Socket* s, $ByteBuffer* bb) {
	$init(DummySecureWebSocketServer$WebSocketChannel);
	$DummySecureWebSocketServer::write($($nc(s)->getOutputStream()), bb);
}

int32_t DummySecureWebSocketServer$WebSocketChannel::lambda$of$0($Socket* s, $ByteBuffer* bb) {
	$init(DummySecureWebSocketServer$WebSocketChannel);
	return $DummySecureWebSocketServer::read($($nc(s)->getInputStream()), bb);
}

DummySecureWebSocketServer$WebSocketChannel::DummySecureWebSocketServer$WebSocketChannel() {
}

$Class* DummySecureWebSocketServer$WebSocketChannel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::classInfo$.name)) {
			return DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::classInfo$.name)) {
			return DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::classInfo$.name)) {
			return DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::classInfo$.name)) {
			return DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::load$(name, initialize);
		}
	}
	$loadClass(DummySecureWebSocketServer$WebSocketChannel, name, initialize, &_DummySecureWebSocketServer$WebSocketChannel_ClassInfo_, allocate$DummySecureWebSocketServer$WebSocketChannel);
	return class$;
}

$Class* DummySecureWebSocketServer$WebSocketChannel::class$ = nullptr;