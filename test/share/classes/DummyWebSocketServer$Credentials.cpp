#include <DummyWebSocketServer$Credentials.h>

#include <DummyWebSocketServer.h>
#include <jcpp.h>

using $DummyWebSocketServer = ::DummyWebSocketServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _DummyWebSocketServer$Credentials_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DummyWebSocketServer$Credentials, name$)},
	{"password", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DummyWebSocketServer$Credentials, password$)},
	{}
};

$MethodInfo _DummyWebSocketServer$Credentials_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DummyWebSocketServer$Credentials::*)($String*,$String*)>(&DummyWebSocketServer$Credentials::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"password", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DummyWebSocketServer$Credentials_InnerClassesInfo_[] = {
	{"DummyWebSocketServer$Credentials", "DummyWebSocketServer", "Credentials", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DummyWebSocketServer$Credentials_ClassInfo_ = {
	$ACC_SUPER,
	"DummyWebSocketServer$Credentials",
	"java.lang.Object",
	nullptr,
	_DummyWebSocketServer$Credentials_FieldInfo_,
	_DummyWebSocketServer$Credentials_MethodInfo_,
	nullptr,
	nullptr,
	_DummyWebSocketServer$Credentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DummyWebSocketServer"
};

$Object* allocate$DummyWebSocketServer$Credentials($Class* clazz) {
	return $of($alloc(DummyWebSocketServer$Credentials));
}

void DummyWebSocketServer$Credentials::init$($String* name, $String* password) {
	$set(this, name$, name);
	$set(this, password$, password);
}

$String* DummyWebSocketServer$Credentials::name() {
	return this->name$;
}

$String* DummyWebSocketServer$Credentials::password() {
	return this->password$;
}

DummyWebSocketServer$Credentials::DummyWebSocketServer$Credentials() {
}

$Class* DummyWebSocketServer$Credentials::load$($String* name, bool initialize) {
	$loadClass(DummyWebSocketServer$Credentials, name, initialize, &_DummyWebSocketServer$Credentials_ClassInfo_, allocate$DummyWebSocketServer$Credentials);
	return class$;
}

$Class* DummyWebSocketServer$Credentials::class$ = nullptr;