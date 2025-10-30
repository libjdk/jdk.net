#include <HandshakeFailureTest.h>

#include <HandshakeFailureTest$AbstractServer.h>
#include <HandshakeFailureTest$ExceptionChecker.h>
#include <HandshakeFailureTest$ExpectedExceptionType.h>
#include <HandshakeFailureTest$PlainServer.h>
#include <HandshakeFailureTest$SSLServer.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionException.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <javax/net/ssl/SSLParameters.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE
#undef HTTP_1_1
#undef HTTP_2
#undef ROOT
#undef TIMES
#undef WSAECONNABORTED
#undef WSAECONNABORTED_MSG

using $HandshakeFailureTest$AbstractServer = ::HandshakeFailureTest$AbstractServer;
using $HandshakeFailureTest$ExceptionChecker = ::HandshakeFailureTest$ExceptionChecker;
using $HandshakeFailureTest$ExpectedExceptionType = ::HandshakeFailureTest$ExpectedExceptionType;
using $HandshakeFailureTest$PlainServer = ::HandshakeFailureTest$PlainServer;
using $HandshakeFailureTest$SSLServer = ::HandshakeFailureTest$SSLServer;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletionException = ::java::util::concurrent::CompletionException;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $SSLParameters = ::javax::net::ssl::SSLParameters;

$FieldInfo _HandshakeFailureTest_FieldInfo_[] = {
	{"TIMES", "I", nullptr, $STATIC | $FINAL, $constField(HandshakeFailureTest, TIMES)},
	{"tlsProtocol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(HandshakeFailureTest, tlsProtocol)},
	{"maxWsaeConnAborted", "I", nullptr, $PRIVATE | $STATIC, $staticField(HandshakeFailureTest, maxWsaeConnAborted)},
	{"WSAECONNABORTED_MSG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HandshakeFailureTest, WSAECONNABORTED_MSG)},
	{"isWindows", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HandshakeFailureTest, isWindows)},
	{}
};

$MethodInfo _HandshakeFailureTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HandshakeFailureTest::*)()>(&HandshakeFailureTest::init$))},
	{"checkExceptionOrCause", "(Ljava/lang/Throwable;)LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $STATIC, $method(static_cast<$HandshakeFailureTest$ExpectedExceptionType*(*)($Throwable*)>(&HandshakeFailureTest::checkExceptionOrCause))},
	{"getClient", "()Ljava/net/http/HttpClient;", nullptr, $STATIC, $method(static_cast<$HttpClient*(*)()>(&HandshakeFailureTest::getClient))},
	{"isWsaeConnAborted", "(Ljava/lang/Throwable;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Throwable*)>(&HandshakeFailureTest::isWsaeConnAborted))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HandshakeFailureTest::main)), "java.lang.Exception"},
	{"testAsyncDiffClient", "(Ljava/net/URI;Ljava/net/http/HttpClient$Version;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"testAsyncSameClient", "(Ljava/net/URI;Ljava/net/http/HttpClient$Version;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"testSyncDiffClient", "(Ljava/net/URI;Ljava/net/http/HttpClient$Version;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"testSyncSameClient", "(Ljava/net/URI;Ljava/net/http/HttpClient$Version;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _HandshakeFailureTest_InnerClassesInfo_[] = {
	{"HandshakeFailureTest$SSLServer", "HandshakeFailureTest", "SSLServer", $STATIC},
	{"HandshakeFailureTest$PlainServer", "HandshakeFailureTest", "PlainServer", $STATIC},
	{"HandshakeFailureTest$AbstractServer", "HandshakeFailureTest", "AbstractServer", $STATIC | $ABSTRACT},
	{"HandshakeFailureTest$ExceptionChecker", "HandshakeFailureTest", "ExceptionChecker", $STATIC | $FINAL},
	{"HandshakeFailureTest$ExpectedExceptionType", "HandshakeFailureTest", "ExpectedExceptionType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _HandshakeFailureTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HandshakeFailureTest",
	"java.lang.Object",
	nullptr,
	_HandshakeFailureTest_FieldInfo_,
	_HandshakeFailureTest_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeFailureTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HandshakeFailureTest$SSLServer,HandshakeFailureTest$PlainServer,HandshakeFailureTest$AbstractServer,HandshakeFailureTest$ExceptionChecker,HandshakeFailureTest$ExpectedExceptionType"
};

$Object* allocate$HandshakeFailureTest($Class* clazz) {
	return $of($alloc(HandshakeFailureTest));
}

$String* HandshakeFailureTest::tlsProtocol = nullptr;
int32_t HandshakeFailureTest::maxWsaeConnAborted = 0;
$String* HandshakeFailureTest::WSAECONNABORTED_MSG = nullptr;
bool HandshakeFailureTest::isWindows = false;

void HandshakeFailureTest::init$() {
}

void HandshakeFailureTest::main($StringArray* args) {
	$init(HandshakeFailureTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(HandshakeFailureTest::tlsProtocol, $nc(args)->get(0));
	HandshakeFailureTest::maxWsaeConnAborted = 0;
	$var(HandshakeFailureTest, test, $new(HandshakeFailureTest));
	$var($Object, var$0, $of($new($HandshakeFailureTest$PlainServer)));
	$var($List, servers, $List::of(var$0, $$new($HandshakeFailureTest$SSLServer)));
	{
		$var($Iterator, i$, $nc(servers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($HandshakeFailureTest$AbstractServer, server, $cast($HandshakeFailureTest$AbstractServer, i$->next()));
			{
				{
					$var($HandshakeFailureTest$AbstractServer, twrVar0$, server);
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$nc($System::out)->format("%n%n------ Testing with server:%s ------%n"_s, $$new($ObjectArray, {$of(server)}));
								$var($URI, uri, $new($URI, $$str({"https://"_s, $($nc(server)->getAuthority()), "/"_s})));
								$init($HttpClient$Version);
								test->testSyncSameClient(uri, $HttpClient$Version::HTTP_1_1);
								test->testSyncSameClient(uri, $HttpClient$Version::HTTP_2);
								test->testSyncDiffClient(uri, $HttpClient$Version::HTTP_1_1);
								test->testSyncDiffClient(uri, $HttpClient$Version::HTTP_2);
								test->testAsyncSameClient(uri, $HttpClient$Version::HTTP_1_1);
								test->testAsyncSameClient(uri, $HttpClient$Version::HTTP_2);
								test->testAsyncDiffClient(uri, $HttpClient$Version::HTTP_1_1);
								test->testAsyncDiffClient(uri, $HttpClient$Version::HTTP_2);
							} catch ($Throwable& t$) {
								if (twrVar0$ != nullptr) {
									try {
										twrVar0$->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							if (twrVar0$ != nullptr) {
								twrVar0$->close();
							}
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				}
			}
		}
	}
}

$HttpClient* HandshakeFailureTest::getClient() {
	$init(HandshakeFailureTest);
	$useLocalCurrentObjectStackCache();
	$var($SSLParameters, params, $new($SSLParameters));
	params->setProtocols($$new($StringArray, {HandshakeFailureTest::tlsProtocol}));
	return $nc($($nc($($HttpClient::newBuilder()))->sslParameters(params)))->build();
}

void HandshakeFailureTest::testSyncSameClient($URI* uri, $HttpClient$Version* version) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("%n--- testSyncSameClient %s ---%n"_s, $$new($ObjectArray, {$of(version)}));
	$var($HttpClient, client, getClient());
	$var($HandshakeFailureTest$ExceptionChecker, exceptionChecker, $new($HandshakeFailureTest$ExceptionChecker));
	for (int32_t i = 0; i < HandshakeFailureTest::TIMES; ++i) {
		$nc($System::out)->printf("iteration %d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
		$var($HttpRequest, request, $nc($($nc($($HttpRequest::newBuilder(uri)))->version(version)))->build());
		try {
			$var($HttpResponse, response, $nc(client)->send(request, $($HttpResponse$BodyHandlers::discarding())));
			$var($String, msg, $String::format("UNEXPECTED response=%s%n"_s, $$new($ObjectArray, {$of(response)})));
			$throwNew($RuntimeException, msg);
		} catch ($IOException& expected) {
			$nc($System::out)->printf("Client: caught expected exception: %s%n"_s, $$new($ObjectArray, {$of(expected)}));
			exceptionChecker->check(static_cast<$Throwable*>(expected));
		}
	}
	exceptionChecker->check(HandshakeFailureTest::maxWsaeConnAborted);
}

void HandshakeFailureTest::testSyncDiffClient($URI* uri, $HttpClient$Version* version) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("%n--- testSyncDiffClient %s ---%n"_s, $$new($ObjectArray, {$of(version)}));
	$var($HandshakeFailureTest$ExceptionChecker, exceptionChecker, $new($HandshakeFailureTest$ExceptionChecker));
	for (int32_t i = 0; i < HandshakeFailureTest::TIMES; ++i) {
		$nc($System::out)->printf("iteration %d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
		$var($HttpClient, client, getClient());
		$var($HttpRequest, request, $nc($($nc($($HttpRequest::newBuilder(uri)))->version(version)))->build());
		try {
			$var($HttpResponse, response, $nc(client)->send(request, $($HttpResponse$BodyHandlers::discarding())));
			$var($String, msg, $String::format("UNEXPECTED response=%s%n"_s, $$new($ObjectArray, {$of(response)})));
			$throwNew($RuntimeException, msg);
		} catch ($IOException& expected) {
			$nc($System::out)->printf("Client: caught expected exception: %s%n"_s, $$new($ObjectArray, {$of(expected)}));
			exceptionChecker->check(static_cast<$Throwable*>(expected));
		}
	}
	exceptionChecker->check(HandshakeFailureTest::maxWsaeConnAborted);
}

void HandshakeFailureTest::testAsyncSameClient($URI* uri, $HttpClient$Version* version) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("%n--- testAsyncSameClient %s ---%n"_s, $$new($ObjectArray, {$of(version)}));
	$var($HttpClient, client, getClient());
	$var($HandshakeFailureTest$ExceptionChecker, exceptionChecker, $new($HandshakeFailureTest$ExceptionChecker));
	for (int32_t i = 0; i < HandshakeFailureTest::TIMES; ++i) {
		$nc($System::out)->printf("iteration %d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
		$var($HttpRequest, request, $nc($($nc($($HttpRequest::newBuilder(uri)))->version(version)))->build());
		$var($CompletableFuture, response, $nc(client)->sendAsync(request, $($HttpResponse$BodyHandlers::discarding())));
		try {
			$nc(response)->join();
			$var($String, msg, $String::format("UNEXPECTED response=%s%n"_s, $$new($ObjectArray, {$of(response)})));
			$throwNew($RuntimeException, msg);
		} catch ($CompletionException& ce) {
			$var($Throwable, expected, ce->getCause());
			$nc($System::out)->printf("Client: caught expected exception: %s%n"_s, $$new($ObjectArray, {$of(expected)}));
			exceptionChecker->check(expected);
		}
	}
	exceptionChecker->check(HandshakeFailureTest::maxWsaeConnAborted);
}

void HandshakeFailureTest::testAsyncDiffClient($URI* uri, $HttpClient$Version* version) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->printf("%n--- testAsyncDiffClient %s ---%n"_s, $$new($ObjectArray, {$of(version)}));
	$var($HandshakeFailureTest$ExceptionChecker, exceptionChecker, $new($HandshakeFailureTest$ExceptionChecker));
	for (int32_t i = 0; i < HandshakeFailureTest::TIMES; ++i) {
		$nc($System::out)->printf("iteration %d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
		$var($HttpClient, client, getClient());
		$var($HttpRequest, request, $nc($($nc($($HttpRequest::newBuilder(uri)))->version(version)))->build());
		$var($CompletableFuture, response, $nc(client)->sendAsync(request, $($HttpResponse$BodyHandlers::discarding())));
		try {
			$nc(response)->join();
			$var($String, msg, $String::format("UNEXPECTED response=%s%n"_s, $$new($ObjectArray, {$of(response)})));
			$throwNew($RuntimeException, msg);
		} catch ($CompletionException& ce) {
			ce->printStackTrace($System::out);
			$var($Throwable, expected, ce->getCause());
			$nc($System::out)->printf("Client: caught expected exception: %s%n"_s, $$new($ObjectArray, {$of(expected)}));
			exceptionChecker->check(expected);
		}
	}
	exceptionChecker->check(HandshakeFailureTest::maxWsaeConnAborted);
}

bool HandshakeFailureTest::isWsaeConnAborted($Throwable* t) {
	$init(HandshakeFailureTest);
	return $instanceOf($IOException, t) && $nc(HandshakeFailureTest::WSAECONNABORTED_MSG)->equalsIgnoreCase($($nc(t)->getMessage()));
}

$HandshakeFailureTest$ExpectedExceptionType* HandshakeFailureTest::checkExceptionOrCause($Throwable* t$renamed) {
	$init(HandshakeFailureTest);
	$useLocalCurrentObjectStackCache();
	$var($Throwable, t, t$renamed);
	$var($Throwable, original, t);
	do {
		$load($SSLHandshakeException);
		if ($SSLHandshakeException::class$->isInstance(t)) {
			$nc($System::out)->println($$str({"Found expected exception/cause: "_s, t}));
			$init($HandshakeFailureTest$ExpectedExceptionType);
			return $HandshakeFailureTest$ExpectedExceptionType::HANDSHAKE_FAILURE;
		}
		if (HandshakeFailureTest::isWindows && isWsaeConnAborted(t)) {
			$nc($System::out)->println($$str({"Found WSAECONNABORTED: "_s, t}));
			$init($HandshakeFailureTest$ExpectedExceptionType);
			return $HandshakeFailureTest$ExpectedExceptionType::WSAECONNABORTED;
		}
	} while (($assign(t, $nc(t)->getCause())) != nullptr);
	$nc(original)->printStackTrace($System::out);
	$throwNew($RuntimeException, $$str({"Not found expected SSLHandshakeException in "_s, original}), original);
}

void clinit$HandshakeFailureTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(HandshakeFailureTest::WSAECONNABORTED_MSG, "An established connection was aborted by the software in your host machine"_s);
	$init($Locale);
	HandshakeFailureTest::isWindows = $($nc($($System::getProperty("os.name"_s, ""_s)))->toLowerCase($Locale::ROOT))->contains("win"_s);
}

HandshakeFailureTest::HandshakeFailureTest() {
}

$Class* HandshakeFailureTest::load$($String* name, bool initialize) {
	$loadClass(HandshakeFailureTest, name, initialize, &_HandshakeFailureTest_ClassInfo_, clinit$HandshakeFailureTest, allocate$HandshakeFailureTest);
	return class$;
}

$Class* HandshakeFailureTest::class$ = nullptr;