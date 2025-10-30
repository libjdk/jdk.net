#include <B4769350$Server$AuthenticationHandlerT1d.h>

#include <B4769350$AuthenticationHandler.h>
#include <B4769350$Server.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <jcpp.h>

using $B4769350$AuthenticationHandler = ::B4769350$AuthenticationHandler;
using $B4769350$Server = ::B4769350$Server;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _B4769350$Server$AuthenticationHandlerT1d_FieldInfo_[] = {
	{"this$1", "LB4769350$Server;", nullptr, $FINAL | $SYNTHETIC, $field(B4769350$Server$AuthenticationHandlerT1d, this$1)},
	{"count", "I", nullptr, $VOLATILE, $field(B4769350$Server$AuthenticationHandlerT1d, count)},
	{}
};

$MethodInfo _B4769350$Server$AuthenticationHandlerT1d_MethodInfo_[] = {
	{"<init>", "(LB4769350$Server;)V", nullptr, 0, $method(static_cast<void(B4769350$Server$AuthenticationHandlerT1d::*)($B4769350$Server*)>(&B4769350$Server$AuthenticationHandlerT1d::init$))},
	{"handle", "(Lcom/sun/net/httpserver/HttpExchange;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _B4769350$Server$AuthenticationHandlerT1d_InnerClassesInfo_[] = {
	{"B4769350$Server", "B4769350", "Server", 0},
	{"B4769350$Server$AuthenticationHandlerT1d", "B4769350$Server", "AuthenticationHandlerT1d", 0},
	{}
};

$ClassInfo _B4769350$Server$AuthenticationHandlerT1d_ClassInfo_ = {
	$ACC_SUPER,
	"B4769350$Server$AuthenticationHandlerT1d",
	"java.lang.Object",
	"com.sun.net.httpserver.HttpHandler",
	_B4769350$Server$AuthenticationHandlerT1d_FieldInfo_,
	_B4769350$Server$AuthenticationHandlerT1d_MethodInfo_,
	nullptr,
	nullptr,
	_B4769350$Server$AuthenticationHandlerT1d_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B4769350"
};

$Object* allocate$B4769350$Server$AuthenticationHandlerT1d($Class* clazz) {
	return $of($alloc(B4769350$Server$AuthenticationHandlerT1d));
}

void B4769350$Server$AuthenticationHandlerT1d::init$($B4769350$Server* this$1) {
	$set(this, this$1, this$1);
	this->count = -1;
}

void B4769350$Server$AuthenticationHandlerT1d::handle($HttpExchange* exchange) {
	++this->count;
	switch (this->count) {
	case 0:
		{
			$B4769350$AuthenticationHandler::errorReply(exchange, "Basic realm=\"realm2\""_s);
			break;
		}
	case 1:
		{
			$B4769350$AuthenticationHandler::okReply(exchange);
			break;
		}
	default:
		{
			$nc($System::out)->println("Unexpected request"_s);
		}
	}
}

B4769350$Server$AuthenticationHandlerT1d::B4769350$Server$AuthenticationHandlerT1d() {
}

$Class* B4769350$Server$AuthenticationHandlerT1d::load$($String* name, bool initialize) {
	$loadClass(B4769350$Server$AuthenticationHandlerT1d, name, initialize, &_B4769350$Server$AuthenticationHandlerT1d_ClassInfo_, allocate$B4769350$Server$AuthenticationHandlerT1d);
	return class$;
}

$Class* B4769350$Server$AuthenticationHandlerT1d::class$ = nullptr;