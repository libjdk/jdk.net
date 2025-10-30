#include <JavadocExamples$Foo.h>

#include <JavadocExamples.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef UTF_8

using $JavadocExamples = ::JavadocExamples;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$FieldInfo _JavadocExamples$Foo_FieldInfo_[] = {
	{"bytes", "[B", nullptr, 0, $field(JavadocExamples$Foo, bytes)},
	{}
};

$MethodInfo _JavadocExamples$Foo_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$Foo::*)($bytes*)>(&JavadocExamples$Foo::init$))},
	{"asString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavadocExamples$Foo_InnerClassesInfo_[] = {
	{"JavadocExamples$Foo", "JavadocExamples", "Foo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JavadocExamples$Foo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JavadocExamples$Foo",
	"java.lang.Object",
	nullptr,
	_JavadocExamples$Foo_FieldInfo_,
	_JavadocExamples$Foo_MethodInfo_,
	nullptr,
	nullptr,
	_JavadocExamples$Foo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JavadocExamples"
};

$Object* allocate$JavadocExamples$Foo($Class* clazz) {
	return $of($alloc(JavadocExamples$Foo));
}

void JavadocExamples$Foo::init$($bytes* bytes) {
	$set(this, bytes, bytes);
}

$String* JavadocExamples$Foo::asString() {
	$init($StandardCharsets);
	return $new($String, this->bytes, $StandardCharsets::UTF_8);
}

JavadocExamples$Foo::JavadocExamples$Foo() {
}

$Class* JavadocExamples$Foo::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$Foo, name, initialize, &_JavadocExamples$Foo_ClassInfo_, allocate$JavadocExamples$Foo);
	return class$;
}

$Class* JavadocExamples$Foo::class$ = nullptr;