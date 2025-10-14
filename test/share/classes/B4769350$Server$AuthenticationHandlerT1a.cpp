#include <B4769350$Server$AuthenticationHandlerT1a.h>

#include <B4769350$AuthenticationHandler.h>
#include <B4769350$Server.h>
#include <B4769350.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/BrokenBarrierException.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <jcpp.h>

using $B4769350 = ::B4769350;
using $B4769350$AuthenticationHandler = ::B4769350$AuthenticationHandler;
using $B4769350$Server = ::B4769350$Server;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BrokenBarrierException = ::java::util::concurrent::BrokenBarrierException;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;

$FieldInfo _B4769350$Server$AuthenticationHandlerT1a_FieldInfo_[] = {
	{"this$1", "LB4769350$Server;", nullptr, $FINAL | $SYNTHETIC, $field(B4769350$Server$AuthenticationHandlerT1a, this$1)},
	{"count", "I", nullptr, $VOLATILE, $field(B4769350$Server$AuthenticationHandlerT1a, count)},
	{}
};

$MethodInfo _B4769350$Server$AuthenticationHandlerT1a_MethodInfo_[] = {
	{"<init>", "(LB4769350$Server;)V", nullptr, 0, $method(static_cast<void(B4769350$Server$AuthenticationHandlerT1a::*)($B4769350$Server*)>(&B4769350$Server$AuthenticationHandlerT1a::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _B4769350$Server$AuthenticationHandlerT1a_InnerClassesInfo_[] = {
	{"B4769350$Server", "B4769350", "Server", 0},
	{"B4769350$Server$AuthenticationHandlerT1a", "B4769350$Server", "AuthenticationHandlerT1a", 0},
	{}
};

$ClassInfo _B4769350$Server$AuthenticationHandlerT1a_ClassInfo_ = {
	$ACC_SUPER,
	"B4769350$Server$AuthenticationHandlerT1a",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_B4769350$Server$AuthenticationHandlerT1a_FieldInfo_,
	_B4769350$Server$AuthenticationHandlerT1a_MethodInfo_,
	nullptr,
	nullptr,
	_B4769350$Server$AuthenticationHandlerT1a_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B4769350"
};

$Object* allocate$B4769350$Server$AuthenticationHandlerT1a($Class* clazz) {
	return $of($alloc(B4769350$Server$AuthenticationHandlerT1a));
}

void B4769350$Server$AuthenticationHandlerT1a::init$($B4769350$Server* this$1) {
	$set(this, this$1, this$1);
	this->count = -1;
}

void B4769350$Server$AuthenticationHandlerT1a::handle($HttpExchange* exchange) {
	++this->count;
	try {
		switch (this->count) {
		case 0:
			{
				$B4769350$AuthenticationHandler::errorReply(exchange, "Basic realm=\"realm1\""_s);
				break;
			}
		case 1:
			{
				$init($B4769350);
				$nc($B4769350::t1Cond1)->await();
				$B4769350$AuthenticationHandler::okReply(exchange);
				break;
			}
		default:
			{
				$init($System);
				$nc($System::out)->println("Unexpected request"_s);
			}
		}
	} catch ($InterruptedException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($BrokenBarrierException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

B4769350$Server$AuthenticationHandlerT1a::B4769350$Server$AuthenticationHandlerT1a() {
}

$Class* B4769350$Server$AuthenticationHandlerT1a::load$($String* name, bool initialize) {
	$loadClass(B4769350$Server$AuthenticationHandlerT1a, name, initialize, &_B4769350$Server$AuthenticationHandlerT1a_ClassInfo_, allocate$B4769350$Server$AuthenticationHandlerT1a);
	return class$;
}

$Class* B4769350$Server$AuthenticationHandlerT1a::class$ = nullptr;