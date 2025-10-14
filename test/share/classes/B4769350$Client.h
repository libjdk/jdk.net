#ifndef _B4769350$Client_h_
#define _B4769350$Client_h_
//$ class B4769350$Client
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class $export B4769350$Client : public ::java::lang::Thread {
	$class(B4769350$Client, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	B4769350$Client();
	void init$($String* authority, $String* path, bool allowerror);
	virtual void run() override;
	$String* authority = nullptr;
	$String* path = nullptr;
	bool allowerror = false;
};

#endif // _B4769350$Client_h_