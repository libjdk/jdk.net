#include <jdk/net/UnixDomainPrincipal.h>

#include <java/lang/Record.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/runtime/ObjectMethods.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Record = ::java::lang::Record;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ObjectMethods = ::java::lang::runtime::ObjectMethods;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $Objects = ::java::util::Objects;

namespace jdk {
	namespace net {

$FieldInfo _UnixDomainPrincipal_FieldInfo_[] = {
	{"user", "Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PRIVATE | $FINAL, $field(UnixDomainPrincipal, user$)},
	{"group", "Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PRIVATE | $FINAL, $field(UnixDomainPrincipal, group$)},
	{}
};

$MethodInfo _UnixDomainPrincipal_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/attribute/UserPrincipal;Ljava/nio/file/attribute/GroupPrincipal;)V", nullptr, $PUBLIC, $method(static_cast<void(UnixDomainPrincipal::*)($UserPrincipal*,$GroupPrincipal*)>(&UnixDomainPrincipal::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"group", "()Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC, $method(static_cast<$GroupPrincipal*(UnixDomainPrincipal::*)()>(&UnixDomainPrincipal::group))},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"user", "()Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC, $method(static_cast<$UserPrincipal*(UnixDomainPrincipal::*)()>(&UnixDomainPrincipal::user))},
	{}
};

$ClassInfo _UnixDomainPrincipal_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.net.UnixDomainPrincipal",
	"java.lang.Record",
	nullptr,
	_UnixDomainPrincipal_FieldInfo_,
	_UnixDomainPrincipal_MethodInfo_
};

$Object* allocate$UnixDomainPrincipal($Class* clazz) {
	return $of($alloc(UnixDomainPrincipal));
}

void UnixDomainPrincipal::init$($UserPrincipal* user, $GroupPrincipal* group) {
	$Record::init$();
	$Objects::requireNonNull(user);
	$Objects::requireNonNull(group);
	$set(this, user$, user);
	$set(this, group$, group);
}

$UserPrincipal* UnixDomainPrincipal::user() {
	return this->user$;
}

$GroupPrincipal* UnixDomainPrincipal::group() {
	return this->group$;
}

$String* UnixDomainPrincipal::toString() {
	$useLocalCurrentObjectStackCache();
	return $cast($String, $cast($MethodHandle, $($ObjectMethods::bootstrap($($MethodHandles::lookup()), "toString"_s, $($MethodType::methodType(nullptr)), UnixDomainPrincipal::class$, "user;group"_s, $$new($MethodHandleArray, {nullptr, nullptr}))))->invoke($$new($ObjectArray, {$of(this)})));
}

int32_t UnixDomainPrincipal::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $intValue($cast($MethodHandle, $($ObjectMethods::bootstrap($($MethodHandles::lookup()), "hashCode"_s, $($MethodType::methodType(nullptr)), UnixDomainPrincipal::class$, "user;group"_s, $$new($MethodHandleArray, {nullptr, nullptr}))))->invoke($$new($ObjectArray, {$of(this)})));
}

bool UnixDomainPrincipal::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	return $booleanValue($cast($MethodHandle, $($ObjectMethods::bootstrap($($MethodHandles::lookup()), "equals"_s, $($MethodType::methodType(nullptr)), UnixDomainPrincipal::class$, "user;group"_s, $$new($MethodHandleArray, {nullptr, nullptr}))))->invoke($$new($ObjectArray, {$of(this), o})));
}

UnixDomainPrincipal::UnixDomainPrincipal() {
}

$Class* UnixDomainPrincipal::load$($String* name, bool initialize) {
	$loadClass(UnixDomainPrincipal, name, initialize, &_UnixDomainPrincipal_ClassInfo_, allocate$UnixDomainPrincipal);
	return class$;
}

$Class* UnixDomainPrincipal::class$ = nullptr;

	} // net
} // jdk