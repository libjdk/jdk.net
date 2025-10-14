#ifndef _ExceptionallyCloseable_h_
#define _ExceptionallyCloseable_h_
//$ interface ExceptionallyCloseable
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class $export ExceptionallyCloseable : public ::java::io::Closeable {
	$interface(ExceptionallyCloseable, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	using ::java::io::Closeable::close;
	static void close($Throwable* t, ::java::io::Closeable* c);
	virtual void closeExceptionally($Throwable* cause);
};

#endif // _ExceptionallyCloseable_h_