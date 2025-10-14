#ifndef _S$NReadsInputStream_h_
#define _S$NReadsInputStream_h_
//$ class S$NReadsInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("EOF")
#undef EOF

class $export S$NReadsInputStream : public ::java::io::InputStream {
	$class(S$NReadsInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	S$NReadsInputStream();
	void init$(int64_t n);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	static const int32_t EOF = (-1);
	int64_t readsLeft = 0;
};

#pragma pop_macro("EOF")

#endif // _S$NReadsInputStream_h_