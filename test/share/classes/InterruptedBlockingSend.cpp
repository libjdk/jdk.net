#include <InterruptedBlockingSend.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InterruptedException.h>
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
#include <java/net/URI.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
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
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;

class InterruptedBlockingSend$$Lambda$lambda$main$0 : public $Runnable {
	$class(InterruptedBlockingSend$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($HttpClient* client, $HttpRequest* request) {
		$set(this, client, client);
		$set(this, request, request);
	}
	virtual void run() override {
		InterruptedBlockingSend::lambda$main$0(client, request);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InterruptedBlockingSend$$Lambda$lambda$main$0>());
	}
	$HttpClient* client = nullptr;
	$HttpRequest* request = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo InterruptedBlockingSend$$Lambda$lambda$main$0::fieldInfos[3] = {
	{"client", "Ljava/net/http/HttpClient;", nullptr, $PUBLIC, $field(InterruptedBlockingSend$$Lambda$lambda$main$0, client)},
	{"request", "Ljava/net/http/HttpRequest;", nullptr, $PUBLIC, $field(InterruptedBlockingSend$$Lambda$lambda$main$0, request)},
	{}
};
$MethodInfo InterruptedBlockingSend$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpClient;Ljava/net/http/HttpRequest;)V", nullptr, $PUBLIC, $method(static_cast<void(InterruptedBlockingSend$$Lambda$lambda$main$0::*)($HttpClient*,$HttpRequest*)>(&InterruptedBlockingSend$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo InterruptedBlockingSend$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"InterruptedBlockingSend$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* InterruptedBlockingSend$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(InterruptedBlockingSend$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InterruptedBlockingSend$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _InterruptedBlockingSend_FieldInfo_[] = {
	{"throwable", "Ljava/lang/Throwable;", nullptr, $STATIC | $VOLATILE, $staticField(InterruptedBlockingSend, throwable)},
	{}
};

$MethodInfo _InterruptedBlockingSend_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InterruptedBlockingSend::*)()>(&InterruptedBlockingSend::init$))},
	{"lambda$main$0", "(Ljava/net/http/HttpClient;Ljava/net/http/HttpRequest;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($HttpClient*,$HttpRequest*)>(&InterruptedBlockingSend::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InterruptedBlockingSend::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _InterruptedBlockingSend_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InterruptedBlockingSend",
	"java.lang.Object",
	nullptr,
	_InterruptedBlockingSend_FieldInfo_,
	_InterruptedBlockingSend_MethodInfo_
};

$Object* allocate$InterruptedBlockingSend($Class* clazz) {
	return $of($alloc(InterruptedBlockingSend));
}

$volatile($Throwable*) InterruptedBlockingSend::throwable = nullptr;

void InterruptedBlockingSend::init$() {
}

void InterruptedBlockingSend::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($HttpClient, client, $HttpClient::newHttpClient());
	{
		$var($ServerSocket, ss, $new($ServerSocket));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					ss->setReuseAddress(false);
					ss->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
					int32_t port = ss->getLocalPort();
					$var($URI, uri, $new($URI, $$str({"http://localhost:"_s, $$str(port), "/"_s})));
					$var($HttpRequest, request, $nc($($HttpRequest::newBuilder(uri)))->build());
					$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new(InterruptedBlockingSend$$Lambda$lambda$main$0, client, request))));
					t->start();
					$Thread::sleep(5000);
					t->interrupt();
					t->join();
					$init(InterruptedBlockingSend);
					if (!($instanceOf($InterruptedException, InterruptedBlockingSend::throwable))) {
						$throwNew($RuntimeException, $$str({"Expected InterruptedException, got "_s, InterruptedBlockingSend::throwable}));
					} else {
						$nc($System::out)->println($$str({"Caught expected InterruptedException: "_s, InterruptedBlockingSend::throwable}));
					}
					$nc($System::out)->println("Interrupting before send"_s);
					try {
						$($Thread::currentThread())->interrupt();
						$nc(client)->send(request, $($HttpResponse$BodyHandlers::discarding()));
						$throwNew($AssertionError, $of("Expected InterruptedException not thrown"_s));
					} catch ($InterruptedException& x) {
						$nc($System::out)->println($$str({"Got expected exception: "_s, x}));
					}
				} catch ($Throwable& t$) {
					try {
						ss->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				ss->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void InterruptedBlockingSend::lambda$main$0($HttpClient* client, $HttpRequest* request) {
	try {
		$nc(client)->send(request, $($HttpResponse$BodyHandlers::discarding()));
	} catch ($InterruptedException& e) {
		$init(InterruptedBlockingSend);
		$assignStatic(InterruptedBlockingSend::throwable, e);
	} catch ($Throwable& th) {
		$init(InterruptedBlockingSend);
		$assignStatic(InterruptedBlockingSend::throwable, th);
	}
}

InterruptedBlockingSend::InterruptedBlockingSend() {
}

$Class* InterruptedBlockingSend::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(InterruptedBlockingSend$$Lambda$lambda$main$0::classInfo$.name)) {
			return InterruptedBlockingSend$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(InterruptedBlockingSend, name, initialize, &_InterruptedBlockingSend_ClassInfo_, allocate$InterruptedBlockingSend);
	return class$;
}

$Class* InterruptedBlockingSend::class$ = nullptr;