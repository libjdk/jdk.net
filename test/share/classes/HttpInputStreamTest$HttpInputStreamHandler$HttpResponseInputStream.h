#ifndef _HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_h_
#define _HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_h_
//$ class HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream
//$ extends java.io.InputStream
//$ implements java.net.http.HttpResponse$BodySubscriber

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>

#pragma push_macro("LAST_BUFFER")
#undef LAST_BUFFER
#pragma push_macro("LAST_LIST")
#undef LAST_LIST

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class BlockingQueue;
			class CompletionStage;
			class Flow$Subscription;
		}
	}
}

class HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream : public ::java::io::InputStream, public ::java::net::http::HttpResponse$BodySubscriber {
	$class(HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream, 0, ::java::io::InputStream, ::java::net::http::HttpResponse$BodySubscriber)
public:
	HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t maxBuffers);
	virtual void close() override;
	::java::nio::ByteBuffer* current();
	virtual ::java::util::concurrent::CompletionStage* getBody() override;
	virtual void onComplete() override;
	virtual void onError($Throwable* thrwbl) override;
	virtual void onNext(::java::util::List* t);
	virtual void onNext(Object$* t) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* s) override;
	using ::java::io::InputStream::read;
	virtual int32_t read($bytes* bytes, int32_t off, int32_t len) override;
	virtual int32_t read() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static ::java::nio::ByteBuffer* LAST_BUFFER;
	static ::java::util::List* LAST_LIST;
	::java::util::concurrent::BlockingQueue* buffers = nullptr;
	$volatile(::java::util::concurrent::Flow$Subscription*) subscription = nullptr;
	$volatile(bool) closed = false;
	$volatile($Throwable*) failed = nullptr;
	$volatile(::java::util::Iterator*) currentListItr = nullptr;
	$volatile(::java::nio::ByteBuffer*) currentBuffer = nullptr;
};

#pragma pop_macro("LAST_BUFFER")
#pragma pop_macro("LAST_LIST")

#endif // _HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream_h_