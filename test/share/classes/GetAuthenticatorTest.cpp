#include <GetAuthenticatorTest.h>

#include <GetAuthenticatorTest$MyAuthenticator.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Authenticator.h>
#include <java/net/NetPermission.h>
#include <java/security/AccessControlException.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $GetAuthenticatorTest$MyAuthenticator = ::GetAuthenticatorTest$MyAuthenticator;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Authenticator = ::java::net::Authenticator;
using $NetPermission = ::java::net::NetPermission;
using $AccessControlException = ::java::security::AccessControlException;
using $Permission = ::java::security::Permission;

$MethodInfo _GetAuthenticatorTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetAuthenticatorTest::*)()>(&GetAuthenticatorTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetAuthenticatorTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _GetAuthenticatorTest_InnerClassesInfo_[] = {
	{"GetAuthenticatorTest$MyAuthenticator", "GetAuthenticatorTest", "MyAuthenticator", $STATIC | $FINAL},
	{}
};

$ClassInfo _GetAuthenticatorTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAuthenticatorTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetAuthenticatorTest_MethodInfo_,
	nullptr,
	nullptr,
	_GetAuthenticatorTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetAuthenticatorTest$MyAuthenticator"
};

$Object* allocate$GetAuthenticatorTest($Class* clazz) {
	return $of($alloc(GetAuthenticatorTest));
}

void GetAuthenticatorTest::init$() {
}

void GetAuthenticatorTest::main($StringArray* args) {
	$load(GetAuthenticatorTest);
	$beforeCallerSensitive();
	$var($Authenticator, defaultAuth, $Authenticator::getDefault());
	if (defaultAuth != nullptr) {
		$throwNew($RuntimeException, "Unexpected authenticator: null expected"_s);
	}
	$var($GetAuthenticatorTest$MyAuthenticator, auth, $new($GetAuthenticatorTest$MyAuthenticator));
	$Authenticator::setDefault(auth);
	$assign(defaultAuth, $Authenticator::getDefault());
	if (!$equals(defaultAuth, auth)) {
		$throwNew($RuntimeException, "Unexpected authenticator: auth expected"_s);
	}
	$System::setSecurityManager($$new($SecurityManager));
	try {
		$assign(defaultAuth, $Authenticator::getDefault());
		$throwNew($RuntimeException, "Expected security exception not raised"_s);
	} catch ($AccessControlException&) {
		$var($AccessControlException, s, $catch());
		$nc($System::out)->println($$str({"Got expected exception: "_s, s}));
		if (!$nc($(s->getPermission()))->equals($$new($NetPermission, "requestPasswordAuthentication"_s))) {
			$throwNew($RuntimeException, $$str({"Unexpected permission check: "_s, $(s->getPermission())}));
		}
	}
	$nc($System::out)->println($$str({"Test passed with default authenticator "_s, defaultAuth}));
}

GetAuthenticatorTest::GetAuthenticatorTest() {
}

$Class* GetAuthenticatorTest::load$($String* name, bool initialize) {
	$loadClass(GetAuthenticatorTest, name, initialize, &_GetAuthenticatorTest_ClassInfo_, allocate$GetAuthenticatorTest);
	return class$;
}

$Class* GetAuthenticatorTest::class$ = nullptr;