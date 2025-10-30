#include <HandshakeFailureTest$SSLServer.h>

#include <HandshakeFailureTest$AbstractServer.h>
#include <HandshakeFailureTest.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/security/SecureRandom.h>
#include <javax/net/ServerSocketFactory.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/TrustManager.h>
#include <jcpp.h>

using $HandshakeFailureTest = ::HandshakeFailureTest;
using $HandshakeFailureTest$AbstractServer = ::HandshakeFailureTest$AbstractServer;
using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SecureRandom = ::java::security::SecureRandom;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;
using $SSLSocket = ::javax::net::ssl::SSLSocket;

$FieldInfo _HandshakeFailureTest$SSLServer_FieldInfo_[] = {
	{"sslContext", "Ljavax/net/ssl/SSLContext;", nullptr, $STATIC | $FINAL, $staticField(HandshakeFailureTest$SSLServer, sslContext)},
	{"factory", "Ljavax/net/ServerSocketFactory;", nullptr, $STATIC | $FINAL, $staticField(HandshakeFailureTest$SSLServer, factory)},
	{}
};

$MethodInfo _HandshakeFailureTest$SSLServer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HandshakeFailureTest$SSLServer::*)()>(&HandshakeFailureTest$SSLServer::init$)), "java.io.IOException"},
	{"createUntrustingContext", "()Ljavax/net/ssl/SSLContext;", nullptr, $STATIC, $method(static_cast<$SSLContext*(*)()>(&HandshakeFailureTest$SSLServer::createUntrustingContext))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HandshakeFailureTest$SSLServer_InnerClassesInfo_[] = {
	{"HandshakeFailureTest$SSLServer", "HandshakeFailureTest", "SSLServer", $STATIC},
	{"HandshakeFailureTest$AbstractServer", "HandshakeFailureTest", "AbstractServer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HandshakeFailureTest$SSLServer_ClassInfo_ = {
	$ACC_SUPER,
	"HandshakeFailureTest$SSLServer",
	"HandshakeFailureTest$AbstractServer",
	nullptr,
	_HandshakeFailureTest$SSLServer_FieldInfo_,
	_HandshakeFailureTest$SSLServer_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeFailureTest$SSLServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HandshakeFailureTest"
};

$Object* allocate$HandshakeFailureTest$SSLServer($Class* clazz) {
	return $of($alloc(HandshakeFailureTest$SSLServer));
}

$SSLContext* HandshakeFailureTest$SSLServer::sslContext = nullptr;
$ServerSocketFactory* HandshakeFailureTest$SSLServer::factory = nullptr;

$SSLContext* HandshakeFailureTest$SSLServer::createUntrustingContext() {
	$init(HandshakeFailureTest$SSLServer);
	try {
		$var($SSLContext, sslContext, $SSLContext::getInstance("TLS"_s));
		$nc(sslContext)->init(nullptr, nullptr, nullptr);
		return sslContext;
	} catch ($Throwable& t) {
		$throwNew($AssertionError, $of(t));
	}
	$shouldNotReachHere();
}

void HandshakeFailureTest$SSLServer::init$() {
	$HandshakeFailureTest$AbstractServer::init$("SSLServer"_s, $($nc(HandshakeFailureTest$SSLServer::factory)->createServerSocket()));
}

void HandshakeFailureTest$SSLServer::run() {
	$useLocalCurrentObjectStackCache();
	while (!this->closed) {
		try {
			$var($SSLSocket, s, $cast($SSLSocket, $nc(this->ss)->accept()));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc($($nc(s)->getInputStream()))->read();
						$throwNew($AssertionError, $of("Should not reach here"_s));
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
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (s != nullptr) {
						s->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} catch ($SSLHandshakeException& expected) {
			$nc($System::out)->printf("SSLServer: caught expected exception: %s%n"_s, $$new($ObjectArray, {$of(expected)}));
		} catch ($IOException& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"SSLServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
			}
		} catch ($Error& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"SSLServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
				$throwNew($RuntimeException, e);
			}
			break;
		} catch ($RuntimeException& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"SSLServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
				$throwNew($RuntimeException, e);
			}
			break;
		}
	}
}

void clinit$HandshakeFailureTest$SSLServer($Class* class$) {
	$assignStatic(HandshakeFailureTest$SSLServer::sslContext, HandshakeFailureTest$SSLServer::createUntrustingContext());
	$assignStatic(HandshakeFailureTest$SSLServer::factory, $nc(HandshakeFailureTest$SSLServer::sslContext)->getServerSocketFactory());
}

HandshakeFailureTest$SSLServer::HandshakeFailureTest$SSLServer() {
}

$Class* HandshakeFailureTest$SSLServer::load$($String* name, bool initialize) {
	$loadClass(HandshakeFailureTest$SSLServer, name, initialize, &_HandshakeFailureTest$SSLServer_ClassInfo_, clinit$HandshakeFailureTest$SSLServer, allocate$HandshakeFailureTest$SSLServer);
	return class$;
}

$Class* HandshakeFailureTest$SSLServer::class$ = nullptr;