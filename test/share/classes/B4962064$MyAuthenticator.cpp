#include <B4962064$MyAuthenticator.h>

#include <B4962064.h>
#include <java/net/Authenticator$RequestorType.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/URL.h>
#include <jcpp.h>

#undef PROXY
#undef SERVER

using $B4962064 = ::B4962064;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $Authenticator$RequestorType = ::java::net::Authenticator$RequestorType;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URL = ::java::net::URL;

$FieldInfo _B4962064$MyAuthenticator_FieldInfo_[] = {
	{"count", "I", nullptr, 0, $field(B4962064$MyAuthenticator, count)},
	{}
};

$MethodInfo _B4962064$MyAuthenticator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(B4962064$MyAuthenticator::*)()>(&B4962064$MyAuthenticator::init$))},
	{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _B4962064$MyAuthenticator_InnerClassesInfo_[] = {
	{"B4962064$MyAuthenticator", "B4962064", "MyAuthenticator", $STATIC},
	{}
};

$ClassInfo _B4962064$MyAuthenticator_ClassInfo_ = {
	$ACC_SUPER,
	"B4962064$MyAuthenticator",
	"java.net.Authenticator",
	nullptr,
	_B4962064$MyAuthenticator_FieldInfo_,
	_B4962064$MyAuthenticator_MethodInfo_,
	nullptr,
	nullptr,
	_B4962064$MyAuthenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B4962064"
};

$Object* allocate$B4962064$MyAuthenticator($Class* clazz) {
	return $of($alloc(B4962064$MyAuthenticator));
}

void B4962064$MyAuthenticator::init$() {
	$Authenticator::init$();
	this->count = 0;
}

$PasswordAuthentication* B4962064$MyAuthenticator::getPasswordAuthentication() {
	$useLocalCurrentObjectStackCache();
	$var($URL, url, getRequestingURL());
	$init($B4962064);
	if (!$nc(url)->equals($B4962064::urlsave)) {
		$B4962064::except("urls not equal"_s);
	}
	$Authenticator$RequestorType* expected = nullptr;
	if (this->count == 0) {
		$init($Authenticator$RequestorType);
		expected = $Authenticator$RequestorType::SERVER;
	} else {
		$init($Authenticator$RequestorType);
		expected = $Authenticator$RequestorType::PROXY;
	}
	if (getRequestorType() != expected) {
		$B4962064::except("wrong authtype"_s);
	}
	++this->count;
	return ($new($PasswordAuthentication, "user"_s, $("passwordNotCheckedAnyway"_s->toCharArray())));
}

B4962064$MyAuthenticator::B4962064$MyAuthenticator() {
}

$Class* B4962064$MyAuthenticator::load$($String* name, bool initialize) {
	$loadClass(B4962064$MyAuthenticator, name, initialize, &_B4962064$MyAuthenticator_ClassInfo_, allocate$B4962064$MyAuthenticator);
	return class$;
}

$Class* B4962064$MyAuthenticator::class$ = nullptr;