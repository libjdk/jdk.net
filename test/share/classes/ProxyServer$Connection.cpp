#include <ProxyServer$Connection.h>

#include <ProxyServer$Credentials.h>
#include <ProxyServer.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Arrays.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64.h>
#include <java/util/IllegalFormatException.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CR
#undef CRLF
#undef LF
#undef ROOT
#undef SO_LINGER
#undef TCP_NODELAY
#undef US
#undef UTF_8

using $ProxyServer = ::ProxyServer;
using $ProxyServer$Credentials = ::ProxyServer$Credentials;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Arrays = ::java::util::Arrays;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Collection = ::java::util::Collection;
using $IllegalFormatException = ::java::util::IllegalFormatException;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

class ProxyServer$Connection$$Lambda$lambda$authorized$0 : public $Predicate {
	$class(ProxyServer$Connection$$Lambda$lambda$authorized$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* n) override {
		 return ProxyServer$Connection::lambda$authorized$0($cast($String, n));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProxyServer$Connection$$Lambda$lambda$authorized$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ProxyServer$Connection$$Lambda$lambda$authorized$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer$Connection$$Lambda$lambda$authorized$0::*)()>(&ProxyServer$Connection$$Lambda$lambda$authorized$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProxyServer$Connection$$Lambda$lambda$authorized$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProxyServer$Connection$$Lambda$lambda$authorized$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ProxyServer$Connection$$Lambda$lambda$authorized$0::load$($String* name, bool initialize) {
	$loadClass(ProxyServer$Connection$$Lambda$lambda$authorized$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$authorized$0::class$ = nullptr;

class ProxyServer$Connection$$Lambda$lambda$findFirst$1$1 : public $Predicate {
	$class(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* h) {
		$set(this, h, h);
	}
	virtual bool test(Object$* s) override {
		 return ProxyServer$Connection::lambda$findFirst$1(h, $cast($String, s));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProxyServer$Connection$$Lambda$lambda$findFirst$1$1>());
	}
	$String* h = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::fieldInfos[2] = {
	{"h", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, h)},
	{}
};
$MethodInfo ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::*)($String*)>(&ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProxyServer$Connection$$Lambda$lambda$findFirst$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::load$($String* name, bool initialize) {
	$loadClass(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::class$ = nullptr;

class ProxyServer$Connection$$Lambda$lambda$findFirst$2$2 : public $Function {
	$class(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$($String* h) {
		$set(this, h, h);
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(ProxyServer$Connection::lambda$findFirst$2(h, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProxyServer$Connection$$Lambda$lambda$findFirst$2$2>());
	}
	$String* h = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::fieldInfos[2] = {
	{"h", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, h)},
	{}
};
$MethodInfo ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::*)($String*)>(&ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProxyServer$Connection$$Lambda$lambda$findFirst$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::load$($String* name, bool initialize) {
	$loadClass(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::class$ = nullptr;

class ProxyServer$Connection$$Lambda$trim$3 : public $Function {
	$class(ProxyServer$Connection$$Lambda$trim$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($String, inst$)->trim());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProxyServer$Connection$$Lambda$trim$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ProxyServer$Connection$$Lambda$trim$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer$Connection$$Lambda$trim$3::*)()>(&ProxyServer$Connection$$Lambda$trim$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProxyServer$Connection$$Lambda$trim$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProxyServer$Connection$$Lambda$trim$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ProxyServer$Connection$$Lambda$trim$3::load$($String* name, bool initialize) {
	$loadClass(ProxyServer$Connection$$Lambda$trim$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$trim$3::class$ = nullptr;

class ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4 : public $Runnable {
	$class(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ProxyServer$Connection* inst, bool log) {
		$set(this, inst$, inst);
		this->log = log;
	}
	virtual void run() override {
		$nc(inst$)->lambda$proxyCommon$3(log);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4>());
	}
	ProxyServer$Connection* inst$ = nullptr;
	bool log = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, inst$)},
	{"log", "Z", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, log)},
	{}
};
$MethodInfo ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::methodInfos[3] = {
	{"<init>", "(LProxyServer$Connection;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::*)(ProxyServer$Connection*,bool)>(&ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::load$($String* name, bool initialize) {
	$loadClass(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::class$ = nullptr;

class ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5 : public $Runnable {
	$class(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ProxyServer$Connection* inst, bool log) {
		$set(this, inst$, inst);
		this->log = log;
	}
	virtual void run() override {
		$nc(inst$)->lambda$proxyCommon$4(log);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5>());
	}
	ProxyServer$Connection* inst$ = nullptr;
	bool log = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, inst$)},
	{"log", "Z", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, log)},
	{}
};
$MethodInfo ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::methodInfos[3] = {
	{"<init>", "(LProxyServer$Connection;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::*)(ProxyServer$Connection*,bool)>(&ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::load$($String* name, bool initialize) {
	$loadClass(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::class$ = nullptr;

$FieldInfo _ProxyServer$Connection_FieldInfo_[] = {
	{"this$0", "LProxyServer;", nullptr, $FINAL | $SYNTHETIC, $field(ProxyServer$Connection, this$0)},
	{"id", "I", nullptr, $PRIVATE | $FINAL, $field(ProxyServer$Connection, id)},
	{"clientSocket", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(ProxyServer$Connection, clientSocket)},
	{"serverSocket", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(ProxyServer$Connection, serverSocket)},
	{"out", "Ljava/lang/Thread;", nullptr, 0, $field(ProxyServer$Connection, out)},
	{"in", "Ljava/lang/Thread;", nullptr, 0, $field(ProxyServer$Connection, in)},
	{"clientIn", "Ljava/io/InputStream;", nullptr, $VOLATILE, $field(ProxyServer$Connection, clientIn)},
	{"serverIn", "Ljava/io/InputStream;", nullptr, $VOLATILE, $field(ProxyServer$Connection, serverIn)},
	{"clientOut", "Ljava/io/OutputStream;", nullptr, $VOLATILE, $field(ProxyServer$Connection, clientOut)},
	{"serverOut", "Ljava/io/OutputStream;", nullptr, $VOLATILE, $field(ProxyServer$Connection, serverOut)},
	{"CR", "I", nullptr, $STATIC | $FINAL, $constField(ProxyServer$Connection, CR)},
	{"LF", "I", nullptr, $STATIC | $FINAL, $constField(ProxyServer$Connection, LF)},
	{"closing", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ProxyServer$Connection, closing)},
	{}
};

$MethodInfo _ProxyServer$Connection_MethodInfo_[] = {
	{"<init>", "(LProxyServer;Ljava/nio/channels/SocketChannel;I)V", nullptr, 0, $method(static_cast<void(ProxyServer$Connection::*)($ProxyServer*,$SocketChannel*,int32_t)>(&ProxyServer$Connection::init$)), "java.io.IOException"},
	{"authorized", "(LProxyServer$Credentials;Ljava/util/List;)Z", "(LProxyServer$Credentials;Ljava/util/List<Ljava/lang/String;>;)Z", $PRIVATE, $method(static_cast<bool(ProxyServer$Connection::*)($ProxyServer$Credentials*,$List*)>(&ProxyServer$Connection::authorized))},
	{"awaitCompletion", "()V", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"closeConnection", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"commonInit", "(Ljava/lang/String;I)V", nullptr, $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"doProxy", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/String;Z)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;Z)V", 0, nullptr, "java.io.IOException"},
	{"doTunnel", "(Ljava/lang/String;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"drain", "(Ljava/nio/channels/SocketChannel;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ProxyServer$Connection::*)($SocketChannel*)>(&ProxyServer$Connection::drain)), "java.io.IOException"},
	{"findCRLF", "([B)I", nullptr, 0},
	{"findFirst", "(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;)Ljava/lang/String;", 0},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$authorized$0", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*)>(&ProxyServer$Connection::lambda$authorized$0))},
	{"lambda$findFirst$1", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$String*)>(&ProxyServer$Connection::lambda$findFirst$1))},
	{"lambda$findFirst$2", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*,$String*)>(&ProxyServer$Connection::lambda$findFirst$2))},
	{"lambda$proxyCommon$3", "(Z)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ProxyServer$Connection::*)(bool)>(&ProxyServer$Connection::lambda$proxyCommon$3))},
	{"lambda$proxyCommon$4", "(Z)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ProxyServer$Connection::*)(bool)>(&ProxyServer$Connection::lambda$proxyCommon$4))},
	{"proxyCommon", "(Z)V", nullptr, $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"readHeaders", "(Ljava/io/InputStream;)[B", nullptr, 0, nullptr, "java.io.IOException"},
	{"running", "()Z", nullptr, 0},
	{"shouldCloseAfter407", "(Ljava/util/List;)Z", "(Ljava/util/List<Ljava/lang/String;>;)Z", $PRIVATE, $method(static_cast<bool(ProxyServer$Connection::*)($List*)>(&ProxyServer$Connection::shouldCloseAfter407)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProxyServer$Connection_InnerClassesInfo_[] = {
	{"ProxyServer$Connection", "ProxyServer", "Connection", 0},
	{}
};

$ClassInfo _ProxyServer$Connection_ClassInfo_ = {
	$ACC_SUPER,
	"ProxyServer$Connection",
	"java.lang.Object",
	nullptr,
	_ProxyServer$Connection_FieldInfo_,
	_ProxyServer$Connection_MethodInfo_,
	nullptr,
	nullptr,
	_ProxyServer$Connection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ProxyServer"
};

$Object* allocate$ProxyServer$Connection($Class* clazz) {
	return $of($alloc(ProxyServer$Connection));
}

void ProxyServer$Connection::init$($ProxyServer* this$0, $SocketChannel* s, int32_t id) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	this->id = id;
	$set(this, clientSocket, s);
	$set(this, clientIn, $new($BufferedInputStream, $($nc($($nc(s)->socket()))->getInputStream())));
	$set(this, clientOut, $nc($($nc(s)->socket()))->getOutputStream());
}

$bytes* ProxyServer$Connection::readHeaders($InputStream* is) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, outbuffer, $new($bytes, 8000));
	int32_t crlfcount = 0;
	int32_t bytecount = 0;
	int32_t c = 0;
	while ((c = $nc(is)->read()) != -1 && bytecount < outbuffer->length) {
		outbuffer->set(bytecount++, (int8_t)c);
		if (this->this$0->debug) {
			$nc($System::out)->write(c);
		}
		if (c == ProxyServer$Connection::CR || c == ProxyServer$Connection::LF) {
			switch (crlfcount) {
			case 0:
				{
					if (c == ProxyServer$Connection::CR) {
						++crlfcount;
					}
					break;
				}
			case 1:
				{
					if (c == ProxyServer$Connection::LF) {
						++crlfcount;
					}
					break;
				}
			case 2:
				{
					if (c == ProxyServer$Connection::CR) {
						++crlfcount;
					}
					break;
				}
			case 3:
				{
					if (c == ProxyServer$Connection::LF) {
						++crlfcount;
					}
					break;
				}
			}
		} else {
			crlfcount = 0;
		}
		if (crlfcount == 4) {
			break;
		}
	}
	$var($bytes, ret, $new($bytes, bytecount));
	$System::arraycopy(outbuffer, 0, ret, 0, bytecount);
	return ret;
}

bool ProxyServer$Connection::running() {
	bool var$0 = $nc(this->out)->isAlive();
	return var$0 || $nc(this->in)->isAlive();
}

void ProxyServer$Connection::close() {
	$synchronized(this) {
		this->closing = true;
		if (this->this$0->debug) {
			$nc($System::out)->println($$str({"Proxy: closing connection {"_s, this, "}"_s}));
		}
		if (this->serverSocket != nullptr) {
			$nc(this->serverSocket)->close();
		}
		if (this->clientSocket != nullptr) {
			$nc(this->clientSocket)->close();
		}
	}
}

void ProxyServer$Connection::awaitCompletion() {
	try {
		if (this->in != nullptr) {
			$nc(this->in)->join();
		}
		if (this->out != nullptr) {
			$nc(this->out)->join();
		}
	} catch ($InterruptedException& e) {
	}
}

int32_t ProxyServer$Connection::findCRLF($bytes* b) {
	for (int32_t i = 0; i < $nc(b)->length - 1; ++i) {
		if (b->get(i) == ProxyServer$Connection::CR && b->get(i + 1) == ProxyServer$Connection::LF) {
			return i;
		}
	}
	return -1;
}

bool ProxyServer$Connection::authorized($ProxyServer$Credentials* credentials, $List* requestHeaders) {
	$useLocalCurrentObjectStackCache();
	$var($List, authorization, $cast($List, $nc($($nc($($nc(requestHeaders)->stream()))->filter(static_cast<$Predicate*>($$new(ProxyServer$Connection$$Lambda$lambda$authorized$0)))))->collect($($Collectors::toList()))));
	if ($nc(authorization)->isEmpty()) {
		return false;
	}
	if ($nc(authorization)->size() != 1) {
		$throwNew($IllegalStateException, $$str({"Authorization unexpected count:"_s, authorization}));
	}
	$var($String, value, $($nc(($cast($String, $($nc(authorization)->get(0)))))->substring("proxy-authorization"_s->length()))->trim());
	if (!value->startsWith(":"_s)) {
		$throwNew($IllegalStateException, $$str({"Authorization malformed: "_s, value}));
	}
	$assign(value, $(value->substring(1))->trim());
	if (!value->startsWith("Basic "_s)) {
		$throwNew($IllegalStateException, $$str({"Authorization not Basic: "_s, value}));
	}
	$assign(value, value->substring("Basic "_s->length()));
	$init($StandardCharsets);
	$var($String, values, $new($String, $($nc($($Base64::getDecoder()))->decode(value)), $StandardCharsets::UTF_8));
	int32_t sep = values->indexOf((int32_t)u':');
	if (sep < 1) {
		$throwNew($IllegalStateException, $$str({"Authorization no colon: "_s, values}));
	}
	$var($String, name, values->substring(0, sep));
	$var($String, password, values->substring(sep + 1));
	bool var$0 = name->equals($($nc(credentials)->name()));
	if (var$0 && password->equals($($nc(credentials)->password()))) {
		return true;
	}
	return false;
}

void ProxyServer$Connection::init() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, buf, nullptr);
		$var($String, host, nullptr);
		$var($List, headers, nullptr);
		bool authorized = false;
		while (true) {
			$assign(buf, readHeaders(this->clientIn));
			if (findCRLF(buf) == -1) {
				if (this->this$0->debug) {
					$init($StandardCharsets);
					$nc($System::out)->println($$str({"Proxy: no CRLF closing, buf contains:["_s, $$new($String, buf, $StandardCharsets::ISO_8859_1), "]"_s}));
				}
				close();
				return;
			}
			$init($StandardCharsets);
			$assign(headers, $Arrays::asList($($$new($String, buf, $StandardCharsets::ISO_8859_1)->split("\r\n"_s))));
			$assign(host, findFirst(headers, "host"_s));
			if (this->this$0->credentials != nullptr) {
				if (!this->authorized(this->this$0->credentials, headers)) {
					$var($String, resp, "HTTP/1.1 407 Proxy Authentication Required\r\nContent-Length: 0\r\nProxy-Authenticate: Basic realm=\"proxy realm\"\r\n\r\n"_s);
					$init($StandardSocketOptions);
					$nc(this->clientSocket)->setOption($StandardSocketOptions::TCP_NODELAY, $($Boolean::valueOf(true)));
					$nc(this->clientSocket)->setOption($StandardSocketOptions::SO_LINGER, $($Integer::valueOf(2)));
					$var($ByteBuffer, buffer, $ByteBuffer::wrap($(resp->getBytes($StandardCharsets::ISO_8859_1))));
					$nc(this->clientSocket)->write(buffer);
					if (this->this$0->debug) {
						$var($Integer, linger, $cast($Integer, $nc(this->clientSocket)->getOption($StandardSocketOptions::SO_LINGER)));
						$var($Boolean, nodelay, $cast($Boolean, $nc(this->clientSocket)->getOption($StandardSocketOptions::TCP_NODELAY)));
						int32_t var$0 = $nc(buffer)->position();
						$nc($System::out)->printf("Proxy: unauthorized; 407 sent (%s/%s), linger: %s, nodelay: %s%n"_s, $$new($ObjectArray, {
							$($of($Integer::valueOf($nc(buffer)->position()))),
							$($of($Integer::valueOf(var$0 + buffer->remaining()))),
							$of(linger),
							$of(nodelay)
						}));
					}
					if (shouldCloseAfter407(headers)) {
						closeConnection();
						return;
					}
					continue;
				}
				authorized = true;
				break;
			} else {
				break;
			}
		}
		int32_t p = findCRLF(buf);
		$init($StandardCharsets);
		$var($String, cmd, $new($String, buf, 0, p, $StandardCharsets::ISO_8859_1));
		$var($StringArray, params, cmd->split(" "_s));
		if ($nc(params->get(0))->equals("CONNECT"_s)) {
			doTunnel(params->get(1));
		} else {
			doProxy(params->get(1), cmd, headers, host, authorized);
		}
	} catch ($Throwable& e) {
		if (this->this$0->debug) {
			$nc($System::out)->println($$str({"Proxy: "_s, e}));
			e->printStackTrace();
		}
		try {
			close();
		} catch ($IOException& e1) {
		}
	}
}

$String* ProxyServer$Connection::findFirst($List* headers, $String* key) {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($String, h, $str({$($nc(key)->toLowerCase($Locale::ROOT)), ": "_s}));
	return $cast($String, $nc($($nc($($nc($($nc($($nc($($nc(headers)->stream()))->filter(static_cast<$Predicate*>($$new(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, h)))))->findFirst()))->map(static_cast<$Function*>($$new(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, h)))))->map(static_cast<$Function*>($$new(ProxyServer$Connection$$Lambda$trim$3)))))->orElse(nullptr));
}

int64_t ProxyServer$Connection::drain($SocketChannel* socket) {
	$useLocalCurrentObjectStackCache();
	bool isBlocking = $nc(socket)->isBlocking();
	if (isBlocking) {
		socket->configureBlocking(false);
	}
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			$var($ByteBuffer, buffer, $ByteBuffer::allocate(1024));
			int32_t read = 0;
			int64_t drained = 0;
			while ((read = socket->read(buffer)) > 0) {
				drained += read;
				$nc(buffer)->position(0);
				buffer->limit(buffer->capacity());
			}
			var$2 = drained;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (isBlocking) {
				socket->configureBlocking(true);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ProxyServer$Connection::closeConnection() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->debug) {
		$init($StandardSocketOptions);
		$var($Integer, linger, $cast($Integer, $nc(this->clientSocket)->getOption($StandardSocketOptions::SO_LINGER)));
		$var($Boolean, nodelay, $cast($Boolean, $nc(this->clientSocket)->getOption($StandardSocketOptions::TCP_NODELAY)));
		$nc($System::out)->printf("Proxy: closing connection id=%s, linger: %s, nodelay: %s%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->id))),
			$of(linger),
			$of(nodelay)
		}));
	}
	int64_t drained = drain(this->clientSocket);
	if (this->this$0->debug) {
		$nc($System::out)->printf("Proxy: drained: %s%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(drained)))}));
	}
	$nc(this->clientSocket)->shutdownOutput();
	try {
		if ($ProxyServer::isWindows()) {
			$Thread::sleep(500);
		}
	} catch ($InterruptedException& x) {
	}
	$nc(this->clientSocket)->shutdownInput();
	close();
}

bool ProxyServer$Connection::shouldCloseAfter407($List* headers) {
	$useLocalCurrentObjectStackCache();
	$var($String, te, findFirst(headers, "transfer-encoding"_s));
	if (te != nullptr) {
		if (this->this$0->debug) {
			$nc($System::out)->println("Proxy: transfer-encoding with 407, closing connection"_s);
		}
		return true;
	}
	$var($String, cl, findFirst(headers, "content-length"_s));
	int32_t n = -1;
	try {
		n = $Integer::parseInt(cl);
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy: content-length: %d%n"_s, $$new($ObjectArray, {$of(cl)}));
		}
	} catch ($IllegalFormatException& x) {
		if (this->this$0->debug) {
			$nc($System::out)->println("Proxy: bad content-length, closing connection"_s);
		}
		return true;
	}
	if (n > 0 || n < -1) {
		if (this->this$0->debug) {
			$nc($System::out)->println("Proxy: request body with 407, closing connection"_s);
		}
		return true;
	}
	$var($String, cmdline, $cast($String, $nc(headers)->get(0)));
	int32_t m = $nc(cmdline)->indexOf((int32_t)u' ');
	$var($String, method, (m > 0) ? cmdline->substring(0, m) : ($String*)nullptr);
	$var($List, nobody, $List::of("GET"_s, "HEAD"_s));
	if (n == 0 || $nc(nobody)->contains($($Integer::valueOf(m)))) {
		int32_t available = $nc(this->clientIn)->available();
		int64_t drained = drain(this->clientSocket);
		if (drained > 0 || available > 0) {
			if (this->this$0->debug) {
				$nc($System::out)->printf("Proxy: unexpected bytes (%d) with 407, closing connection%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(drained + available)))}));
			}
			return true;
		}
		return false;
	} else {
		if (this->this$0->debug) {
			$nc($System::out)->println("Proxy: possible body with 407, closing connection"_s);
		}
		return true;
	}
}

void ProxyServer$Connection::doProxy($String* dest$renamed, $String* cmdLine$renamed, $List* headers, $String* host, bool authorized) {
	$useLocalCurrentObjectStackCache();
	$var($String, cmdLine, cmdLine$renamed);
	$var($String, dest, dest$renamed);
	try {
		$var($URI, uri, $new($URI, dest));
		if (!uri->isAbsolute()) {
			if (host == nullptr) {
				$throwNew($IOException, "request URI not absolute"_s);
			} else {
				$assign(uri, $new($URI, $$str({"http://"_s, host, dest})));
			}
		}
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy: uri=%s%n"_s, $$new($ObjectArray, {$of(uri)}));
		}
		$assign(dest, uri->getAuthority());
		int32_t sp = $nc(cmdLine)->indexOf((int32_t)u' ');
		$var($String, method, cmdLine->substring(0, sp));
		$assign(cmdLine, $str({method, " "_s, $(uri->getPath()), " HTTP/1.1"_s}));
		commonInit(dest, 80);
		$var($OutputStream, sout, nullptr);
		$synchronized(this) {
			if (this->closing) {
				return;
			}
			$assign(sout, this->serverOut);
		}
		$var($bytes, CRLF, $new($bytes, {
			(int8_t)u'\r',
			(int8_t)u'\n'
		}));
		$init($StandardCharsets);
		$nc(sout)->write($(cmdLine->getBytes($StandardCharsets::ISO_8859_1)));
		sout->write(CRLF);
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy Forwarding: %s%n"_s, $$new($ObjectArray, {$of(cmdLine)}));
		}
		for (int32_t l = 1; l < $nc(headers)->size(); ++l) {
			$var($String, s, $cast($String, headers->get(l)));
			$init($Locale);
			if (!authorized || !$($nc(s)->toLowerCase($Locale::ROOT))->startsWith("proxy-authorization"_s)) {
				sout->write($(s->getBytes($StandardCharsets::ISO_8859_1)));
				sout->write(CRLF);
				if (this->this$0->debug) {
					$nc($System::out)->printf("Proxy Forwarding: %s%n"_s, $$new($ObjectArray, {$of(s)}));
				}
			} else if (this->this$0->debug) {
				$nc($System::out)->printf("Proxy Skipping: %s%n"_s, $$new($ObjectArray, {$of(s)}));
			}
		}
		sout->write(CRLF);
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy Forwarding: %n"_s, $$new($ObjectArray, 0));
		}
		proxyCommon(this->this$0->debug);
	} catch ($URISyntaxException& e) {
		$throwNew($IOException, static_cast<$Throwable*>(e));
	}
}

void ProxyServer$Connection::commonInit($String* dest, int32_t defaultPort) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->closing) {
			return;
		}
		int32_t port = 0;
		$var($StringArray, hostport, $nc(dest)->split(":"_s));
		if (hostport->length == 1) {
			port = defaultPort;
		} else {
			port = $Integer::parseInt(hostport->get(1));
		}
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy: connecting to (%s/%d)\n"_s, $$new($ObjectArray, {
				$of(hostport->get(0)),
				$($of($Integer::valueOf(port)))
			}));
		}
		$set(this, serverSocket, $SocketChannel::open());
		$nc(this->serverSocket)->connect($$new($InetSocketAddress, hostport->get(0), port));
		$set(this, serverOut, $nc($($nc(this->serverSocket)->socket()))->getOutputStream());
		$set(this, serverIn, $new($BufferedInputStream, $($nc($($nc(this->serverSocket)->socket()))->getInputStream())));
	}
}

void ProxyServer$Connection::proxyCommon(bool log) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->closing) {
			return;
		}
		$set(this, out, $new($Thread, static_cast<$Runnable*>($$new(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, this, log))));
		$set(this, in, $new($Thread, static_cast<$Runnable*>($$new(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, this, log))));
		$nc(this->out)->setName("Proxy-outbound"_s);
		$nc(this->out)->setDaemon(true);
		$nc(this->in)->setDaemon(true);
		$nc(this->in)->setName("Proxy-inbound"_s);
		$nc(this->out)->start();
		$nc(this->in)->start();
	}
}

void ProxyServer$Connection::doTunnel($String* dest) {
	if (this->closing) {
		return;
	}
	commonInit(dest, 443);
	$nc(this->clientOut)->write($("HTTP/1.1 200 OK\r\n\r\n"_s->getBytes()));
	proxyCommon(false);
}

$String* ProxyServer$Connection::toString() {
	return $str({"Proxy connection "_s, $$str(this->id), ", client sock:"_s, this->clientSocket});
}

void ProxyServer$Connection::lambda$proxyCommon$4(bool log) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, bb, $new($bytes, 8000));
		int32_t n = 0;
		int32_t resp = 0;
		while ((n = $nc(this->serverIn)->read(bb)) != -1) {
			$nc(this->clientOut)->write(bb, 0, n);
			resp += n;
			if (log) {
				$init($StandardCharsets);
				$nc($System::out)->printf("Proxy Forwarding [response]: %s%n"_s, $$new($ObjectArray, {$of($$new($String, bb, 0, n, $StandardCharsets::UTF_8))}));
			}
			if (log) {
				$nc($System::out)->printf("Proxy Forwarding [response]: total %d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(resp)))}));
			}
		}
		this->closing = true;
		$nc(this->serverSocket)->close();
		$nc(this->clientSocket)->close();
	} catch ($IOException& e) {
		if (!this->closing && this->this$0->debug) {
			$nc($System::out)->println($$str({"Proxy: "_s, e}));
			e->printStackTrace();
		}
	}
}

void ProxyServer$Connection::lambda$proxyCommon$3(bool log) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, bb, $new($bytes, 8000));
		int32_t n = 0;
		int32_t body = 0;
		while ((n = $nc(this->clientIn)->read(bb)) != -1) {
			$nc(this->serverOut)->write(bb, 0, n);
			body += n;
			if (log) {
				$nc($System::out)->printf("Proxy Forwarding [request body]: total %d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(body)))}));
			}
		}
		this->closing = true;
		$nc(this->serverSocket)->close();
		$nc(this->clientSocket)->close();
	} catch ($IOException& e) {
		if (!this->closing && this->this$0->debug) {
			$nc($System::out)->println($$str({"Proxy: "_s, e}));
			e->printStackTrace();
		}
	}
}

$String* ProxyServer$Connection::lambda$findFirst$2($String* h, $String* s) {
	return $nc(s)->substring($nc(h)->length());
}

bool ProxyServer$Connection::lambda$findFirst$1($String* h, $String* s) {
	$init($Locale);
	return $($nc(s)->toLowerCase($Locale::ROOT))->startsWith(h);
}

bool ProxyServer$Connection::lambda$authorized$0($String* n) {
	$init($Locale);
	return $($nc(n)->toLowerCase($Locale::US))->startsWith("proxy-authorization"_s);
}

ProxyServer$Connection::ProxyServer$Connection() {
}

$Class* ProxyServer$Connection::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ProxyServer$Connection$$Lambda$lambda$authorized$0::classInfo$.name)) {
			return ProxyServer$Connection$$Lambda$lambda$authorized$0::load$(name, initialize);
		}
		if (name->equals(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::classInfo$.name)) {
			return ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::load$(name, initialize);
		}
		if (name->equals(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::classInfo$.name)) {
			return ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::load$(name, initialize);
		}
		if (name->equals(ProxyServer$Connection$$Lambda$trim$3::classInfo$.name)) {
			return ProxyServer$Connection$$Lambda$trim$3::load$(name, initialize);
		}
		if (name->equals(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::classInfo$.name)) {
			return ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::load$(name, initialize);
		}
		if (name->equals(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::classInfo$.name)) {
			return ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::load$(name, initialize);
		}
	}
	$loadClass(ProxyServer$Connection, name, initialize, &_ProxyServer$Connection_ClassInfo_, allocate$ProxyServer$Connection);
	return class$;
}

$Class* ProxyServer$Connection::class$ = nullptr;