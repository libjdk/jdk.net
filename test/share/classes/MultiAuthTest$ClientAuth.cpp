#include <MultiAuthTest$ClientAuth.h>

#include <MultiAuthTest.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $MultiAuthTest = ::MultiAuthTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _MultiAuthTest$ClientAuth_FieldInfo_[] = {
	{"count", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL, $field(MultiAuthTest$ClientAuth, count)},
	{"passwd", "Ljava/lang/String;", nullptr, $VOLATILE, $field(MultiAuthTest$ClientAuth, passwd)},
	{}
};

$MethodInfo _MultiAuthTest$ClientAuth_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MultiAuthTest$ClientAuth::*)()>(&MultiAuthTest$ClientAuth::init$))},
	{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MultiAuthTest$ClientAuth_InnerClassesInfo_[] = {
	{"MultiAuthTest$ClientAuth", "MultiAuthTest", "ClientAuth", $STATIC},
	{}
};

$ClassInfo _MultiAuthTest$ClientAuth_ClassInfo_ = {
	$ACC_SUPER,
	"MultiAuthTest$ClientAuth",
	"java.net.Authenticator",
	nullptr,
	_MultiAuthTest$ClientAuth_FieldInfo_,
	_MultiAuthTest$ClientAuth_MethodInfo_,
	nullptr,
	nullptr,
	_MultiAuthTest$ClientAuth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiAuthTest"
};

$Object* allocate$MultiAuthTest$ClientAuth($Class* clazz) {
	return $of($alloc(MultiAuthTest$ClientAuth));
}

void MultiAuthTest$ClientAuth::init$() {
	$Authenticator::init$();
	$set(this, count, $new($AtomicInteger));
	$set(this, passwd, "passwd"_s);
}

$PasswordAuthentication* MultiAuthTest$ClientAuth::getPasswordAuthentication() {
	$nc(this->count)->incrementAndGet();
	return $new($PasswordAuthentication, "user"_s, $($nc(this->passwd)->toCharArray()));
}

MultiAuthTest$ClientAuth::MultiAuthTest$ClientAuth() {
}

$Class* MultiAuthTest$ClientAuth::load$($String* name, bool initialize) {
	$loadClass(MultiAuthTest$ClientAuth, name, initialize, &_MultiAuthTest$ClientAuth_ClassInfo_, allocate$MultiAuthTest$ClientAuth);
	return class$;
}

$Class* MultiAuthTest$ClientAuth::class$ = nullptr;