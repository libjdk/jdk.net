#include <Frame.h>

#include <Frame$Opcode.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

#undef MAX_CONTROL_FRAME_PAYLOAD_SIZE
#undef MAX_HEADER_SIZE_BYTES

using $Frame$Opcode = ::Frame$Opcode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;

$FieldInfo _Frame_FieldInfo_[] = {
	{"opcode", "LFrame$Opcode;", nullptr, $FINAL, $field(Frame, opcode)},
	{"data", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(Frame, data)},
	{"last", "Z", nullptr, $FINAL, $field(Frame, last)},
	{"MAX_HEADER_SIZE_BYTES", "I", nullptr, $STATIC | $FINAL, $constField(Frame, MAX_HEADER_SIZE_BYTES)},
	{"MAX_CONTROL_FRAME_PAYLOAD_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Frame, MAX_CONTROL_FRAME_PAYLOAD_SIZE)},
	{}
};

$MethodInfo _Frame_MethodInfo_[] = {
	{"<init>", "(LFrame$Opcode;Ljava/nio/ByteBuffer;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Frame::*)($Frame$Opcode*,$ByteBuffer*,bool)>(&Frame::init$))},
	{}
};

$InnerClassInfo _Frame_InnerClassesInfo_[] = {
	{"Frame$Reader", "Frame", "Reader", $STATIC | $FINAL},
	{"Frame$Consumer", "Frame", "Consumer", $STATIC | $INTERFACE | $ABSTRACT},
	{"Frame$HeaderWriter", "Frame", "HeaderWriter", $STATIC | $FINAL},
	{"Frame$Masker", "Frame", "Masker", $STATIC | $FINAL},
	{"Frame$Opcode", "Frame", "Opcode", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Frame_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"Frame",
	"java.lang.Object",
	nullptr,
	_Frame_FieldInfo_,
	_Frame_MethodInfo_,
	nullptr,
	nullptr,
	_Frame_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Frame$Reader,Frame$Consumer,Frame$HeaderWriter,Frame$Masker,Frame$Opcode"
};

$Object* allocate$Frame($Class* clazz) {
	return $of($alloc(Frame));
}

void Frame::init$($Frame$Opcode* opcode, $ByteBuffer* data, bool last) {
	$useLocalCurrentObjectStackCache();
	$set(this, opcode, opcode);
	$set(this, data, $nc($($nc($($ByteBuffer::allocate($nc(data)->remaining())))->put($($nc(data)->slice()))))->flip());
	this->last = last;
}

Frame::Frame() {
}

$Class* Frame::load$($String* name, bool initialize) {
	$loadClass(Frame, name, initialize, &_Frame_ClassInfo_, allocate$Frame);
	return class$;
}

$Class* Frame::class$ = nullptr;