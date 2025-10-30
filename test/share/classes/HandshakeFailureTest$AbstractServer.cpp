#include <HandshakeFailureTest$AbstractServer.h>

#include <HandshakeFailureTest.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/CharSequence.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $HandshakeFailureTest = ::HandshakeFailureTest;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _HandshakeFailureTest$AbstractServer_FieldInfo_[] = {
	{"ss", "Ljava/net/ServerSocket;", nullptr, $PROTECTED | $FINAL, $field(HandshakeFailureTest$AbstractServer, ss)},
	{"closed", "Z", nullptr, $PROTECTED | $VOLATILE, $field(HandshakeFailureTest$AbstractServer, closed)},
	{}
};

$MethodInfo _HandshakeFailureTest$AbstractServer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/net/ServerSocket;)V", nullptr, 0, $method(static_cast<void(HandshakeFailureTest$AbstractServer::*)($String*,$ServerSocket*)>(&HandshakeFailureTest$AbstractServer::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC},
	{"getAuthority", "()Ljava/lang/String;", nullptr, 0},
	{"getPort", "()I", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HandshakeFailureTest$AbstractServer_InnerClassesInfo_[] = {
	{"HandshakeFailureTest$AbstractServer", "HandshakeFailureTest", "AbstractServer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HandshakeFailureTest$AbstractServer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"HandshakeFailureTest$AbstractServer",
	"java.lang.Thread",
	"java.lang.AutoCloseable",
	_HandshakeFailureTest$AbstractServer_FieldInfo_,
	_HandshakeFailureTest$AbstractServer_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeFailureTest$AbstractServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HandshakeFailureTest"
};

$Object* allocate$HandshakeFailureTest$AbstractServer($Class* clazz) {
	return $of($alloc(HandshakeFailureTest$AbstractServer));
}

$Object* HandshakeFailureTest$AbstractServer::clone() {
	 return this->$Thread::clone();
}

$String* HandshakeFailureTest$AbstractServer::toString() {
	 return this->$Thread::toString();
}

int32_t HandshakeFailureTest$AbstractServer::hashCode() {
	 return this->$Thread::hashCode();
}

bool HandshakeFailureTest$AbstractServer::equals(Object$* arg0) {
	 return this->$Thread::equals(arg0);
}

void HandshakeFailureTest$AbstractServer::finalize() {
	this->$Thread::finalize();
}

void HandshakeFailureTest$AbstractServer::init$($String* name, $ServerSocket* ss) {
	$useLocalCurrentObjectStackCache();
	$Thread::init$(name);
	$nc(ss)->setReuseAddress(false);
	ss->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$set(this, ss, ss);
	this->start();
}

int32_t HandshakeFailureTest$AbstractServer::getPort() {
	return $nc(this->ss)->getLocalPort();
}

$String* HandshakeFailureTest$AbstractServer::getAuthority() {
	$useLocalCurrentObjectStackCache();
	$var($String, address, $nc($($nc(this->ss)->getInetAddress()))->getHostAddress());
	if ($nc(address)->contains(":"_s)) {
		$assign(address, $str({"["_s, address, "]"_s}));
	}
	return $str({address, ":"_s, $$str($nc(this->ss)->getLocalPort())});
}

void HandshakeFailureTest$AbstractServer::close() {
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

HandshakeFailureTest$AbstractServer::HandshakeFailureTest$AbstractServer() {
}

$Class* HandshakeFailureTest$AbstractServer::load$($String* name, bool initialize) {
	$loadClass(HandshakeFailureTest$AbstractServer, name, initialize, &_HandshakeFailureTest$AbstractServer_ClassInfo_, allocate$HandshakeFailureTest$AbstractServer);
	return class$;
}

$Class* HandshakeFailureTest$AbstractServer::class$ = nullptr;