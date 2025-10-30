#include <ShortRequestBody$Server.h>

#include <ShortRequestBody.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/AssertionError.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef BODY_LENGTHS
#undef BODY_OFFSETS
#undef RESPONSE
#undef US_ASCII

using $ShortRequestBody = ::ShortRequestBody;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AssertionError = ::java::lang::AssertionError;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$FieldInfo _ShortRequestBody$Server_FieldInfo_[] = {
	{"RESPONSE", "Ljava/lang/String;", nullptr, $STATIC, $staticField(ShortRequestBody$Server, RESPONSE)},
	{"ss", "Ljava/net/ServerSocket;", nullptr, $PRIVATE | $FINAL, $field(ShortRequestBody$Server, ss)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ShortRequestBody$Server, closed)},
	{}
};

$MethodInfo _ShortRequestBody$Server_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ShortRequestBody$Server::*)()>(&ShortRequestBody$Server::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC},
	{"getPort", "()I", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ShortRequestBody$Server_InnerClassesInfo_[] = {
	{"ShortRequestBody$Server", "ShortRequestBody", "Server", $STATIC},
	{}
};

$ClassInfo _ShortRequestBody$Server_ClassInfo_ = {
	$ACC_SUPER,
	"ShortRequestBody$Server",
	"java.lang.Thread",
	"java.lang.AutoCloseable",
	_ShortRequestBody$Server_FieldInfo_,
	_ShortRequestBody$Server_MethodInfo_,
	nullptr,
	nullptr,
	_ShortRequestBody$Server_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShortRequestBody"
};

$Object* allocate$ShortRequestBody$Server($Class* clazz) {
	return $of($alloc(ShortRequestBody$Server));
}

$Object* ShortRequestBody$Server::clone() {
	 return this->$Thread::clone();
}

$String* ShortRequestBody$Server::toString() {
	 return this->$Thread::toString();
}

int32_t ShortRequestBody$Server::hashCode() {
	 return this->$Thread::hashCode();
}

bool ShortRequestBody$Server::equals(Object$* arg0) {
	 return this->$Thread::equals(arg0);
}

void ShortRequestBody$Server::finalize() {
	this->$Thread::finalize();
}

$String* ShortRequestBody$Server::RESPONSE = nullptr;

void ShortRequestBody$Server::init$() {
	$useLocalCurrentObjectStackCache();
	$Thread::init$("Test-Server"_s);
	$set(this, ss, $new($ServerSocket));
	$nc(this->ss)->setReuseAddress(false);
	$nc(this->ss)->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	this->start();
}

int32_t ShortRequestBody$Server::getPort() {
	return $nc(this->ss)->getLocalPort();
}

void ShortRequestBody$Server::run() {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	int32_t offset = 0;
	while (!this->closed) {
		$nc($System::err)->println("Server: waiting for connection"_s);
		try {
			$var($Socket, s, $nc(this->ss)->accept());
			{
				$var($Throwable, var$0, nullptr);
				bool continue$1 = false;
				try {
					try {
						$nc($System::err)->println("Server: got connection"_s);
						$var($InputStream, is, $nc(s)->getInputStream());
						try {
							$var($String, headers, $ShortRequestBody::readRequestHeaders(is));
							if (headers == nullptr) {
								// continue;
								continue$1 = true;
								goto $finally;
							}
						} catch ($SocketException& ex) {
							$nc($System::err)->println($$str({"Ignoring unexpected exception while reading headers: "_s, ex}));
							ex->printStackTrace($System::err);
						}
						$var($bytes, ba, $new($bytes, 1024));
						$init($ShortRequestBody);
						int32_t length = $nc($ShortRequestBody::BODY_LENGTHS)->get(count % 3);
						length += $nc($ShortRequestBody::BODY_OFFSETS)->get(offset);
						$nc($System::err)->println($$str({"Server: count="_s, $$str(count), ", offset="_s, $$str(offset)}));
						$nc($System::err)->println($$str({"Server: expecting "_s, $$str(length), " bytes"_s}));
						int32_t read = 0;
						{
							$var($Throwable, var$2, nullptr);
							try {
								read = $nc(is)->readNBytes(ba, 0, length);
								$nc($System::err)->println($$str({"Server: actually read "_s, $$str(read), " bytes"_s}));
							} catch ($Throwable& var$3) {
								$assign(var$2, var$3);
							} /*finally*/ {
								++count;
								if (count % 6 == 0) {
									++offset;
								}
								if (count % 42 == 0) {
									count = 0;
									offset = 0;
								}
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
						if (read < length) {
							if ($nc(is)->read() != -1) {
								$new($AssertionError, $of($$str({"Unexpected read: "_s, $$str(read)})));
							}
						} else {
							$var($OutputStream, os, s->getOutputStream());
							$init($StandardCharsets);
							$nc($System::err)->println($$str({"Server: writing "_s, $$str($($nc(ShortRequestBody$Server::RESPONSE)->getBytes($StandardCharsets::US_ASCII))->length), " bytes"_s}));
							$nc(os)->write($($nc(ShortRequestBody$Server::RESPONSE)->getBytes($StandardCharsets::US_ASCII)));
						}
					} catch ($Throwable& t$) {
						if (s != nullptr) {
							try {
								s->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$4) {
					$assign(var$0, var$4);
				} $finally: {
					if (s != nullptr) {
						s->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$1) {
					continue;
				}
			}
		} catch ($Throwable& e) {
			if (!this->closed) {
				$nc($System::err)->println($$str({"Unexpected: "_s, e}));
				e->printStackTrace();
			}
		}
	}
}

void ShortRequestBody$Server::close() {
	if (this->closed) {
		return;
	}
	this->closed = true;
	try {
		$nc(this->ss)->close();
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, "Unexpected"_s, e);
	}
}

void clinit$ShortRequestBody$Server($Class* class$) {
	$assignStatic(ShortRequestBody$Server::RESPONSE, "HTTP/1.1 200 OK\r\nConnection: close\r\nContent-length: 0\r\n\r\n"_s);
}

ShortRequestBody$Server::ShortRequestBody$Server() {
}

$Class* ShortRequestBody$Server::load$($String* name, bool initialize) {
	$loadClass(ShortRequestBody$Server, name, initialize, &_ShortRequestBody$Server_ClassInfo_, clinit$ShortRequestBody$Server, allocate$ShortRequestBody$Server);
	return class$;
}

$Class* ShortRequestBody$Server::class$ = nullptr;