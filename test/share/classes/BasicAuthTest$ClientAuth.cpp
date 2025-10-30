#include <BasicAuthTest$ClientAuth.h>

#include <BasicAuthTest.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <jcpp.h>

using $BasicAuthTest = ::BasicAuthTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;

$FieldInfo _BasicAuthTest$ClientAuth_FieldInfo_[] = {
	{"count", "I", nullptr, $VOLATILE, $field(BasicAuthTest$ClientAuth, count)},
	{}
};

$MethodInfo _BasicAuthTest$ClientAuth_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicAuthTest$ClientAuth::*)()>(&BasicAuthTest$ClientAuth::init$))},
	{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicAuthTest$ClientAuth_InnerClassesInfo_[] = {
	{"BasicAuthTest$ClientAuth", "BasicAuthTest", "ClientAuth", $STATIC},
	{}
};

$ClassInfo _BasicAuthTest$ClientAuth_ClassInfo_ = {
	$ACC_SUPER,
	"BasicAuthTest$ClientAuth",
	"java.net.Authenticator",
	nullptr,
	_BasicAuthTest$ClientAuth_FieldInfo_,
	_BasicAuthTest$ClientAuth_MethodInfo_,
	nullptr,
	nullptr,
	_BasicAuthTest$ClientAuth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"BasicAuthTest"
};

$Object* allocate$BasicAuthTest$ClientAuth($Class* clazz) {
	return $of($alloc(BasicAuthTest$ClientAuth));
}

void BasicAuthTest$ClientAuth::init$() {
	$Authenticator::init$();
	this->count = 0;
}

$PasswordAuthentication* BasicAuthTest$ClientAuth::getPasswordAuthentication() {
	++this->count;
	return $new($PasswordAuthentication, "user"_s, $("passwd"_s->toCharArray()));
}

BasicAuthTest$ClientAuth::BasicAuthTest$ClientAuth() {
}

$Class* BasicAuthTest$ClientAuth::load$($String* name, bool initialize) {
	$loadClass(BasicAuthTest$ClientAuth, name, initialize, &_BasicAuthTest$ClientAuth_ClassInfo_, allocate$BasicAuthTest$ClientAuth);
	return class$;
}

$Class* BasicAuthTest$ClientAuth::class$ = nullptr;