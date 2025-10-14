#ifndef _JavadocExamples$Foo_h_
#define _JavadocExamples$Foo_h_
//$ class JavadocExamples$Foo
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export JavadocExamples$Foo : public ::java::lang::Object {
	$class(JavadocExamples$Foo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavadocExamples$Foo();
	void init$($bytes* bytes);
	virtual $String* asString();
	$bytes* bytes = nullptr;
};

#endif // _JavadocExamples$Foo_h_