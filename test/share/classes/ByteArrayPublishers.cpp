#include <ByteArrayPublishers.h>

#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest$BodyPublishers.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/ArrayList.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

#undef BODY_PUBLISHER
#undef HTTP_1_1
#undef LOOPS

using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$BodyPublisher = ::java::net::http::HttpRequest$BodyPublisher;
using $HttpRequest$BodyPublishers = ::java::net::http::HttpRequest$BodyPublishers;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AbstractQueue = ::java::util::AbstractQueue;
using $ArrayList = ::java::util::ArrayList;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $BiFunction = ::java::util::function::BiFunction;

class ByteArrayPublishers$$Lambda$lambda$main$0 : public $HttpHandler {
	$class(ByteArrayPublishers$$Lambda$lambda$main$0, $NO_CLASS_INIT, $HttpHandler)
public:
	void init$() {
	}
	virtual void handle($HttpExchange* e) override {
		ByteArrayPublishers::lambda$main$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ByteArrayPublishers$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ByteArrayPublishers$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ByteArrayPublishers$$Lambda$lambda$main$0::*)()>(&ByteArrayPublishers$$Lambda$lambda$main$0::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ByteArrayPublishers$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ByteArrayPublishers$$Lambda$lambda$main$0",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	nullptr,
	methodInfos
};
$Class* ByteArrayPublishers$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(ByteArrayPublishers$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ByteArrayPublishers$$Lambda$lambda$main$0::class$ = nullptr;

class ByteArrayPublishers$$Lambda$lambda$main$1$1 : public $BiFunction {
	$class(ByteArrayPublishers$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($LinkedBlockingQueue* results) {
		$set(this, results, results);
	}
	virtual $Object* apply(Object$* v, Object$* t) override {
		 return $of(ByteArrayPublishers::lambda$main$1(results, $cast($HttpResponse, v), $cast($Throwable, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ByteArrayPublishers$$Lambda$lambda$main$1$1>());
	}
	$LinkedBlockingQueue* results = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ByteArrayPublishers$$Lambda$lambda$main$1$1::fieldInfos[2] = {
	{"results", "Ljava/util/concurrent/LinkedBlockingQueue;", nullptr, $PUBLIC, $field(ByteArrayPublishers$$Lambda$lambda$main$1$1, results)},
	{}
};
$MethodInfo ByteArrayPublishers$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/LinkedBlockingQueue;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteArrayPublishers$$Lambda$lambda$main$1$1::*)($LinkedBlockingQueue*)>(&ByteArrayPublishers$$Lambda$lambda$main$1$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ByteArrayPublishers$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ByteArrayPublishers$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* ByteArrayPublishers$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(ByteArrayPublishers$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ByteArrayPublishers$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _ByteArrayPublishers_FieldInfo_[] = {
	{"BODY_PUBLISHER", "Ljava/net/http/HttpRequest$BodyPublisher;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ByteArrayPublishers, BODY_PUBLISHER)},
	{"LOOPS", "I", nullptr, $STATIC, $staticField(ByteArrayPublishers, LOOPS)},
	{}
};

$MethodInfo _ByteArrayPublishers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ByteArrayPublishers::*)()>(&ByteArrayPublishers::init$))},
	{"createClient", "()Ljava/net/http/HttpClient;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$HttpClient*(*)()>(&ByteArrayPublishers::createClient))},
	{"createRequest", "(Ljava/net/URI;)Ljava/net/http/HttpRequest;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$HttpRequest*(*)($URI*)>(&ByteArrayPublishers::createRequest)), "java.net.URISyntaxException"},
	{"lambda$main$0", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($HttpExchange*)>(&ByteArrayPublishers::lambda$main$0)), "java.io.IOException"},
	{"lambda$main$1", "(Ljava/util/concurrent/LinkedBlockingQueue;Ljava/net/http/HttpResponse;Ljava/lang/Throwable;)Ljava/net/http/HttpResponse;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpResponse*(*)($LinkedBlockingQueue*,$HttpResponse*,$Throwable*)>(&ByteArrayPublishers::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ByteArrayPublishers::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ByteArrayPublishers_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ByteArrayPublishers",
	"java.lang.Object",
	nullptr,
	_ByteArrayPublishers_FieldInfo_,
	_ByteArrayPublishers_MethodInfo_
};

$Object* allocate$ByteArrayPublishers($Class* clazz) {
	return $of($alloc(ByteArrayPublishers));
}

$HttpRequest$BodyPublisher* ByteArrayPublishers::BODY_PUBLISHER = nullptr;
int32_t ByteArrayPublishers::LOOPS = 0;

void ByteArrayPublishers::init$() {
}

void ByteArrayPublishers::main($StringArray* args) {
	$init(ByteArrayPublishers);
	$useLocalCurrentObjectStackCache();
	$var($HttpServer, server, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($InetAddress, loopBack, $InetAddress::getLoopbackAddress());
			$var($String, lpBackStr, $nc(loopBack)->getHostAddress());
			$var($InetSocketAddress, serverAddr, $new($InetSocketAddress, loopBack, 0));
			$assign(server, $HttpServer::create(serverAddr, 500));
			$nc(server)->createContext("/"_s, static_cast<$HttpHandler*>($$new(ByteArrayPublishers$$Lambda$lambda$main$0)));
			server->start();
			$var($InetSocketAddress, address, server->getAddress());
			$var($URI, dest, $new($URI, $$str({"http://"_s, lpBackStr, ":"_s, $($Integer::toString($nc(address)->getPort())), "/"_s})));
			$var($HttpClient, client, createClient());
			$var($ArrayList, futures, $new($ArrayList, ByteArrayPublishers::LOOPS));
			$var($LinkedBlockingQueue, results, $new($LinkedBlockingQueue));
			for (int32_t i = 0; i < ByteArrayPublishers::LOOPS; ++i) {
				$var($HttpRequest, var$1, createRequest(dest));
				futures->add($($nc($($nc(client)->sendAsync(var$1, $($HttpResponse$BodyHandlers::discarding()))))->handle(static_cast<$BiFunction*>($$new(ByteArrayPublishers$$Lambda$lambda$main$1$1, results)))));
			}
			for (int32_t i = 0; i < ByteArrayPublishers::LOOPS; ++i) {
				$var($Object, o, results->take());
				if ($instanceOf($Exception, o)) {
					$throwNew($RuntimeException, $cast($Exception, o));
				}
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$nc(server)->stop(1);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$HttpRequest* ByteArrayPublishers::createRequest($URI* uri) {
	$init(ByteArrayPublishers);
	$useLocalCurrentObjectStackCache();
	$init($HttpClient$Version);
	$var($HttpRequest$Builder, builder, $nc($($nc($($HttpRequest::newBuilder(uri)))->method("POST"_s, ByteArrayPublishers::BODY_PUBLISHER)))->version($HttpClient$Version::HTTP_1_1));
	$nc(builder)->header("content-type"_s, "text/plain"_s);
	return builder->build();
}

$HttpClient* ByteArrayPublishers::createClient() {
	$init(ByteArrayPublishers);
	$useLocalCurrentObjectStackCache();
	$init($HttpClient$Version);
	return $nc($($nc($($HttpClient::newBuilder()))->version($HttpClient$Version::HTTP_1_1)))->build();
}

$HttpResponse* ByteArrayPublishers::lambda$main$1($LinkedBlockingQueue* results, $HttpResponse* v, $Throwable* t) {
	$init(ByteArrayPublishers);
	if (t != nullptr) {
		$nc(results)->add(t);
	} else {
		$nc(results)->add(v);
	}
	return nullptr;
}

void ByteArrayPublishers::lambda$main$0($HttpExchange* e) {
	$init(ByteArrayPublishers);
	$useLocalCurrentObjectStackCache();
	$nc($($nc(e)->getRequestBody()))->readAllBytes();
	$var($String, response, "Hello world"_s);
	e->sendResponseHeaders(200, response->length());
	$init($StandardCharsets);
	$nc($(e->getResponseBody()))->write($(response->getBytes($StandardCharsets::ISO_8859_1)));
	e->close();
}

void clinit$ByteArrayPublishers($Class* class$) {
	$assignStatic(ByteArrayPublishers::BODY_PUBLISHER, $HttpRequest$BodyPublishers::ofByteArray($("abcdefghijklmnopqrstuvwxyz"_s->getBytes())));
	ByteArrayPublishers::LOOPS = 100;
}

ByteArrayPublishers::ByteArrayPublishers() {
}

$Class* ByteArrayPublishers::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ByteArrayPublishers$$Lambda$lambda$main$0::classInfo$.name)) {
			return ByteArrayPublishers$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(ByteArrayPublishers$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return ByteArrayPublishers$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(ByteArrayPublishers, name, initialize, &_ByteArrayPublishers_ClassInfo_, clinit$ByteArrayPublishers, allocate$ByteArrayPublishers);
	return class$;
}

$Class* ByteArrayPublishers::class$ = nullptr;