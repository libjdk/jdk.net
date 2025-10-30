#include <TimeoutOrdering.h>

#include <java/io/IOException.h>
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
#include <java/net/http/HttpTimeoutException.h>
#include <java/time/Duration.h>
#include <java/util/List.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/function/BiConsumer.h>
#include <jcpp.h>

#undef TIMEOUTS

using $HttpRequestArray = $Array<::java::net::http::HttpRequest>;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
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
using $HttpTimeoutException = ::java::net::http::HttpTimeoutException;
using $Duration = ::java::time::Duration;
using $AbstractQueue = ::java::util::AbstractQueue;
using $List = ::java::util::List;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $BiConsumer = ::java::util::function::BiConsumer;

class TimeoutOrdering$$Lambda$lambda$main$0 : public $BiConsumer {
	$class(TimeoutOrdering$$Lambda$lambda$main$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(int32_t j, $HttpRequest* req) {
		this->j = j;
		$set(this, req, req);
	}
	virtual void accept(Object$* r, Object$* t) override {
		TimeoutOrdering::lambda$main$0(j, req, $cast($HttpResponse, r), $cast($Throwable, t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TimeoutOrdering$$Lambda$lambda$main$0>());
	}
	int32_t j = 0;
	$HttpRequest* req = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TimeoutOrdering$$Lambda$lambda$main$0::fieldInfos[3] = {
	{"j", "I", nullptr, $PUBLIC, $field(TimeoutOrdering$$Lambda$lambda$main$0, j)},
	{"req", "Ljava/net/http/HttpRequest;", nullptr, $PUBLIC, $field(TimeoutOrdering$$Lambda$lambda$main$0, req)},
	{}
};
$MethodInfo TimeoutOrdering$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(ILjava/net/http/HttpRequest;)V", nullptr, $PUBLIC, $method(static_cast<void(TimeoutOrdering$$Lambda$lambda$main$0::*)(int32_t,$HttpRequest*)>(&TimeoutOrdering$$Lambda$lambda$main$0::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TimeoutOrdering$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TimeoutOrdering$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* TimeoutOrdering$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TimeoutOrdering$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TimeoutOrdering$$Lambda$lambda$main$0::class$ = nullptr;

class TimeoutOrdering$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TimeoutOrdering$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($HttpClient* client, $HttpRequest* req, int32_t j) {
		$set(this, client, client);
		$set(this, req, req);
		this->j = j;
	}
	virtual void run() override {
		TimeoutOrdering::lambda$main$1(client, req, j);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TimeoutOrdering$$Lambda$lambda$main$1$1>());
	}
	$HttpClient* client = nullptr;
	$HttpRequest* req = nullptr;
	int32_t j = 0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TimeoutOrdering$$Lambda$lambda$main$1$1::fieldInfos[4] = {
	{"client", "Ljava/net/http/HttpClient;", nullptr, $PUBLIC, $field(TimeoutOrdering$$Lambda$lambda$main$1$1, client)},
	{"req", "Ljava/net/http/HttpRequest;", nullptr, $PUBLIC, $field(TimeoutOrdering$$Lambda$lambda$main$1$1, req)},
	{"j", "I", nullptr, $PUBLIC, $field(TimeoutOrdering$$Lambda$lambda$main$1$1, j)},
	{}
};
$MethodInfo TimeoutOrdering$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/net/http/HttpClient;Ljava/net/http/HttpRequest;I)V", nullptr, $PUBLIC, $method(static_cast<void(TimeoutOrdering$$Lambda$lambda$main$1$1::*)($HttpClient*,$HttpRequest*,int32_t)>(&TimeoutOrdering$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TimeoutOrdering$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TimeoutOrdering$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TimeoutOrdering$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(TimeoutOrdering$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TimeoutOrdering$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _TimeoutOrdering_FieldInfo_[] = {
	{"TIMEOUTS", "[I", nullptr, $STATIC, $staticField(TimeoutOrdering, TIMEOUTS)},
	{"queue", "Ljava/util/concurrent/LinkedBlockingQueue;", "Ljava/util/concurrent/LinkedBlockingQueue<Ljava/net/http/HttpRequest;>;", $STATIC, $staticField(TimeoutOrdering, queue)},
	{"error", "Z", nullptr, $STATIC | $VOLATILE, $staticField(TimeoutOrdering, error)},
	{}
};

$MethodInfo _TimeoutOrdering_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeoutOrdering::*)()>(&TimeoutOrdering::init$))},
	{"checkReturnOrder", "([Ljava/net/http/HttpRequest;)V", nullptr, $STATIC, $method(static_cast<void(*)($HttpRequestArray*)>(&TimeoutOrdering::checkReturnOrder)), "java.lang.InterruptedException"},
	{"getRequest", "(Ljava/net/http/HttpRequest;[Ljava/net/http/HttpRequest;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($HttpRequest*,$HttpRequestArray*)>(&TimeoutOrdering::getRequest))},
	{"lambda$main$0", "(ILjava/net/http/HttpRequest;Ljava/net/http/HttpResponse;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,$HttpRequest*,$HttpResponse*,$Throwable*)>(&TimeoutOrdering::lambda$main$0))},
	{"lambda$main$1", "(Ljava/net/http/HttpClient;Ljava/net/http/HttpRequest;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($HttpClient*,$HttpRequest*,int32_t)>(&TimeoutOrdering::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TimeoutOrdering::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TimeoutOrdering_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TimeoutOrdering",
	"java.lang.Object",
	nullptr,
	_TimeoutOrdering_FieldInfo_,
	_TimeoutOrdering_MethodInfo_
};

$Object* allocate$TimeoutOrdering($Class* clazz) {
	return $of($alloc(TimeoutOrdering));
}

$ints* TimeoutOrdering::TIMEOUTS = nullptr;
$LinkedBlockingQueue* TimeoutOrdering::queue = nullptr;
$volatile(bool) TimeoutOrdering::error = false;

void TimeoutOrdering::init$() {
}

void TimeoutOrdering::main($StringArray* args) {
	$init(TimeoutOrdering);
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
					$var($HttpRequestArray, requests, $new($HttpRequestArray, $nc(TimeoutOrdering::TIMEOUTS)->length));
					$nc($System::out)->println("--- TESTING Async"_s);
					for (int32_t i = 0; i < $nc(TimeoutOrdering::TIMEOUTS)->length; ++i) {
						requests->set(i, $($nc($($nc($($nc($($HttpRequest::newBuilder(uri)))->timeout($($Duration::ofSeconds($nc(TimeoutOrdering::TIMEOUTS)->get(i))))))->GET()))->build()));
						$var($HttpRequest, req, requests->get(i));
						int32_t j = i;
						$var($CompletableFuture, response, $cast($CompletableFuture, $nc($($nc(client)->sendAsync(req, $($HttpResponse$BodyHandlers::replacing(nullptr)))))->whenComplete(static_cast<$BiConsumer*>($$new(TimeoutOrdering$$Lambda$lambda$main$0, j, req)))));
					}
					$nc($System::out)->println("All requests submitted. Waiting ..."_s);
					checkReturnOrder(requests);
					if (TimeoutOrdering::error) {
						$throwNew($RuntimeException, "Failed. Check output"_s);
					}
					$nc($System::out)->println("--- TESTING Sync"_s);
					$var($ExecutorService, executor, $Executors::newCachedThreadPool());
					for (int32_t i = 0; i < $nc(TimeoutOrdering::TIMEOUTS)->length; ++i) {
						requests->set(i, $($nc($($nc($($nc($($HttpRequest::newBuilder(uri)))->timeout($($Duration::ofSeconds($nc(TimeoutOrdering::TIMEOUTS)->get(i))))))->GET()))->build()));
						$var($HttpRequest, req, requests->get(i));
						int32_t j = i;
						$nc(executor)->execute(static_cast<$Runnable*>($$new(TimeoutOrdering$$Lambda$lambda$main$1$1, client, req, j)));
					}
					$nc($System::out)->println("All requests submitted. Waiting ..."_s);
					checkReturnOrder(requests);
					$nc(executor)->shutdownNow();
					if (TimeoutOrdering::error) {
						$throwNew($RuntimeException, "Failed. Check output"_s);
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

void TimeoutOrdering::checkReturnOrder($HttpRequestArray* requests) {
	$init(TimeoutOrdering);
	$useLocalCurrentObjectStackCache();
	for (int32_t j = 0; j < $nc(TimeoutOrdering::TIMEOUTS)->length; ++j) {
		$var($HttpRequest, req, $cast($HttpRequest, $nc(TimeoutOrdering::queue)->take()));
		$var($String, var$0, $$str({"Got request from queue "_s, req, ", order: "_s}));
		$nc($System::out)->println($$concat(var$0, $(getRequest(req, requests))));
		switch (j) {
		case 0:
			{}
		case 1:
			{
				if (!(req == $nc(requests)->get(1) || req == $nc(requests)->get(5))) {
					$var($String, s, $str({"Expected r1 or r5. Got: "_s, $(getRequest(req, requests))}));
					$throwNew($RuntimeException, s);
				}
				break;
			}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{
				if (!(req == $nc(requests)->get(0) || req == $nc(requests)->get(3) || req == $nc(requests)->get(4))) {
					$var($String, s, $str({"Expected r1, r4 or r5. Got: "_s, $(getRequest(req, requests))}));
					$throwNew($RuntimeException, s);
				}
				break;
			}
		case 5:
			{
				if (req != $nc(requests)->get(2)) {
					$var($String, s, $str({"Expected r3. Got: "_s, $(getRequest(req, requests))}));
					$throwNew($RuntimeException, s);
				}
				break;
			}
		default:
			{
				$throwNew($AssertionError, $of($$str({"Unknown index: "_s, $$str(j)})));
			}
		}
	}
	$nc($System::out)->println("Return order ok"_s);
}

$String* TimeoutOrdering::getRequest($HttpRequest* req, $HttpRequestArray* requests) {
	$init(TimeoutOrdering);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(requests)->length; ++i) {
		if (req == requests->get(i)) {
			return $str({"r"_s, $$str(i)});
		}
	}
	$throwNew($AssertionError, $of($$str({"Unknown request: "_s, req})));
}

void TimeoutOrdering::lambda$main$1($HttpClient* client, $HttpRequest* req, int32_t j) {
	$init(TimeoutOrdering);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($HttpResponse, r, $nc(client)->send(req, $($HttpResponse$BodyHandlers::replacing(nullptr))));
				$nc($System::out)->println($$str({"Unexpected response for r"_s, $$str(j), ": "_s, r}));
				TimeoutOrdering::error = true;
			} catch ($HttpTimeoutException& e) {
				$nc($System::out)->println($$str({"Caught expected timeout for r"_s, $$str(j), ": "_s, e}));
			} catch ($IOException& ee) {
				$var($Throwable, c, ee->getCause() == nullptr ? static_cast<$Throwable*>(ee) : ee->getCause());
				$nc($System::out)->println($$str({"Wrong exception type for r"_s, $$str(j), ": "_s, $($nc(c)->toString())}));
				$nc(c)->printStackTrace();
				TimeoutOrdering::error = true;
			} catch ($InterruptedException& ee) {
				$var($Throwable, c, ee->getCause() == nullptr ? static_cast<$Throwable*>(ee) : ee->getCause());
				$nc($System::out)->println($$str({"Wrong exception type for r"_s, $$str(j), ": "_s, $($nc(c)->toString())}));
				$nc(c)->printStackTrace();
				TimeoutOrdering::error = true;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(TimeoutOrdering::queue)->offer(req);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TimeoutOrdering::lambda$main$0(int32_t j, $HttpRequest* req, $HttpResponse* r, $Throwable* t) {
	$init(TimeoutOrdering);
	$useLocalCurrentObjectStackCache();
	if (r != nullptr) {
		$nc($System::out)->println($$str({"Unexpected response for r"_s, $$str(j), ": "_s, r}));
		TimeoutOrdering::error = true;
	}
	if (t != nullptr) {
		if (!($instanceOf($HttpTimeoutException, $(t->getCause())))) {
			$nc($System::out)->println($$str({"Wrong exception type for r"_s, $$str(j), ": "_s, $(t->toString())}));
			$var($Throwable, c, t->getCause() == nullptr ? t : t->getCause());
			$nc(c)->printStackTrace();
			TimeoutOrdering::error = true;
		} else {
			$nc($System::out)->println($$str({"Caught expected timeout for r"_s, $$str(j), ": "_s, $(t->getCause())}));
		}
	}
	$nc(TimeoutOrdering::queue)->add(req);
}

void clinit$TimeoutOrdering($Class* class$) {
	$assignStatic(TimeoutOrdering::TIMEOUTS, $new($ints, {
		10,
		5,
		15,
		10,
		10,
		5
	}));
	$assignStatic(TimeoutOrdering::queue, $new($LinkedBlockingQueue));
}

TimeoutOrdering::TimeoutOrdering() {
}

$Class* TimeoutOrdering::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TimeoutOrdering$$Lambda$lambda$main$0::classInfo$.name)) {
			return TimeoutOrdering$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TimeoutOrdering$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return TimeoutOrdering$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(TimeoutOrdering, name, initialize, &_TimeoutOrdering_ClassInfo_, clinit$TimeoutOrdering, allocate$TimeoutOrdering);
	return class$;
}

$Class* TimeoutOrdering::class$ = nullptr;