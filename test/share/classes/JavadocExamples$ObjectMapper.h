#ifndef _JavadocExamples$ObjectMapper_h_
#define _JavadocExamples$ObjectMapper_h_
//$ class JavadocExamples$ObjectMapper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class $export JavadocExamples$ObjectMapper : public ::java::lang::Object {
	$class(JavadocExamples$ObjectMapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavadocExamples$ObjectMapper();
	void init$();
	static $Object* map($bytes* bytes, $Class* targetType);
	virtual $Object* readValue(::java::io::InputStream* is, $Class* targetType);
};

#endif // _JavadocExamples$ObjectMapper_h_