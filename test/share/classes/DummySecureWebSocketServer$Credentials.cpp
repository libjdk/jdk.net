#include <DummySecureWebSocketServer$Credentials.h>

#include <DummySecureWebSocketServer.h>
#include <jcpp.h>

using $DummySecureWebSocketServer = ::DummySecureWebSocketServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _DummySecureWebSocketServer$Credentials_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer$Credentials, name$)},
	{"password", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer$Credentials, password$)},
	{}
};

$MethodInfo _DummySecureWebSocketServer$Credentials_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DummySecureWebSocketServer$Credentials::*)($String*,$String*)>(&DummySecureWebSocketServer$Credentials::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"password", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DummySecureWebSocketServer$Credentials_InnerClassesInfo_[] = {
	{"DummySecureWebSocketServer$Credentials", "DummySecureWebSocketServer", "Credentials", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DummySecureWebSocketServer$Credentials_ClassInfo_ = {
	$ACC_SUPER,
	"DummySecureWebSocketServer$Credentials",
	"java.lang.Object",
	nullptr,
	_DummySecureWebSocketServer$Credentials_FieldInfo_,
	_DummySecureWebSocketServer$Credentials_MethodInfo_,
	nullptr,
	nullptr,
	_DummySecureWebSocketServer$Credentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummySecureWebSocketServer"
};

$Object* allocate$DummySecureWebSocketServer$Credentials($Class* clazz) {
	return $of($alloc(DummySecureWebSocketServer$Credentials));
}

void DummySecureWebSocketServer$Credentials::init$($String* name, $String* password) {
	$set(this, name$, name);
	$set(this, password$, password);
}

$String* DummySecureWebSocketServer$Credentials::name() {
	return this->name$;
}

$String* DummySecureWebSocketServer$Credentials::password() {
	return this->password$;
}

DummySecureWebSocketServer$Credentials::DummySecureWebSocketServer$Credentials() {
}

$Class* DummySecureWebSocketServer$Credentials::load$($String* name, bool initialize) {
	$loadClass(DummySecureWebSocketServer$Credentials, name, initialize, &_DummySecureWebSocketServer$Credentials_ClassInfo_, allocate$DummySecureWebSocketServer$Credentials);
	return class$;
}

$Class* DummySecureWebSocketServer$Credentials::class$ = nullptr;