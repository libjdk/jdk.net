#include <TcpKeepAliveTest.h>

#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/MulticastSocket.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/util/Set.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jcpp.h>

#undef DEFAULT_KEEP_ALIVE_INTVL
#undef DEFAULT_KEEP_ALIVE_PROBES
#undef DEFAULT_KEEP_ALIVE_TIME
#undef TCP_KEEPCOUNT
#undef TCP_KEEPIDLE
#undef TCP_KEEPINTERVAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $MulticastSocket = ::java::net::MulticastSocket;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;

$FieldInfo _TcpKeepAliveTest_FieldInfo_[] = {
	{"DEFAULT_KEEP_ALIVE_PROBES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TcpKeepAliveTest, DEFAULT_KEEP_ALIVE_PROBES)},
	{"DEFAULT_KEEP_ALIVE_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TcpKeepAliveTest, DEFAULT_KEEP_ALIVE_TIME)},
	{"DEFAULT_KEEP_ALIVE_INTVL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TcpKeepAliveTest, DEFAULT_KEEP_ALIVE_INTVL)},
	{}
};

$MethodInfo _TcpKeepAliveTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TcpKeepAliveTest::*)()>(&TcpKeepAliveTest::init$))},
	{"boundServer", "(Ljava/net/InetAddress;)Ljava/net/ServerSocket;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ServerSocket*(*)($InetAddress*)>(&TcpKeepAliveTest::boundServer)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TcpKeepAliveTest::main)), "java.io.IOException"},
	{}
};

$ClassInfo _TcpKeepAliveTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TcpKeepAliveTest",
	"java.lang.Object",
	nullptr,
	_TcpKeepAliveTest_FieldInfo_,
	_TcpKeepAliveTest_MethodInfo_
};

$Object* allocate$TcpKeepAliveTest($Class* clazz) {
	return $of($alloc(TcpKeepAliveTest));
}

void TcpKeepAliveTest::init$() {
}

void TcpKeepAliveTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
	{
		$var($ServerSocket, ss, boundServer(loopback));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($Socket, s, $new($Socket, loopback, $nc(ss)->getLocalPort()));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($DatagramSocket, ds, $new($DatagramSocket, 0));
								{
									$var($Throwable, var$2, nullptr);
									try {
										try {
											$var($MulticastSocket, mc, $new($MulticastSocket, 0));
											{
												$var($Throwable, var$3, nullptr);
												try {
													try {
														$init($ExtendedSocketOptions);
														if ($nc($($nc(ss)->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPIDLE)) {
															ss->setOption($ExtendedSocketOptions::TCP_KEEPIDLE, $($Integer::valueOf(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_TIME)));
															if ($nc(($cast($Integer, $(ss->getOption($ExtendedSocketOptions::TCP_KEEPIDLE)))))->intValue() != TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_TIME) {
																$throwNew($RuntimeException, $$str({"Test failed, TCP_KEEPIDLE should have been "_s, $$str(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_TIME)}));
															}
														}
														if ($nc($($nc(ss)->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPCOUNT)) {
															ss->setOption($ExtendedSocketOptions::TCP_KEEPCOUNT, $($Integer::valueOf(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_PROBES)));
															if ($nc(($cast($Integer, $(ss->getOption($ExtendedSocketOptions::TCP_KEEPCOUNT)))))->intValue() != TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_PROBES) {
																$throwNew($RuntimeException, $$str({"Test failed, TCP_KEEPCOUNT should have been "_s, $$str(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_PROBES)}));
															}
														}
														if ($nc($($nc(ss)->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPINTERVAL)) {
															ss->setOption($ExtendedSocketOptions::TCP_KEEPINTERVAL, $($Integer::valueOf(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_INTVL)));
															if ($nc(($cast($Integer, $(ss->getOption($ExtendedSocketOptions::TCP_KEEPINTERVAL)))))->intValue() != TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_INTVL) {
																$throwNew($RuntimeException, $$str({"Test failed, TCP_KEEPINTERVAL should have been "_s, $$str(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_INTVL)}));
															}
														}
														if ($nc($(s->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPIDLE)) {
															s->setOption($ExtendedSocketOptions::TCP_KEEPIDLE, $($Integer::valueOf(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_TIME)));
															if ($nc(($cast($Integer, $(s->getOption($ExtendedSocketOptions::TCP_KEEPIDLE)))))->intValue() != TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_TIME) {
																$throwNew($RuntimeException, $$str({"Test failed, TCP_KEEPIDLE should have been "_s, $$str(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_TIME)}));
															}
														}
														if ($nc($(s->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPCOUNT)) {
															s->setOption($ExtendedSocketOptions::TCP_KEEPCOUNT, $($Integer::valueOf(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_PROBES)));
															if ($nc(($cast($Integer, $(s->getOption($ExtendedSocketOptions::TCP_KEEPCOUNT)))))->intValue() != TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_PROBES) {
																$throwNew($RuntimeException, $$str({"Test failed, TCP_KEEPCOUNT should have been "_s, $$str(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_PROBES)}));
															}
														}
														if ($nc($(s->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPINTERVAL)) {
															s->setOption($ExtendedSocketOptions::TCP_KEEPINTERVAL, $($Integer::valueOf(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_INTVL)));
															if ($nc(($cast($Integer, $(s->getOption($ExtendedSocketOptions::TCP_KEEPINTERVAL)))))->intValue() != TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_INTVL) {
																$throwNew($RuntimeException, $$str({"Test failed, TCP_KEEPINTERVAL should have been "_s, $$str(TcpKeepAliveTest::DEFAULT_KEEP_ALIVE_INTVL)}));
															}
														}
														if ($nc($(ds->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPCOUNT)) {
															$throwNew($RuntimeException, "Test failed, TCP_KEEPCOUNT is applicable for TCP Sockets only."_s);
														}
														if ($nc($(ds->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPIDLE)) {
															$throwNew($RuntimeException, "Test failed, TCP_KEEPIDLE is applicable for TCP Sockets only."_s);
														}
														if ($nc($(ds->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPINTERVAL)) {
															$throwNew($RuntimeException, "Test failed, TCP_KEEPINTERVAL is applicable for TCP Sockets only."_s);
														}
														if ($nc($(mc->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPCOUNT)) {
															$throwNew($RuntimeException, "Test failed, TCP_KEEPCOUNT is applicable for TCP Sockets only"_s);
														}
														if ($nc($(mc->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPIDLE)) {
															$throwNew($RuntimeException, "Test failed, TCP_KEEPIDLE is applicable for TCP Sockets only"_s);
														}
														if ($nc($(mc->supportedOptions()))->contains($ExtendedSocketOptions::TCP_KEEPINTERVAL)) {
															$throwNew($RuntimeException, "Test failed, TCP_KEEPINTERVAL is applicable for TCP Sockets only"_s);
														}
													} catch ($Throwable& t$) {
														try {
															mc->close();
														} catch ($Throwable& x2) {
															t$->addSuppressed(x2);
														}
														$throw(t$);
													}
												} catch ($Throwable& var$4) {
													$assign(var$3, var$4);
												} /*finally*/ {
													mc->close();
												}
												if (var$3 != nullptr) {
													$throw(var$3);
												}
											}
										} catch ($Throwable& t$) {
											try {
												ds->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
											$throw(t$);
										}
									} catch ($Throwable& var$5) {
										$assign(var$2, var$5);
									} /*finally*/ {
										ds->close();
									}
									if (var$2 != nullptr) {
										$throw(var$2);
									}
								}
							} catch ($Throwable& t$) {
								try {
									s->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$6) {
							$assign(var$1, var$6);
						} /*finally*/ {
							s->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					if (ss != nullptr) {
						try {
							ss->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$7) {
				$assign(var$0, var$7);
			} /*finally*/ {
				if (ss != nullptr) {
					ss->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$ServerSocket* TcpKeepAliveTest::boundServer($InetAddress* address) {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, socketAddress, $new($InetSocketAddress, address, 0));
	$var($ServerSocket, server, $new($ServerSocket));
	server->bind(socketAddress);
	return server;
}

TcpKeepAliveTest::TcpKeepAliveTest() {
}

$Class* TcpKeepAliveTest::load$($String* name, bool initialize) {
	$loadClass(TcpKeepAliveTest, name, initialize, &_TcpKeepAliveTest_ClassInfo_, allocate$TcpKeepAliveTest);
	return class$;
}

$Class* TcpKeepAliveTest::class$ = nullptr;