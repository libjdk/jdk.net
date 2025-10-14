#ifndef _SecureZipFSProvider$TestPath$1_h_
#define _SecureZipFSProvider$TestPath$1_h_
//$ class SecureZipFSProvider$TestPath$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

class SecureZipFSProvider$TestPath;

class SecureZipFSProvider$TestPath$1 : public ::java::util::Iterator {
	$class(SecureZipFSProvider$TestPath$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	SecureZipFSProvider$TestPath$1();
	void init$(::SecureZipFSProvider$TestPath* this$0, ::java::util::Iterator* val$itr);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::SecureZipFSProvider$TestPath* this$0 = nullptr;
	::java::util::Iterator* val$itr = nullptr;
};

#endif // _SecureZipFSProvider$TestPath$1_h_