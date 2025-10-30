#include <ExceptionallyCloseable.h>

#include <java/io/Closeable.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ExceptionallyCloseable_MethodInfo_[] = {
	{"close", "(Ljava/lang/Throwable;Ljava/io/Closeable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Throwable*,$Closeable*)>(&ExceptionallyCloseable::close)), "java.io.IOException"},
	{"closeExceptionally", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ExceptionallyCloseable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"ExceptionallyCloseable",
	nullptr,
	"java.io.Closeable",
	nullptr,
	_ExceptionallyCloseable_MethodInfo_
};

$Object* allocate$ExceptionallyCloseable($Class* clazz) {
	return $of($alloc(ExceptionallyCloseable));
}

void ExceptionallyCloseable::closeExceptionally($Throwable* cause) {
	close();
}

void ExceptionallyCloseable::close($Throwable* t, $Closeable* c) {
	$init(ExceptionallyCloseable);
	if ($instanceOf(ExceptionallyCloseable, c)) {
		$nc(($cast(ExceptionallyCloseable, c)))->closeExceptionally(t);
	} else {
		$nc(c)->close();
	}
}

$Class* ExceptionallyCloseable::load$($String* name, bool initialize) {
	$loadClass(ExceptionallyCloseable, name, initialize, &_ExceptionallyCloseable_ClassInfo_, allocate$ExceptionallyCloseable);
	return class$;
}

$Class* ExceptionallyCloseable::class$ = nullptr;