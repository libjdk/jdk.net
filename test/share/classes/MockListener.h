#ifndef _MockListener_h_
#define _MockListener_h_
//$ class MockListener
//$ extends java.net.http.WebSocket$Listener

#include <java/net/http/WebSocket$Listener.h>

class MockListener$Invocation;
namespace java {
	namespace lang {
		class CharSequence;
		class Throwable;
	}
}
namespace java {
	namespace net {
		namespace http {
			class WebSocket;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
			class CompletionStage;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

class $export MockListener : public ::java::net::http::WebSocket$Listener {
	$class(MockListener, $NO_CLASS_INIT, ::java::net::http::WebSocket$Listener)
public:
	MockListener();
	void init$();
	void init$(int64_t bufferSize);
	void init$(::java::util::function::Predicate* collectUntil);
	void init$(int64_t bufferSize, ::java::util::function::Predicate* collectUntil);
	static bool closeOrError(::MockListener$Invocation* i);
	static ::java::nio::ByteBuffer* fullCopy(::java::nio::ByteBuffer* src);
	virtual ::java::util::List* invocations();
	virtual ::java::util::List* invocationsSoFar();
	virtual ::java::util::concurrent::CompletionStage* onBinary(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* message, bool last) override;
	virtual ::java::util::concurrent::CompletionStage* onBinary0(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* message, bool last);
	virtual ::java::util::concurrent::CompletionStage* onClose(::java::net::http::WebSocket* webSocket, int32_t statusCode, $String* reason) override;
	virtual ::java::util::concurrent::CompletionStage* onClose0(::java::net::http::WebSocket* webSocket, int32_t statusCode, $String* reason);
	virtual void onError(::java::net::http::WebSocket* webSocket, $Throwable* error) override;
	virtual void onError0(::java::net::http::WebSocket* webSocket, $Throwable* error);
	virtual void onOpen(::java::net::http::WebSocket* webSocket) override;
	virtual void onOpen0(::java::net::http::WebSocket* webSocket);
	virtual ::java::util::concurrent::CompletionStage* onPing(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* message) override;
	virtual ::java::util::concurrent::CompletionStage* onPing0(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* message);
	virtual ::java::util::concurrent::CompletionStage* onPong(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* message) override;
	virtual ::java::util::concurrent::CompletionStage* onPong0(::java::net::http::WebSocket* webSocket, ::java::nio::ByteBuffer* message);
	virtual ::java::util::concurrent::CompletionStage* onText(::java::net::http::WebSocket* webSocket, ::java::lang::CharSequence* message, bool last) override;
	virtual ::java::util::concurrent::CompletionStage* onText0(::java::net::http::WebSocket* webSocket, ::java::lang::CharSequence* message, bool last);
	virtual void replenish(::java::net::http::WebSocket* webSocket);
	int64_t bufferSize = 0;
	int64_t count = 0;
	::java::util::List* invocations$ = nullptr;
	::java::util::concurrent::CompletableFuture* lastCall = nullptr;
	::java::util::function::Predicate* collectUntil = nullptr;
};

#endif // _MockListener_h_