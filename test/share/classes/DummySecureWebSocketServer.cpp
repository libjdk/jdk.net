#include <DummySecureWebSocketServer.h>

#include <DummySecureWebSocketServer$Credentials.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/AutoCloseable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/net/URI.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/channels/ClosedByInterruptException.h>
#include <java/nio/charset/CharacterCodingException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/net/ServerSocketFactory.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <jcpp.h>

#undef TCP_NODELAY
#undef UTF_8

using $DummySecureWebSocketServer$Credentials = ::DummySecureWebSocketServer$Credentials;
using $DummySecureWebSocketServer$WebServerSocketChannel = ::DummySecureWebSocketServer$WebServerSocketChannel;
using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $AutoCloseableArray = $Array<::java::lang::AutoCloseable>;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $URI = ::java::net::URI;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $ClosedByInterruptException = ::java::nio::channels::ClosedByInterruptException;
using $CharacterCodingException = ::java::nio::charset::CharacterCodingException;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;

class DummySecureWebSocketServer$$Lambda$lambda$new$0 : public $Runnable {
	$class(DummySecureWebSocketServer$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DummySecureWebSocketServer* inst, $BiFunction* mapping, $DummySecureWebSocketServer$Credentials* credentials) {
		$set(this, inst$, inst);
		$set(this, mapping, mapping);
		$set(this, credentials, credentials);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0(mapping, credentials);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$$Lambda$lambda$new$0>());
	}
	DummySecureWebSocketServer* inst$ = nullptr;
	$BiFunction* mapping = nullptr;
	$DummySecureWebSocketServer$Credentials* credentials = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$$Lambda$lambda$new$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$new$0, inst$)},
	{"mapping", "Ljava/util/function/BiFunction;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$new$0, mapping)},
	{"credentials", "LDummySecureWebSocketServer$Credentials;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$new$0, credentials)},
	{}
};
$MethodInfo DummySecureWebSocketServer$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(LDummySecureWebSocketServer;Ljava/util/function/BiFunction;LDummySecureWebSocketServer$Credentials;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$$Lambda$lambda$new$0::*)(DummySecureWebSocketServer*,$BiFunction*,$DummySecureWebSocketServer$Credentials*)>(&DummySecureWebSocketServer$$Lambda$lambda$new$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$new$0::class$ = nullptr;

class DummySecureWebSocketServer$$Lambda$lambda$serve$1$1 : public $Runnable {
	$class(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DummySecureWebSocketServer* inst, $DummySecureWebSocketServer$WebSocketChannel* channel) {
		$set(this, inst$, inst);
		$set(this, channel, channel);
	}
	virtual void run() override {
		$nc(inst$)->lambda$serve$1(channel);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$$Lambda$lambda$serve$1$1>());
	}
	DummySecureWebSocketServer* inst$ = nullptr;
	$DummySecureWebSocketServer$WebSocketChannel* channel = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, inst$)},
	{"channel", "LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, channel)},
	{}
};
$MethodInfo DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::methodInfos[3] = {
	{"<init>", "(LDummySecureWebSocketServer;LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::*)(DummySecureWebSocketServer*,$DummySecureWebSocketServer$WebSocketChannel*)>(&DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$$Lambda$lambda$serve$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::class$ = nullptr;

class DummySecureWebSocketServer$$Lambda$lambda$serve$2$2 : public $Runnable {
	$class(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DummySecureWebSocketServer* inst, $DummySecureWebSocketServer$WebSocketChannel* channel) {
		$set(this, inst$, inst);
		$set(this, channel, channel);
	}
	virtual void run() override {
		$nc(inst$)->lambda$serve$2(channel);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$$Lambda$lambda$serve$2$2>());
	}
	DummySecureWebSocketServer* inst$ = nullptr;
	$DummySecureWebSocketServer$WebSocketChannel* channel = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, inst$)},
	{"channel", "LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, channel)},
	{}
};
$MethodInfo DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::methodInfos[3] = {
	{"<init>", "(LDummySecureWebSocketServer;LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::*)(DummySecureWebSocketServer*,$DummySecureWebSocketServer$WebSocketChannel*)>(&DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$$Lambda$lambda$serve$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::class$ = nullptr;

class DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3 : public $BiFunction {
	$class(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3, $NO_CLASS_INIT, $BiFunction)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* request, Object$* credentials) override {
		 return $of(DummySecureWebSocketServer::lambda$defaultMapping$4($cast($List, request), $cast($DummySecureWebSocketServer$Credentials, credentials)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::*)()>(&DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3",
	"java.lang.Object",
	"java.util.function.BiFunction",
	nullptr,
	methodInfos
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::class$ = nullptr;

class DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4 : public $Function {
	$class(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* k) override {
		 return $of(DummySecureWebSocketServer::lambda$defaultMapping$3($cast($String, k)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::*)()>(&DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::class$ = nullptr;

$FieldInfo _DummySecureWebSocketServer_FieldInfo_[] = {
	{"started", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer, started)},
	{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer, thread)},
	{"ss", "LDummySecureWebSocketServer$WebServerSocketChannel;", nullptr, $PRIVATE | $VOLATILE, $field(DummySecureWebSocketServer, ss)},
	{"address", "Ljava/net/InetSocketAddress;", nullptr, $PRIVATE | $VOLATILE, $field(DummySecureWebSocketServer, address)},
	{"secure", "Z", nullptr, $PRIVATE | $VOLATILE, $field(DummySecureWebSocketServer, secure$)},
	{"read", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(DummySecureWebSocketServer, read$)},
	{"readReady", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer, readReady)},
	{"done", "Z", nullptr, $PRIVATE | $VOLATILE, $field(DummySecureWebSocketServer, done)},
	{}
};

$MethodInfo _DummySecureWebSocketServer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer::*)()>(&DummySecureWebSocketServer::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer::*)($String*,$String*)>(&DummySecureWebSocketServer::init$))},
	{"<init>", "(Ljava/util/function/BiFunction;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/util/function/BiFunction<Ljava/util/List<Ljava/lang/String;>;LDummySecureWebSocketServer$Credentials;Ljava/util/List<Ljava/lang/String;>;>;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(DummySecureWebSocketServer::*)($BiFunction*,$String*,$String*)>(&DummySecureWebSocketServer::init$))},
	{"authorized", "(LDummySecureWebSocketServer$Credentials;Ljava/util/Map;)Z", "(LDummySecureWebSocketServer$Credentials;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($DummySecureWebSocketServer$Credentials*,$Map*)>(&DummySecureWebSocketServer::authorized))},
	{"close", "()V", nullptr, $PUBLIC},
	{"close", "([Ljava/lang/AutoCloseable;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($AutoCloseableArray*)>(&DummySecureWebSocketServer::close))},
	{"defaultMapping", "()Ljava/util/function/BiFunction;", "()Ljava/util/function/BiFunction<Ljava/util/List<Ljava/lang/String;>;LDummySecureWebSocketServer$Credentials;Ljava/util/List<Ljava/lang/String;>;>;", $PRIVATE | $STATIC, $method(static_cast<$BiFunction*(*)()>(&DummySecureWebSocketServer::defaultMapping))},
	{"expectHeader", "(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", $PROTECTED | $STATIC, $method(static_cast<$String*(*)($Map*,$String*,$String*)>(&DummySecureWebSocketServer::expectHeader))},
	{"getURI", "()Ljava/net/URI;", nullptr, 0},
	{"lambda$defaultMapping$3", "(Ljava/lang/String;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($String*)>(&DummySecureWebSocketServer::lambda$defaultMapping$3))},
	{"lambda$defaultMapping$4", "(Ljava/util/List;LDummySecureWebSocketServer$Credentials;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)($List*,$DummySecureWebSocketServer$Credentials*)>(&DummySecureWebSocketServer::lambda$defaultMapping$4))},
	{"lambda$new$0", "(Ljava/util/function/BiFunction;LDummySecureWebSocketServer$Credentials;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(DummySecureWebSocketServer::*)($BiFunction*,$DummySecureWebSocketServer$Credentials*)>(&DummySecureWebSocketServer::lambda$new$0))},
	{"lambda$serve$1", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(DummySecureWebSocketServer::*)($DummySecureWebSocketServer$WebSocketChannel*)>(&DummySecureWebSocketServer::lambda$serve$1))},
	{"lambda$serve$2", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(DummySecureWebSocketServer::*)($DummySecureWebSocketServer$WebSocketChannel*)>(&DummySecureWebSocketServer::lambda$serve$2))},
	{"open", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openWS", "()LDummySecureWebSocketServer$WebServerSocketChannel;", nullptr, $STATIC, $method(static_cast<$DummySecureWebSocketServer$WebServerSocketChannel*(*)()>(&DummySecureWebSocketServer::openWS)), "java.io.IOException"},
	{"openWSS", "()LDummySecureWebSocketServer$WebServerSocketChannel;", nullptr, $STATIC, $method(static_cast<$DummySecureWebSocketServer$WebServerSocketChannel*(*)()>(&DummySecureWebSocketServer::openWSS)), "java.io.IOException"},
	{"read", "(Ljava/io/InputStream;Ljava/nio/ByteBuffer;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($InputStream*,$ByteBuffer*)>(&DummySecureWebSocketServer::read)), "java.io.IOException"},
	{"read", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"read", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"readRequest", "(LDummySecureWebSocketServer$WebSocketChannel;Ljava/lang/StringBuilder;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DummySecureWebSocketServer::*)($DummySecureWebSocketServer$WebSocketChannel*,$StringBuilder*)>(&DummySecureWebSocketServer::readRequest)), "java.io.IOException"},
	{"secure", "()LDummySecureWebSocketServer;", nullptr, $PUBLIC},
	{"serve", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(DummySecureWebSocketServer::*)($DummySecureWebSocketServer$WebSocketChannel*)>(&DummySecureWebSocketServer::serve)), "java.lang.InterruptedException"},
	{"write", "(Ljava/io/OutputStream;Ljava/nio/ByteBuffer;)V", nullptr, $STATIC, $method(static_cast<void(*)($OutputStream*,$ByteBuffer*)>(&DummySecureWebSocketServer::write)), "java.io.IOException"},
	{"write", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeResponse", "(LDummySecureWebSocketServer$WebSocketChannel;Ljava/util/List;)V", "(LDummySecureWebSocketServer$WebSocketChannel;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(DummySecureWebSocketServer::*)($DummySecureWebSocketServer$WebSocketChannel*,$List*)>(&DummySecureWebSocketServer::writeResponse)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$Credentials", "DummySecureWebSocketServer", "Credentials", $PRIVATE | $STATIC},
	{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
	{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DummySecureWebSocketServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DummySecureWebSocketServer",
	"java.lang.Object",
	"java.io.Closeable",
	_DummySecureWebSocketServer_FieldInfo_,
	_DummySecureWebSocketServer_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer$Credentials,DummySecureWebSocketServer$WebServerSocketChannel,DummySecureWebSocketServer$WebServerSocketChannel$Addressable,DummySecureWebSocketServer$WebServerSocketChannel$Closer,DummySecureWebSocketServer$WebServerSocketChannel$Config,DummySecureWebSocketServer$WebServerSocketChannel$Binder,DummySecureWebSocketServer$WebServerSocketChannel$Accepter,DummySecureWebSocketServer$WebSocketChannel,DummySecureWebSocketServer$WebSocketChannel$Closer,DummySecureWebSocketServer$WebSocketChannel$Config,DummySecureWebSocketServer$WebSocketChannel$Writer,DummySecureWebSocketServer$WebSocketChannel$Reader"
};

$Object* allocate$DummySecureWebSocketServer($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer));
}

$DummySecureWebSocketServer$WebServerSocketChannel* DummySecureWebSocketServer::openWSS() {
	$init(DummySecureWebSocketServer);
	$useLocalCurrentObjectStackCache();
	return $DummySecureWebSocketServer$WebServerSocketChannel::of($($nc($($SSLServerSocketFactory::getDefault()))->createServerSocket()));
}

$DummySecureWebSocketServer$WebServerSocketChannel* DummySecureWebSocketServer::openWS() {
	$init(DummySecureWebSocketServer);
	$useLocalCurrentObjectStackCache();
	return $DummySecureWebSocketServer$WebServerSocketChannel::of($($nc($($ServerSocketFactory::getDefault()))->createServerSocket()));
}

int32_t DummySecureWebSocketServer::read($InputStream* str, $ByteBuffer* buffer) {
	$init(DummySecureWebSocketServer);
	int32_t len = $Math::min($nc(buffer)->remaining(), 1024);
	if (len <= 0) {
		return 0;
	}
	$var($bytes, bytes, $new($bytes, len));
	int32_t res = 0;
	if ($nc(buffer)->hasRemaining()) {
		len = $Math::min(len, buffer->remaining());
		int32_t n = $nc(str)->read(bytes, 0, len);
		if (n > 0) {
			buffer->put(bytes, 0, n);
			res += n;
		} else if (res > 0) {
			return res;
		} else {
			return n;
		}
	}
	return res;
}

void DummySecureWebSocketServer::write($OutputStream* str, $ByteBuffer* buffer) {
	$init(DummySecureWebSocketServer);
	int32_t len = $Math::min($nc(buffer)->remaining(), 1024);
	if (len <= 0) {
		return;
	}
	$var($bytes, bytes, $new($bytes, len));
	int32_t res = 0;
	int32_t pos = $nc(buffer)->position();
	while (buffer->hasRemaining()) {
		len = $Math::min(len, buffer->remaining());
		buffer->get(bytes, 0, len);
		$nc(str)->write(bytes, 0, len);
	}
}

void DummySecureWebSocketServer::init$() {
	DummySecureWebSocketServer::init$($(defaultMapping()), nullptr, nullptr);
}

void DummySecureWebSocketServer::init$($String* username, $String* password) {
	DummySecureWebSocketServer::init$($(defaultMapping()), username, password);
}

void DummySecureWebSocketServer::init$($BiFunction* mapping, $String* username, $String* password) {
	$useLocalCurrentObjectStackCache();
	$set(this, started, $new($AtomicBoolean));
	$set(this, read$, $ByteBuffer::allocate(16384));
	$set(this, readReady, $new($CountDownLatch, 1));
	$Objects::requireNonNull(mapping);
	$var($DummySecureWebSocketServer$Credentials, credentials, username != nullptr ? $new($DummySecureWebSocketServer$Credentials, username, password) : ($DummySecureWebSocketServer$Credentials*)nullptr);
	$set(this, thread, $new($Thread, static_cast<$Runnable*>($$new(DummySecureWebSocketServer$$Lambda$lambda$new$0, this, mapping, credentials))));
	$nc(this->thread)->setName("DummySecureWebSocketServer"_s);
	$nc(this->thread)->setDaemon(false);
}

DummySecureWebSocketServer* DummySecureWebSocketServer::secure() {
	this->secure$ = true;
	return this;
}

void DummySecureWebSocketServer::read($DummySecureWebSocketServer$WebSocketChannel* ch) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, b, $ByteBuffer::allocate(0x00010000));
	while ($nc(ch)->read(b) != -1) {
		$nc(b)->flip();
		int32_t var$0 = $nc(this->read$)->remaining();
		if (var$0 < b->remaining()) {
			int32_t var$2 = $nc(this->read$)->capacity();
			int32_t var$1 = var$2 - $nc(this->read$)->remaining();
			int32_t required = var$1 + b->remaining();
			int32_t log2required = 32 - $Integer::numberOfLeadingZeros(required - 1);
			$var($ByteBuffer, newBuffer, $ByteBuffer::allocate($sl(1, log2required)));
			$nc(newBuffer)->put($($nc(this->read$)->flip()));
			$set(this, read$, newBuffer);
		}
		$nc(this->read$)->put(b);
		b->clear();
	}
}

void DummySecureWebSocketServer::write($DummySecureWebSocketServer$WebSocketChannel* ch) {
}

void DummySecureWebSocketServer::serve($DummySecureWebSocketServer$WebSocketChannel* channel) {
	$useLocalCurrentObjectStackCache();
	$var($Thread, reader, $new($Thread, static_cast<$Runnable*>($$new(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, this, channel))));
	$var($Thread, writer, $new($Thread, static_cast<$Runnable*>($$new(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, this, channel))));
	reader->start();
	writer->start();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while (!this->done) {
				try {
					reader->join(500);
				} catch ($InterruptedException& x) {
					if (this->done) {
						close($$new($AutoCloseableArray, {static_cast<$AutoCloseable*>(channel)}));
						break;
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			reader->interrupt();
			{
				$var($Throwable, var$2, nullptr);
				try {
					while (!this->done) {
						try {
							writer->join(500);
						} catch ($InterruptedException& x) {
							if (this->done) {
								break;
							}
						}
					}
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					writer->interrupt();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$ByteBuffer* DummySecureWebSocketServer::read() {
	$useLocalCurrentObjectStackCache();
	$nc(this->readReady)->await();
	return $nc($($nc($($nc(this->read$)->duplicate()))->asReadOnlyBuffer()))->flip();
}

void DummySecureWebSocketServer::open() {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println("Starting"_s);
	if (!$nc(this->started)->compareAndSet(false, true)) {
		$throwNew($IllegalStateException, "Already started"_s);
	}
	$set(this, ss, this->secure$ ? openWSS() : openWS());
	try {
		$nc(this->ss)->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
		$set(this, address, $cast($InetSocketAddress, $nc(this->ss)->getLocalAddress()));
		$nc(this->thread)->start();
	} catch ($IOException& e) {
		this->done = true;
		close($$new($AutoCloseableArray, {static_cast<$AutoCloseable*>(this->ss)}));
		$throw(e);
	}
	$nc($System::err)->println($$str({"Started at: "_s, $(getURI())}));
}

void DummySecureWebSocketServer::close() {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println($$str({"Stopping: "_s, $(getURI())}));
	this->done = true;
	$nc(this->thread)->interrupt();
	close($$new($AutoCloseableArray, {static_cast<$AutoCloseable*>(this->ss)}));
}

$URI* DummySecureWebSocketServer::getURI() {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->started)->get()) {
		$throwNew($IllegalStateException, "Not yet started"_s);
	}
	if (!this->secure$) {
		return $URI::create($$str({"ws://localhost:"_s, $$str($nc(this->address)->getPort())}));
	} else {
		return $URI::create($$str({"wss://localhost:"_s, $$str($nc(this->address)->getPort())}));
	}
}

bool DummySecureWebSocketServer::readRequest($DummySecureWebSocketServer$WebSocketChannel* channel, $StringBuilder* request) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, buffer, $ByteBuffer::allocate(512));
	while ($nc(channel)->read(buffer) != -1) {
		$var($CharBuffer, decoded, nullptr);
		$nc(buffer)->flip();
		try {
			$init($StandardCharsets);
			$assign(decoded, $nc($($nc($StandardCharsets::ISO_8859_1)->newDecoder()))->decode(buffer));
		} catch ($CharacterCodingException& e) {
			$throwNew($UncheckedIOException, e);
		}
		$nc(request)->append(static_cast<$CharSequence*>(decoded));
		if ($nc($($nc($($Pattern::compile("\r\n\r\n"_s)))->matcher(request)))->find()) {
			return true;
		}
		buffer->clear();
	}
	return false;
}

void DummySecureWebSocketServer::writeResponse($DummySecureWebSocketServer$WebSocketChannel* channel, $List* response) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $str({$cast($String, $($nc($($nc(response)->stream()))->collect($($Collectors::joining("\r\n"_s))))), "\r\n\r\n"_s}));
	$var($ByteBuffer, encoded, nullptr);
	try {
		$init($StandardCharsets);
		$assign(encoded, $nc($($nc($StandardCharsets::ISO_8859_1)->newEncoder()))->encode($($CharBuffer::wrap(static_cast<$CharSequence*>(s)))));
	} catch ($CharacterCodingException& e) {
		$throwNew($UncheckedIOException, e);
	}
	while ($nc(encoded)->hasRemaining()) {
		$nc(channel)->write(encoded);
	}
}

$BiFunction* DummySecureWebSocketServer::defaultMapping() {
	$init(DummySecureWebSocketServer);
	return static_cast<$BiFunction*>($new(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3));
}

bool DummySecureWebSocketServer::authorized($DummySecureWebSocketServer$Credentials* credentials, $Map* requestHeaders) {
	$init(DummySecureWebSocketServer);
	$useLocalCurrentObjectStackCache();
	$var($List, authorization, $cast($List, $nc(requestHeaders)->get("Authorization"_s)));
	if (authorization == nullptr) {
		return false;
	}
	if ($nc(authorization)->size() != 1) {
		$throwNew($IllegalStateException, $$str({"Authorization unexpected count:"_s, authorization}));
	}
	$var($String, header, $cast($String, $nc(authorization)->get(0)));
	if (!$nc(header)->startsWith("Basic "_s)) {
		$throwNew($IllegalStateException, $$str({"Authorization not Basic: "_s, header}));
	}
	$assign(header, $nc(header)->substring("Basic "_s->length()));
	$init($StandardCharsets);
	$var($String, values, $new($String, $($nc($($Base64::getDecoder()))->decode(header)), $StandardCharsets::UTF_8));
	int32_t sep = values->indexOf((int32_t)u':');
	if (sep < 1) {
		$throwNew($IllegalStateException, $$str({"Authorization not colon: "_s, values}));
	}
	$var($String, name, values->substring(0, sep));
	$var($String, password, values->substring(sep + 1));
	bool var$0 = name->equals($($nc(credentials)->name()));
	if (var$0 && password->equals($($nc(credentials)->password()))) {
		return true;
	}
	return false;
}

$String* DummySecureWebSocketServer::expectHeader($Map* headers, $String* name, $String* value) {
	$init(DummySecureWebSocketServer);
	$useLocalCurrentObjectStackCache();
	$var($List, v, $cast($List, $nc(headers)->get(name)));
	if (v == nullptr) {
		$throwNew($IllegalStateException, $($String::format("Expected \'%s\' header, not present in %s"_s, $$new($ObjectArray, {
			$of(name),
			$of(headers)
		}))));
	}
	if (!$nc(v)->contains(value)) {
		$throwNew($IllegalStateException, $($String::format("Expected \'%s: %s\', actual: \'%s: %s\'"_s, $$new($ObjectArray, {
			$of(name),
			$of(value),
			$of(name),
			$of(v)
		}))));
	}
	return value;
}

void DummySecureWebSocketServer::close($AutoCloseableArray* acs) {
	$init(DummySecureWebSocketServer);
	$useLocalCurrentObjectStackCache();
	{
		$var($AutoCloseableArray, arr$, acs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AutoCloseable, ac, arr$->get(i$));
			{
				try {
					$nc(ac)->close();
				} catch ($Exception& ignored) {
				}
			}
		}
	}
}

$List* DummySecureWebSocketServer::lambda$defaultMapping$4($List* request, $DummySecureWebSocketServer$Credentials* credentials) {
	$init(DummySecureWebSocketServer);
	$useLocalCurrentObjectStackCache();
	$var($List, response, $new($LinkedList));
	$var($Iterator, iterator, $nc(request)->iterator());
	if (!$nc(iterator)->hasNext()) {
		$throwNew($IllegalStateException, "The request is empty"_s);
	}
	$var($String, statusLine, $cast($String, $nc(iterator)->next()));
	bool var$0 = $nc(statusLine)->startsWith("GET /"_s);
	if (!(var$0 && statusLine->endsWith(" HTTP/1.1"_s))) {
		$throwNew($IllegalStateException, $$str({"Unexpected status line: "_s, $cast($String, $(request->get(0)))}));
	}
	response->add("HTTP/1.1 101 Switching Protocols"_s);
	$var($Map, requestHeaders, $new($HashMap));
	while (iterator->hasNext()) {
		$var($String, header, $cast($String, iterator->next()));
		$var($StringArray, split, $nc(header)->split(": "_s));
		if (split->length != 2) {
			$throwNew($IllegalStateException, $$str({"Unexpected header: "_s, header, ", split="_s, $($Arrays::toString(split))}));
		}
		$nc(($cast($List, $(requestHeaders->computeIfAbsent(split->get(0), static_cast<$Function*>($$new(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4)))))))->add(split->get(1));
	}
	if (requestHeaders->containsKey("Sec-WebSocket-Protocol"_s)) {
		$throwNew($IllegalStateException, "Subprotocols are not expected"_s);
	}
	if (requestHeaders->containsKey("Sec-WebSocket-Extensions"_s)) {
		$throwNew($IllegalStateException, "Extensions are not expected"_s);
	}
	expectHeader(requestHeaders, "Connection"_s, "Upgrade"_s);
	response->add("Connection: Upgrade"_s);
	expectHeader(requestHeaders, "Upgrade"_s, "websocket"_s);
	response->add("Upgrade: websocket"_s);
	expectHeader(requestHeaders, "Sec-WebSocket-Version"_s, "13"_s);
	$var($List, key, $cast($List, requestHeaders->get("Sec-WebSocket-Key"_s)));
	if (key == nullptr || $nc(key)->isEmpty()) {
		$throwNew($IllegalStateException, "Sec-WebSocket-Key is missing"_s);
	}
	if ($nc(key)->size() != 1) {
		$throwNew($IllegalStateException, $$str({"Sec-WebSocket-Key has too many values : "_s, key}));
	}
	$var($MessageDigest, sha1, nullptr);
	try {
		$assign(sha1, $MessageDigest::getInstance("SHA-1"_s));
	} catch ($NoSuchAlgorithmException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$var($String, x, $str({$cast($String, $($nc(key)->get(0))), "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"_s}));
	$init($StandardCharsets);
	$nc(sha1)->update($($nc(x)->getBytes($StandardCharsets::ISO_8859_1)));
	$var($String, v, $nc($($Base64::getEncoder()))->encodeToString($(sha1->digest())));
	response->add($$str({"Sec-WebSocket-Accept: "_s, v}));
	if (credentials != nullptr && !authorized(credentials, requestHeaders)) {
		response->clear();
		response->add("HTTP/1.1 401 Unauthorized"_s);
		response->add("Content-Length: 0"_s);
		response->add("WWW-Authenticate: Basic realm=\"dummy server realm\""_s);
	}
	return response;
}

$List* DummySecureWebSocketServer::lambda$defaultMapping$3($String* k) {
	$init(DummySecureWebSocketServer);
	return $new($ArrayList);
}

void DummySecureWebSocketServer::lambda$serve$2($DummySecureWebSocketServer$WebSocketChannel* channel) {
	try {
		write(channel);
	} catch ($IOException& ignored) {
	}
}

void DummySecureWebSocketServer::lambda$serve$1($DummySecureWebSocketServer$WebSocketChannel* channel) {
	try {
		read(channel);
	} catch ($IOException& ignored) {
	}
}

void DummySecureWebSocketServer::lambda$new$0($BiFunction* mapping, $DummySecureWebSocketServer$Credentials* credentials) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				while (!$($Thread::currentThread())->isInterrupted() && !this->done) {
					$nc($System::err)->println($$str({"Accepting next connection at: "_s, this->ss}));
					$var($DummySecureWebSocketServer$WebSocketChannel, channel, $nc(this->ss)->accept());
					$nc($System::err)->println($$str({"Accepted: "_s, channel}));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$init($StandardSocketOptions);
								$nc(channel)->setOption($StandardSocketOptions::TCP_NODELAY, $($Boolean::valueOf(true)));
								while (!this->done) {
									$var($StringBuilder, request, $new($StringBuilder));
									if (!readRequest(channel, request)) {
										$throwNew($IOException, $$str({"Bad request:["_s, request, "]"_s}));
									}
									$var($List, strings, $Arrays::asList($($nc($(request->toString()))->split("\r\n"_s))));
									$var($List, response, $cast($List, $nc(mapping)->apply(strings, credentials)));
									writeResponse(channel, response);
									if ($nc(($cast($String, $($nc(response)->get(0)))))->startsWith("HTTP/1.1 401"_s)) {
										$nc($System::err)->println($$str({"Sent 401 Authentication response "_s, channel}));
										continue;
									} else {
										serve(channel);
										break;
									}
								}
							} catch ($IOException& e) {
								if (!this->done) {
									$nc($System::err)->println($$str({"Error in connection: "_s, channel, ", "_s, e}));
								}
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							$nc($System::err)->println($$str({"Closed: "_s, channel}));
							close($$new($AutoCloseableArray, {static_cast<$AutoCloseable*>(channel)}));
							$nc(this->readReady)->countDown();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				}
			} catch ($ClosedByInterruptException& ignored) {
			} catch ($Throwable& e) {
				if (!this->done) {
					e->printStackTrace($System::err);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			this->done = true;
			close($$new($AutoCloseableArray, {static_cast<$AutoCloseable*>(this->ss)}));
			$nc($System::err)->println($$str({"Stopped at: "_s, $(getURI())}));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

DummySecureWebSocketServer::DummySecureWebSocketServer() {
}

$Class* DummySecureWebSocketServer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DummySecureWebSocketServer$$Lambda$lambda$new$0::classInfo$.name)) {
			return DummySecureWebSocketServer$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::classInfo$.name)) {
			return DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::classInfo$.name)) {
			return DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::classInfo$.name)) {
			return DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::load$(name, initialize);
		}
		if (name->equals(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::classInfo$.name)) {
			return DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::load$(name, initialize);
		}
	}
	$loadClass(DummySecureWebSocketServer, name, initialize, &_DummySecureWebSocketServer_ClassInfo_, allocate$DummySecureWebSocketServer);
	return class$;
}

$Class* DummySecureWebSocketServer::class$ = nullptr;