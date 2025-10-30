#include <MultiAuthTest$ServerAuth.h>

#include <MultiAuthTest.h>
#include <com/sun/net/httpserver/BasicAuthenticator.h>
#include <jcpp.h>

using $MultiAuthTest = ::MultiAuthTest;
using $BasicAuthenticator = ::com::sun::net::httpserver::BasicAuthenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _MultiAuthTest$ServerAuth_FieldInfo_[] = {
	{"passwd", "Ljava/lang/String;", nullptr, $VOLATILE, $field(MultiAuthTest$ServerAuth, passwd)},
	{}
};

$MethodInfo _MultiAuthTest$ServerAuth_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MultiAuthTest$ServerAuth::*)($String*)>(&MultiAuthTest$ServerAuth::init$))},
	{"checkCredentials", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiAuthTest$ServerAuth_InnerClassesInfo_[] = {
	{"MultiAuthTest$ServerAuth", "MultiAuthTest", "ServerAuth", $STATIC},
	{}
};

$ClassInfo _MultiAuthTest$ServerAuth_ClassInfo_ = {
	$ACC_SUPER,
	"MultiAuthTest$ServerAuth",
	"com.sun.net.httpserver.BasicAuthenticator",
	nullptr,
	_MultiAuthTest$ServerAuth_FieldInfo_,
	_MultiAuthTest$ServerAuth_MethodInfo_,
	nullptr,
	nullptr,
	_MultiAuthTest$ServerAuth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiAuthTest"
};

$Object* allocate$MultiAuthTest$ServerAuth($Class* clazz) {
	return $of($alloc(MultiAuthTest$ServerAuth));
}

void MultiAuthTest$ServerAuth::init$($String* realm) {
	$BasicAuthenticator::init$(realm);
	$set(this, passwd, "passwd"_s);
}

bool MultiAuthTest$ServerAuth::checkCredentials($String* username, $String* password) {
	bool var$0 = !"user"_s->equals(username);
	if (var$0 || !$nc(this->passwd)->equals(password)) {
		return false;
	}
	return true;
}

MultiAuthTest$ServerAuth::MultiAuthTest$ServerAuth() {
}

$Class* MultiAuthTest$ServerAuth::load$($String* name, bool initialize) {
	$loadClass(MultiAuthTest$ServerAuth, name, initialize, &_MultiAuthTest$ServerAuth_ClassInfo_, allocate$MultiAuthTest$ServerAuth);
	return class$;
}

$Class* MultiAuthTest$ServerAuth::class$ = nullptr;