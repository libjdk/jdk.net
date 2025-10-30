#include <ALPNFailureTest$ReadOnlyServer.h>

#include <ALPNFailureTest.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Runnable.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketTimeoutException.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <jcpp.h>

#undef SO_LINGER

using $ALPNFailureTest = ::ALPNFailureTest;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketOption = ::java::net::SocketOption;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;

$FieldInfo _ALPNFailureTest$ReadOnlyServer_FieldInfo_[] = {
	{"socket", "Ljava/net/ServerSocket;", nullptr, $FINAL, $field(ALPNFailureTest$ReadOnlyServer, socket)},
	{"errorRef", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljava/lang/Throwable;>;", $FINAL, $field(ALPNFailureTest$ReadOnlyServer, errorRef)},
	{"closing", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL, $field(ALPNFailureTest$ReadOnlyServer, closing)},
	{}
};

$MethodInfo _ALPNFailureTest$ReadOnlyServer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, 0, $method(static_cast<void(ALPNFailureTest$ReadOnlyServer::*)($ServerSocket*)>(&ALPNFailureTest$ReadOnlyServer::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ALPNFailureTest$ReadOnlyServer_InnerClassesInfo_[] = {
	{"ALPNFailureTest$ReadOnlyServer", "ALPNFailureTest", "ReadOnlyServer", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ALPNFailureTest$ReadOnlyServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ALPNFailureTest$ReadOnlyServer",
	"java.lang.Object",
	"java.lang.Runnable,java.io.Closeable",
	_ALPNFailureTest$ReadOnlyServer_FieldInfo_,
	_ALPNFailureTest$ReadOnlyServer_MethodInfo_,
	nullptr,
	nullptr,
	_ALPNFailureTest$ReadOnlyServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ALPNFailureTest"
};

$Object* allocate$ALPNFailureTest$ReadOnlyServer($Class* clazz) {
	return $of($alloc(ALPNFailureTest$ReadOnlyServer));
}

int32_t ALPNFailureTest$ReadOnlyServer::hashCode() {
	 return this->$Runnable::hashCode();
}

bool ALPNFailureTest$ReadOnlyServer::equals(Object$* arg0) {
	 return this->$Runnable::equals(arg0);
}

$Object* ALPNFailureTest$ReadOnlyServer::clone() {
	 return this->$Runnable::clone();
}

$String* ALPNFailureTest$ReadOnlyServer::toString() {
	 return this->$Runnable::toString();
}

void ALPNFailureTest$ReadOnlyServer::finalize() {
	this->$Runnable::finalize();
}

void ALPNFailureTest$ReadOnlyServer::init$($ServerSocket* socket) {
	$set(this, errorRef, $new($AtomicReference));
	$set(this, closing, $new($AtomicBoolean));
	$set(this, socket, socket);
}

void ALPNFailureTest$ReadOnlyServer::run() {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	int32_t all = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc($System::out)->println("Server starting"_s);
				while (!$nc(this->closing)->get()) {
					all += count;
					count = 0;
					{
						$var($Socket, client, $nc(this->socket)->accept());
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									$nc(client)->setSoTimeout(1000);
									$init($StandardSocketOptions);
									client->setOption($StandardSocketOptions::SO_LINGER, $($Integer::valueOf(0)));
									$var($InputStream, is, client->getInputStream());
									$var($OutputStream, os, client->getOutputStream());
									bool drain = true;
									int32_t timeouts = 0;
									while (drain) {
										try {
											$nc(is)->read();
											++count;
											if (count >= 50) {
												drain = false;
											}
										} catch ($SocketTimeoutException& so) {
											if (count > 0) {
												++timeouts;
											}
											if (timeouts == 5) {
												drain = false;
											}
										}
									}
									$nc($System::out)->println($$str({"Got "_s, $$str(count), " bytes"_s}));
								} catch ($Throwable& t$) {
									if (client != nullptr) {
										try {
											client->close();
										} catch ($Throwable& x2) {
											t$->addSuppressed(x2);
										}
									}
									$throw(t$);
								}
							} catch ($Throwable& var$2) {
								$assign(var$1, var$2);
							} /*finally*/ {
								if (client != nullptr) {
									client->close();
								}
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					}
				}
			} catch ($Throwable& t) {
				if (!$nc(this->closing)->get()) {
					$nc(this->errorRef)->set(t);
					t->printStackTrace();
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$nc($System::out)->println($$str({"Server existing after reading "_s, $$str((all + count)), " bytes"_s}));
			close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ALPNFailureTest$ReadOnlyServer::close() {
	if ($nc(this->closing)->getAndSet(true)) {
		return;
	}
	try {
		$nc(this->socket)->close();
	} catch ($IOException& x) {
		$nc($System::out)->println($$str({"Exception while closing: "_s, x}));
	}
}

ALPNFailureTest$ReadOnlyServer::ALPNFailureTest$ReadOnlyServer() {
}

$Class* ALPNFailureTest$ReadOnlyServer::load$($String* name, bool initialize) {
	$loadClass(ALPNFailureTest$ReadOnlyServer, name, initialize, &_ALPNFailureTest$ReadOnlyServer_ClassInfo_, allocate$ALPNFailureTest$ReadOnlyServer);
	return class$;
}

$Class* ALPNFailureTest$ReadOnlyServer::class$ = nullptr;