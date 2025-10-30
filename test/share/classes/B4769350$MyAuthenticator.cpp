#include <B4769350$MyAuthenticator.h>

#include <B4769350.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <jcpp.h>

using $B4769350 = ::B4769350;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;

$FieldInfo _B4769350$MyAuthenticator_FieldInfo_[] = {
	{"count", "I", nullptr, $VOLATILE, $field(B4769350$MyAuthenticator, count)},
	{}
};

$MethodInfo _B4769350$MyAuthenticator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(B4769350$MyAuthenticator::*)()>(&B4769350$MyAuthenticator::init$))},
	{"getCount", "()I", nullptr, $PUBLIC},
	{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC},
	{"resetCount", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _B4769350$MyAuthenticator_InnerClassesInfo_[] = {
	{"B4769350$MyAuthenticator", "B4769350", "MyAuthenticator", $STATIC},
	{}
};

$ClassInfo _B4769350$MyAuthenticator_ClassInfo_ = {
	$ACC_SUPER,
	"B4769350$MyAuthenticator",
	"java.net.Authenticator",
	nullptr,
	_B4769350$MyAuthenticator_FieldInfo_,
	_B4769350$MyAuthenticator_MethodInfo_,
	nullptr,
	nullptr,
	_B4769350$MyAuthenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B4769350"
};

$Object* allocate$B4769350$MyAuthenticator($Class* clazz) {
	return $of($alloc(B4769350$MyAuthenticator));
}

void B4769350$MyAuthenticator::init$() {
	$Authenticator::init$();
	this->count = 0;
}

$PasswordAuthentication* B4769350$MyAuthenticator::getPasswordAuthentication() {
	$useLocalCurrentObjectStackCache();
	$var($PasswordAuthentication, pw, nullptr);
	$assign(pw, $new($PasswordAuthentication, "user"_s, $("pass1"_s->toCharArray())));
	++this->count;
	return pw;
}

void B4769350$MyAuthenticator::resetCount() {
	this->count = 0;
}

int32_t B4769350$MyAuthenticator::getCount() {
	return this->count;
}

B4769350$MyAuthenticator::B4769350$MyAuthenticator() {
}

$Class* B4769350$MyAuthenticator::load$($String* name, bool initialize) {
	$loadClass(B4769350$MyAuthenticator, name, initialize, &_B4769350$MyAuthenticator_ClassInfo_, allocate$B4769350$MyAuthenticator);
	return class$;
}

$Class* B4769350$MyAuthenticator::class$ = nullptr;