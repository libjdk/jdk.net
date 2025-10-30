#include <TestUtil.h>

#include <java/io/BufferedWriter.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef CWD

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $Arrays = ::java::util::Arrays;

$FieldInfo _TestUtil_FieldInfo_[] = {
	{"CWD", "Ljava/nio/file/Path;", nullptr, $STATIC | $FINAL, $staticField(TestUtil, CWD)},
	{"fileContent", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestUtil, fileContent)},
	{}
};

$MethodInfo _TestUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestUtil::*)()>(&TestUtil::init$))},
	{"compareContents", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)V", nullptr, $STATIC, $method(static_cast<void(*)($Path*,$Path*)>(&TestUtil::compareContents))},
	{"compareFiles", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljava/lang/Void;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Void*(*)($Path*,$Path*)>(&TestUtil::compareFiles))},
	{"getAFile", "(I)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Path*(*)(int32_t)>(&TestUtil::getAFile)), "java.io.IOException"},
	{"tempFile", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Path*(*)()>(&TestUtil::tempFile))},
	{}
};

$ClassInfo _TestUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUtil",
	"java.lang.Object",
	nullptr,
	_TestUtil_FieldInfo_,
	_TestUtil_MethodInfo_
};

$Object* allocate$TestUtil($Class* clazz) {
	return $of($alloc(TestUtil));
}

$Path* TestUtil::CWD = nullptr;
$String* TestUtil::fileContent = nullptr;

void TestUtil::init$() {
}

$Path* TestUtil::getAFile(int32_t size) {
	$init(TestUtil);
	$useLocalCurrentObjectStackCache();
	$var($Path, p, tempFile());
	$var($BufferedWriter, writer, $Files::newBufferedWriter(p, $$new($OpenOptionArray, 0)));
	int32_t len = $nc(TestUtil::fileContent)->length();
	int32_t iterations = $div(size, len);
	int32_t remainder = size - (iterations * len);
	for (int32_t i = 0; i < iterations; ++i) {
		$nc(writer)->write(TestUtil::fileContent, 0, len);
	}
	$nc(writer)->write(TestUtil::fileContent, 0, remainder);
	writer->close();
	return p;
}

$Path* TestUtil::tempFile() {
	$init(TestUtil);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Path, p, $Files::createTempFile(TestUtil::CWD, "TestUtil_tmp_"_s, "_HTTPClient"_s, $$new($FileAttributeArray, 0)));
		return p;
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

$Void* TestUtil::compareFiles($Path* path1, $Path* path2) {
	$init(TestUtil);
	$useLocalCurrentObjectStackCache();
	try {
		int64_t size1 = $Files::size(path1);
		int64_t size2 = $Files::size(path2);
		if (size1 != size2) {
			$var($String, var$0, $$str({"File sizes do not match "_s, $($Long::toString(size1)), "/"_s}));
			$var($String, msg, $concat(var$0, $($Long::toString(size2))));
			$throwNew($RuntimeException, msg);
		}
		compareContents(path1, path2);
		return nullptr;
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

void TestUtil::compareContents($Path* path1, $Path* path2) {
	$init(TestUtil);
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, b1, $Files::readAllBytes(path1));
		$var($bytes, b2, $Files::readAllBytes(path2));
		if (!$Arrays::equals(b1, b2)) {
			$throwNew($RuntimeException, "Files do not match"_s);
		}
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
}

void clinit$TestUtil($Class* class$) {
	$assignStatic(TestUtil::fileContent, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"_s);
	$assignStatic(TestUtil::CWD, $Paths::get("."_s, $$new($StringArray, 0)));
}

TestUtil::TestUtil() {
}

$Class* TestUtil::load$($String* name, bool initialize) {
	$loadClass(TestUtil, name, initialize, &_TestUtil_ClassInfo_, clinit$TestUtil, allocate$TestUtil);
	return class$;
}

$Class* TestUtil::class$ = nullptr;