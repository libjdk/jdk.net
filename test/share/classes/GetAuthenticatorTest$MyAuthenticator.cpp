#include <GetAuthenticatorTest$MyAuthenticator.h>

#include <GetAuthenticatorTest.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <jcpp.h>

using $GetAuthenticatorTest = ::GetAuthenticatorTest;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;

$MethodInfo _GetAuthenticatorTest$MyAuthenticator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetAuthenticatorTest$MyAuthenticator::*)()>(&GetAuthenticatorTest$MyAuthenticator::init$))},
	{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetAuthenticatorTest$MyAuthenticator_InnerClassesInfo_[] = {
	{"GetAuthenticatorTest$MyAuthenticator", "GetAuthenticatorTest", "MyAuthenticator", $STATIC | $FINAL},
	{}
};

$ClassInfo _GetAuthenticatorTest$MyAuthenticator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"GetAuthenticatorTest$MyAuthenticator",
	"java.net.Authenticator",
	nullptr,
	nullptr,
	_GetAuthenticatorTest$MyAuthenticator_MethodInfo_,
	nullptr,
	nullptr,
	_GetAuthenticatorTest$MyAuthenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetAuthenticatorTest"
};

$Object* allocate$GetAuthenticatorTest$MyAuthenticator($Class* clazz) {
	return $of($alloc(GetAuthenticatorTest$MyAuthenticator));
}

void GetAuthenticatorTest$MyAuthenticator::init$() {
	$Authenticator::init$();
}

$PasswordAuthentication* GetAuthenticatorTest$MyAuthenticator::getPasswordAuthentication() {
	$nc($System::out)->println("Auth called"_s);
	return ($new($PasswordAuthentication, "user"_s, $("passwordNotCheckedAnyway"_s->toCharArray())));
}

GetAuthenticatorTest$MyAuthenticator::GetAuthenticatorTest$MyAuthenticator() {
}

$Class* GetAuthenticatorTest$MyAuthenticator::load$($String* name, bool initialize) {
	$loadClass(GetAuthenticatorTest$MyAuthenticator, name, initialize, &_GetAuthenticatorTest$MyAuthenticator_ClassInfo_, allocate$GetAuthenticatorTest$MyAuthenticator);
	return class$;
}

$Class* GetAuthenticatorTest$MyAuthenticator::class$ = nullptr;