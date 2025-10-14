#ifndef _TestUtil_h_
#define _TestUtil_h_
//$ class TestUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CWD")
#undef CWD

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export TestUtil : public ::java::lang::Object {
	$class(TestUtil, 0, ::java::lang::Object)
public:
	TestUtil();
	void init$();
	static void compareContents(::java::nio::file::Path* path1, ::java::nio::file::Path* path2);
	static ::java::lang::Void* compareFiles(::java::nio::file::Path* path1, ::java::nio::file::Path* path2);
	static ::java::nio::file::Path* getAFile(int32_t size);
	static ::java::nio::file::Path* tempFile();
	static ::java::nio::file::Path* CWD;
	static $String* fileContent;
};

#pragma pop_macro("CWD")

#endif // _TestUtil_h_