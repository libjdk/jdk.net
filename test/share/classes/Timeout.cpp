#include <Timeout.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
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
#include <java/net/http/HttpTimeoutException.h>
#include <java/time/Duration.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionException.h>
#include <javax/net/ServerSocketFactory.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLServerSocket.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <javax/net/ssl/SSLSocket.h>
#include <jcpp.h>

#undef HTTP_2
#undef KEYSTORE
#undef PASSWORD
#undef RANDOM_PORT
#undef TIMEOUT

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
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
using $HttpTimeoutException = ::java::net::http::HttpTimeoutException;
using $Duration = ::java::time::Duration;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletionException = ::java::util::concurrent::CompletionException;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLServerSocket = ::javax::net::ssl::SSLServerSocket;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;
using $SSLSocket = ::javax::net::ssl::SSLSocket;

class Timeout$$Lambda$lambda$test$0 : public $Runnable {
	$class(Timeout$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($SSLServerSocket* ssocket) {
		$set(this, ssocket, ssocket);
	}
	virtual void run() override {
		Timeout::lambda$test$0(ssocket);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Timeout$$Lambda$lambda$test$0>());
	}
	$SSLServerSocket* ssocket = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Timeout$$Lambda$lambda$test$0::fieldInfos[2] = {
	{"ssocket", "Ljavax/net/ssl/SSLServerSocket;", nullptr, $PUBLIC, $field(Timeout$$Lambda$lambda$test$0, ssocket)},
	{}
};
$MethodInfo Timeout$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "(Ljavax/net/ssl/SSLServerSocket;)V", nullptr, $PUBLIC, $method(static_cast<void(Timeout$$Lambda$lambda$test$0::*)($SSLServerSocket*)>(&Timeout$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Timeout$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Timeout$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Timeout$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(Timeout$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Timeout$$Lambda$lambda$test$0::class$ = nullptr;

$FieldInfo _Timeout_FieldInfo_[] = {
	{"RANDOM_PORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timeout, RANDOM_PORT)},
	{"TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timeout, TIMEOUT)},
	{"KEYSTORE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Timeout, KEYSTORE)},
	{"PASSWORD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Timeout, PASSWORD)},
	{"ready", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Timeout, ready)},
	{}
};

$MethodInfo _Timeout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Timeout::*)()>(&Timeout::init$))},
	{"connect", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Timeout::connect)), "java.lang.Exception"},
	{"connectAsync", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Timeout::connectAsync)), "java.lang.Exception"},
	{"lambda$test$0", "(Ljavax/net/ssl/SSLServerSocket;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($SSLServerSocket*)>(&Timeout::lambda$test$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Timeout::main)), "java.lang.Exception"},
	{"test", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&Timeout::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _Timeout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Timeout",
	"java.lang.Object",
	nullptr,
	_Timeout_FieldInfo_,
	_Timeout_MethodInfo_
};

$Object* allocate$Timeout($Class* clazz) {
	return $of($alloc(Timeout));
}

$String* Timeout::KEYSTORE = nullptr;
$String* Timeout::PASSWORD = nullptr;
$volatile(bool) Timeout::ready = false;

void Timeout::init$() {
}

void Timeout::main($StringArray* args) {
	$init(Timeout);
	test(false);
	test(true);
}

void Timeout::test(bool async) {
	$init(Timeout);
	$useLocalCurrentObjectStackCache();
	$System::setProperty("javax.net.ssl.keyStore"_s, Timeout::KEYSTORE);
	$System::setProperty("javax.net.ssl.keyStorePassword"_s, Timeout::PASSWORD);
	$System::setProperty("javax.net.ssl.trustStore"_s, Timeout::KEYSTORE);
	$System::setProperty("javax.net.ssl.trustStorePassword"_s, Timeout::PASSWORD);
	$var($SSLServerSocketFactory, factory, $cast($SSLServerSocketFactory, $SSLServerSocketFactory::getDefault()));
	{
		$var($SSLServerSocket, ssocket, $cast($SSLServerSocket, $nc(factory)->createServerSocket()));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(ssocket)->setReuseAddress(false);
					ssocket->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), Timeout::RANDOM_PORT));
					$var($Thread, server, $new($Thread, static_cast<$Runnable*>($$new(Timeout$$Lambda$lambda$test$0, ssocket))));
					server->setDaemon(true);
					server->start();
					do {
						$Thread::sleep(1000);
					} while (!Timeout::ready);
					$var($String, uri, $str({"https://localhost:"_s, $$str(ssocket->getLocalPort())}));
					if (async) {
						$nc($System::out)->println($$str({uri, ": Trying to connect asynchronously"_s}));
						connectAsync(uri);
					} else {
						$nc($System::out)->println($$str({uri, ": Trying to connect synchronously"_s}));
						connect(uri);
					}
				} catch ($Throwable& t$) {
					if (ssocket != nullptr) {
						try {
							ssocket->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (ssocket != nullptr) {
					ssocket->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Timeout::connect($String* server) {
	$init(Timeout);
	$useLocalCurrentObjectStackCache();
	try {
		$init($HttpClient$Version);
		$var($HttpClient, client, $nc($($nc($($HttpClient::newBuilder()))->version($HttpClient$Version::HTTP_2)))->build());
		$var($HttpRequest, request, $nc($($nc($($nc($($HttpRequest::newBuilder($$new($URI, server))))->timeout($($Duration::ofMillis(Timeout::TIMEOUT)))))->POST($($HttpRequest$BodyPublishers::ofString("body"_s)))))->build());
		$var($HttpResponse, response, $nc(client)->send(request, $($HttpResponse$BodyHandlers::ofString())));
		$nc($System::out)->println($$str({"Received unexpected reply: "_s, $$str($nc(response)->statusCode())}));
		$throwNew($RuntimeException, "unexpected successful connection"_s);
	} catch ($HttpTimeoutException& e) {
		$nc($System::out)->println($$str({"expected exception: "_s, e}));
	}
}

void Timeout::connectAsync($String* server) {
	$init(Timeout);
	$useLocalCurrentObjectStackCache();
	try {
		$init($HttpClient$Version);
		$var($HttpClient, client, $nc($($nc($($HttpClient::newBuilder()))->version($HttpClient$Version::HTTP_2)))->build());
		$var($HttpRequest, request, $nc($($nc($($nc($($HttpRequest::newBuilder($$new($URI, server))))->timeout($($Duration::ofMillis(Timeout::TIMEOUT)))))->POST($($HttpRequest$BodyPublishers::ofString("body"_s)))))->build());
		$var($HttpResponse, response, $cast($HttpResponse, $nc($($nc(client)->sendAsync(request, $($HttpResponse$BodyHandlers::ofString()))))->join()));
		$nc($System::out)->println($$str({"Received unexpected reply: "_s, $$str($nc(response)->statusCode())}));
		$throwNew($RuntimeException, "unexpected successful connection"_s);
	} catch ($CompletionException& e) {
		if ($instanceOf($HttpTimeoutException, $(e->getCause()))) {
			$nc($System::out)->println($$str({"expected exception: "_s, $(e->getCause())}));
		} else {
			$throwNew($RuntimeException, $$str({"Unexpected exception received: "_s, $(e->getCause())}), e);
		}
	}
}

void Timeout::lambda$test$0($SSLServerSocket* ssocket) {
	$init(Timeout);
	$useLocalCurrentObjectStackCache();
	while (true) {
		$nc($System::out)->println("server: ready"_s);
		$var($SSLParameters, params, $nc(ssocket)->getSSLParameters());
		$nc(params)->setApplicationProtocols($$new($StringArray, {"h2"_s}));
		ssocket->setSSLParameters(params);
		Timeout::ready = true;
		try {
			$var($SSLSocket, socket, $cast($SSLSocket, ssocket->accept()));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc($System::out)->println("server: accepted"_s);
						while (true) {
							$nc($($nc(socket)->getInputStream()))->read();
						}
					} catch ($Throwable& t$) {
						if (socket != nullptr) {
							try {
								socket->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (socket != nullptr) {
						socket->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} catch ($IOException& e) {
			$nc($System::out)->println($$str({"server: exception: "_s, e}));
		}
	}
}

void clinit$Timeout($Class* class$) {
	$assignStatic(Timeout::PASSWORD, "password"_s);
	$init($File);
	$assignStatic(Timeout::KEYSTORE, $str({$($System::getProperty("test.src"_s)), $File::separator, "keystore.p12"_s}));
	Timeout::ready = false;
}

Timeout::Timeout() {
}

$Class* Timeout::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Timeout$$Lambda$lambda$test$0::classInfo$.name)) {
			return Timeout$$Lambda$lambda$test$0::load$(name, initialize);
		}
	}
	$loadClass(Timeout, name, initialize, &_Timeout_ClassInfo_, clinit$Timeout, allocate$Timeout);
	return class$;
}

$Class* Timeout::class$ = nullptr;