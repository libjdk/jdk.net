#include <Http1ChunkedTest.h>

#include <Http1ChunkedTest$Responses.h>
#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProxySelector.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient$Builder.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse$BodyHandlers.h>
#include <java/net/http/HttpResponse.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

#undef LOREM
#undef NO_PROXY
#undef PRINT_BODY
#undef US_ASCII
#undef UTF_8

using $Http1ChunkedTest$Responses = ::Http1ChunkedTest$Responses;
using $Http1ChunkedTest$ResponsesArray = $Array<Http1ChunkedTest$Responses>;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProxySelector = ::java::net::ProxySelector;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Builder = ::java::net::http::HttpClient$Builder;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $HttpResponse$BodyHandlers = ::java::net::http::HttpResponse$BodyHandlers;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;

$FieldInfo _Http1ChunkedTest_FieldInfo_[] = {
	{"PRINT_BODY", "Z", nullptr, $STATIC | $FINAL, $constField(Http1ChunkedTest, PRINT_BODY)},
	{"LOREM", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Http1ChunkedTest, LOREM)},
	{}
};

$MethodInfo _Http1ChunkedTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Http1ChunkedTest::*)()>(&Http1ChunkedTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Http1ChunkedTest::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;J)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;J)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$List*,int64_t)>(&Http1ChunkedTest::test)), "java.lang.Exception"},
	{"validate", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Http1ChunkedTest::validate))},
	{}
};

$InnerClassInfo _Http1ChunkedTest_InnerClassesInfo_[] = {
	{"Http1ChunkedTest$Data", "Http1ChunkedTest", "Data", $STATIC | $FINAL},
	{"Http1ChunkedTest$Responses", "Http1ChunkedTest", "Responses", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Http1ChunkedTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Http1ChunkedTest",
	"java.lang.Object",
	nullptr,
	_Http1ChunkedTest_FieldInfo_,
	_Http1ChunkedTest_MethodInfo_,
	nullptr,
	nullptr,
	_Http1ChunkedTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Http1ChunkedTest$Data,Http1ChunkedTest$Responses"
};

$Object* allocate$Http1ChunkedTest($Class* clazz) {
	return $of($alloc(Http1ChunkedTest));
}

$String* Http1ChunkedTest::LOREM = nullptr;

void Http1ChunkedTest::init$() {
}

void Http1ChunkedTest::main($StringArray* args) {
	$init(Http1ChunkedTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($List::of($($Http1ChunkedTest$Responses::values()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$Http1ChunkedTest$Responses* resp = $cast($Http1ChunkedTest$Responses, i$->next());
			{
				test($($nc(resp)->name()), resp->headers, resp->body, resp->delay);
			}
		}
	}
}

void Http1ChunkedTest::test($String* name, $String* headers, $List* body, int64_t delay) {
	$init(Http1ChunkedTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($ServerSocket, server, $new($ServerSocket));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					server->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
					$var($String, path, $str({"/testChunkExt/"_s, name}));
					$var($String, var$1, "http"_s);
					$var($String, var$2, $nc($(server->getInetAddress()))->getHostAddress());
					$var($URI, uri, $new($URI, var$1, nullptr, var$2, server->getLocalPort(), path, nullptr, nullptr));
					$init($HttpClient$Builder);
					$var($HttpClient, client, $nc($($nc($($HttpClient::newBuilder()))->proxy($HttpClient$Builder::NO_PROXY)))->build());
					$var($HttpRequest, request, $nc($($nc($($HttpRequest::newBuilder(uri)))->GET()))->build());
					$nc($System::out)->printf("%s: %s%n"_s, $$new($ObjectArray, {
						$of(name),
						$of(uri)
					}));
					$var($CompletableFuture, respCF, $nc(client)->sendAsync(request, $($HttpResponse$BodyHandlers::ofString())));
					bool received = false;
					while (!received) {
						$nc($System::out)->printf("%s: Recieving request...%n"_s, $$new($ObjectArray, {$of(name)}));
						{
							$var($Socket, serverConn, server->accept());
							{
								$var($Throwable, var$3, nullptr);
								bool continue$4 = false;
								try {
									try {
										$var($InputStream, sin, $nc(serverConn)->getInputStream());
										$var($BufferedReader, reader, $new($BufferedReader, $$new($InputStreamReader, sin)));
										$var($String, line, nullptr);
										while (!$nc(($assign(line, reader->readLine())))->isEmpty()) {
											if ($nc(line)->contains(path)) {
												received = true;
												$nc($System::out)->printf("%s: Recieved request: %s%n"_s, $$new($ObjectArray, {
													$of(name),
													$of(line)
												}));
											}
										}
										if (!received) {
											$nc($System::out)->printf("%s: Unexpected headers received: dropping request.%n"_s, $$new($ObjectArray, 0));
											// continue;
											continue$4 = true;
											goto $finally1;
										}
										$var($OutputStream, os, serverConn->getOutputStream());
										$init($StandardCharsets);
										$nc(os)->write($($nc(headers)->getBytes($StandardCharsets::US_ASCII)));
										os->flush();
										$nc($System::out)->printf("%s: Response headers sent.%n"_s, $$new($ObjectArray, {$of(name)}));
										{
											$var($Iterator, i$, $nc(body)->iterator());
											for (; $nc(i$)->hasNext();) {
												$var($String, part, $cast($String, i$->next()));
												{
													os->write($($nc(part)->getBytes($StandardCharsets::UTF_8)));
													os->flush();
													if (delay > 0) {
														$Thread::sleep(delay);
													}
												}
											}
										}
										$nc($System::out)->printf("%s: Response body sent.%n"_s, $$new($ObjectArray, {$of(name)}));
										$var($HttpResponse, resp, $cast($HttpResponse, $nc(respCF)->join()));
										$nc($System::out)->printf("%s: Response received:%n"_s, $$new($ObjectArray, {$of(name)}));
										{
											$nc($System::out)->println($of(resp));
										}
										validate($cast($String, $($nc(resp)->body())));
										$nc($System::out)->printf("%n%s: body validated%n%n"_s, $$new($ObjectArray, {$of(name)}));
									} catch ($Throwable& t$) {
										if (serverConn != nullptr) {
											try {
												serverConn->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
										}
										$throw(t$);
									}
								} catch ($Throwable& var$5) {
									$assign(var$3, var$5);
								} $finally1: {
									if (serverConn != nullptr) {
										serverConn->close();
									}
								}
								if (var$3 != nullptr) {
									$throw(var$3);
								}
								if (continue$4) {
									continue;
								}
							}
						}
					}
				} catch ($Throwable& t$) {
					try {
						server->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$6) {
				$assign(var$0, var$6);
			} /*finally*/ {
				server->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Http1ChunkedTest::validate($String* response) {
	$init(Http1ChunkedTest);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(response)->length(); ++i) {
		char16_t var$0 = response->charAt(i);
		if (var$0 != $nc(Http1ChunkedTest::LOREM)->charAt($mod(i, $nc(Http1ChunkedTest::LOREM)->length()))) {
			$throwNew($AssertionError, $of($$str({"Mismatch at index "_s, $$str(i)})));
		}
	}
}

Http1ChunkedTest::Http1ChunkedTest() {
}

void clinit$Http1ChunkedTest($Class* class$) {
	$assignStatic(Http1ChunkedTest::LOREM, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.\nUt enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\nDuis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.\nExcepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\n"_s);
}

$Class* Http1ChunkedTest::load$($String* name, bool initialize) {
	$loadClass(Http1ChunkedTest, name, initialize, &_Http1ChunkedTest_ClassInfo_, clinit$Http1ChunkedTest, allocate$Http1ChunkedTest);
	return class$;
}

$Class* Http1ChunkedTest::class$ = nullptr;