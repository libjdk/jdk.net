#include <Frame$Consumer.h>

#include <Frame$Opcode.h>
#include <Frame.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $Frame = ::Frame;
using $Frame$Opcode = ::Frame$Opcode;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

$MethodInfo _Frame$Consumer_MethodInfo_[] = {
	{"endFrame", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"fin", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"mask", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"maskingKey", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"opcode", "(LFrame$Opcode;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"payloadData", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"payloadLen", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"rsv1", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"rsv2", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"rsv3", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Frame$Consumer_InnerClassesInfo_[] = {
	{"Frame$Consumer", "Frame", "Consumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Frame$Consumer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"Frame$Consumer",
	nullptr,
	nullptr,
	nullptr,
	_Frame$Consumer_MethodInfo_,
	nullptr,
	nullptr,
	_Frame$Consumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Frame"
};

$Object* allocate$Frame$Consumer($Class* clazz) {
	return $of($alloc(Frame$Consumer));
}

$Class* Frame$Consumer::load$($String* name, bool initialize) {
	$loadClass(Frame$Consumer, name, initialize, &_Frame$Consumer_ClassInfo_, allocate$Frame$Consumer);
	return class$;
}

$Class* Frame$Consumer::class$ = nullptr;