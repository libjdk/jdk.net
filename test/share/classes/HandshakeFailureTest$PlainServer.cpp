#include <HandshakeFailureTest$PlainServer.h>

#include <HandshakeFailureTest$AbstractServer.h>
#include <HandshakeFailureTest.h>
#include <java/io/DataInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $HandshakeFailureTest = ::HandshakeFailureTest;
using $HandshakeFailureTest$AbstractServer = ::HandshakeFailureTest$AbstractServer;
using $DataInputStream = ::java::io::DataInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$FieldInfo _HandshakeFailureTest$PlainServer_FieldInfo_[] = {
	{"count", "I", nullptr, $PRIVATE | $VOLATILE, $field(HandshakeFailureTest$PlainServer, count)},
	{}
};

$MethodInfo _HandshakeFailureTest$PlainServer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HandshakeFailureTest$PlainServer::*)()>(&HandshakeFailureTest$PlainServer::init$)), "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HandshakeFailureTest$PlainServer_InnerClassesInfo_[] = {
	{"HandshakeFailureTest$PlainServer", "HandshakeFailureTest", "PlainServer", $STATIC},
	{"HandshakeFailureTest$AbstractServer", "HandshakeFailureTest", "AbstractServer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HandshakeFailureTest$PlainServer_ClassInfo_ = {
	$ACC_SUPER,
	"HandshakeFailureTest$PlainServer",
	"HandshakeFailureTest$AbstractServer",
	nullptr,
	_HandshakeFailureTest$PlainServer_FieldInfo_,
	_HandshakeFailureTest$PlainServer_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeFailureTest$PlainServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HandshakeFailureTest"
};

$Object* allocate$HandshakeFailureTest$PlainServer($Class* clazz) {
	return $of($alloc(HandshakeFailureTest$PlainServer));
}

void HandshakeFailureTest$PlainServer::init$() {
	$HandshakeFailureTest$AbstractServer::init$("PlainServer"_s, $$new($ServerSocket));
}

void HandshakeFailureTest$PlainServer::run() {
	$useLocalCurrentObjectStackCache();
	while (!this->closed) {
		try {
			$var($Socket, s, $nc(this->ss)->accept());
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						++this->count;
						$var($DataInputStream, din, $new($DataInputStream, $($nc(s)->getInputStream())));
						int32_t contentType = din->read();
						$nc($System::out)->println($$str({"ContentType:"_s, $$str(contentType)}));
						int32_t majorVersion = din->read();
						$nc($System::out)->println($$str({"Major:"_s, $$str(majorVersion)}));
						int32_t minorVersion = din->read();
						$nc($System::out)->println($$str({"Minor:"_s, $$str(minorVersion)}));
						int32_t length = din->readShort();
						$nc($System::out)->println($$str({"length:"_s, $$str(length)}));
						$var($bytes, ba, $new($bytes, length));
						din->readFully(ba);
						$Thread::sleep(10 * (this->count % 10));
						$nc(s)->close();
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
		} catch ($IOException& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"PlainServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
			}
		} catch ($InterruptedException& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"PlainServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			}
			break;
		} catch ($Error& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"PlainServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
				$throwNew($RuntimeException, e);
			}
			break;
		} catch ($RuntimeException& e) {
			if (!this->closed) {
				$nc($System::out)->println($$str({"PlainServer: unexpected "_s, e}));
				e->printStackTrace($System::out);
				$throwNew($RuntimeException, e);
			}
			break;
		}
	}
}

HandshakeFailureTest$PlainServer::HandshakeFailureTest$PlainServer() {
}

$Class* HandshakeFailureTest$PlainServer::load$($String* name, bool initialize) {
	$loadClass(HandshakeFailureTest$PlainServer, name, initialize, &_HandshakeFailureTest$PlainServer_ClassInfo_, allocate$HandshakeFailureTest$PlainServer);
	return class$;
}

$Class* HandshakeFailureTest$PlainServer::class$ = nullptr;