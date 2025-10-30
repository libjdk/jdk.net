#include <SecureZipFSProvider$TestPath$1.h>

#include <SecureZipFSProvider$SecureZipFS.h>
#include <SecureZipFSProvider$TestPath.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $SecureZipFSProvider$SecureZipFS = ::SecureZipFSProvider$SecureZipFS;
using $SecureZipFSProvider$TestPath = ::SecureZipFSProvider$TestPath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

$FieldInfo _SecureZipFSProvider$TestPath$1_FieldInfo_[] = {
	{"this$0", "LSecureZipFSProvider$TestPath;", nullptr, $FINAL | $SYNTHETIC, $field(SecureZipFSProvider$TestPath$1, this$0)},
	{"val$itr", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(SecureZipFSProvider$TestPath$1, val$itr)},
	{}
};

$MethodInfo _SecureZipFSProvider$TestPath$1_MethodInfo_[] = {
	{"<init>", "(LSecureZipFSProvider$TestPath;Ljava/util/Iterator;)V", nullptr, 0, $method(static_cast<void(SecureZipFSProvider$TestPath$1::*)($SecureZipFSProvider$TestPath*,$Iterator*)>(&SecureZipFSProvider$TestPath$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SecureZipFSProvider$TestPath$1_EnclosingMethodInfo_ = {
	"SecureZipFSProvider$TestPath",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _SecureZipFSProvider$TestPath$1_InnerClassesInfo_[] = {
	{"SecureZipFSProvider$TestPath", "SecureZipFSProvider", "TestPath", $STATIC},
	{"SecureZipFSProvider$TestPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SecureZipFSProvider$TestPath$1_ClassInfo_ = {
	$ACC_SUPER,
	"SecureZipFSProvider$TestPath$1",
	"java.lang.Object",
	"java.util.Iterator",
	_SecureZipFSProvider$TestPath$1_FieldInfo_,
	_SecureZipFSProvider$TestPath$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_SecureZipFSProvider$TestPath$1_EnclosingMethodInfo_,
	_SecureZipFSProvider$TestPath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SecureZipFSProvider"
};

$Object* allocate$SecureZipFSProvider$TestPath$1($Class* clazz) {
	return $of($alloc(SecureZipFSProvider$TestPath$1));
}

void SecureZipFSProvider$TestPath$1::init$($SecureZipFSProvider$TestPath* this$0, $Iterator* val$itr) {
	$set(this, this$0, this$0);
	$set(this, val$itr, val$itr);
}

bool SecureZipFSProvider$TestPath$1::hasNext() {
	return $nc(this->val$itr)->hasNext();
}

$Object* SecureZipFSProvider$TestPath$1::next() {
	return $of($nc(this->this$0->fs)->wrap($cast($Path, $($nc(this->val$itr)->next()))));
}

void SecureZipFSProvider$TestPath$1::remove() {
	$nc(this->val$itr)->remove();
}

SecureZipFSProvider$TestPath$1::SecureZipFSProvider$TestPath$1() {
}

$Class* SecureZipFSProvider$TestPath$1::load$($String* name, bool initialize) {
	$loadClass(SecureZipFSProvider$TestPath$1, name, initialize, &_SecureZipFSProvider$TestPath$1_ClassInfo_, allocate$SecureZipFSProvider$TestPath$1);
	return class$;
}

$Class* SecureZipFSProvider$TestPath$1::class$ = nullptr;