#include <SecureZipFSProvider.h>

#include <SecureZipFSProvider$SecureZipFS.h>
#include <SecureZipFSProvider$TestPath.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/AccessMode.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $SecureZipFSProvider$SecureZipFS = ::SecureZipFSProvider$SecureZipFS;
using $SecureZipFSProvider$TestPath = ::SecureZipFSProvider$TestPath;
using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileStore = ::java::nio::file::FileStore;
using $FileSystem = ::java::nio::file::FileSystem;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;

class SecureZipFSProvider$$Lambda$lambda$newFileSystem$0 : public $Function {
	$class(SecureZipFSProvider$$Lambda$lambda$newFileSystem$0, $NO_CLASS_INIT, $Function)
public:
	void init$(SecureZipFSProvider* inst, $FileSystem* fs) {
		$set(this, inst$, inst);
		$set(this, fs, fs);
	}
	virtual $Object* apply(Object$* sfs) override {
		 return $of($nc(inst$)->lambda$newFileSystem$0(fs, $cast($FileSystem, sfs)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SecureZipFSProvider$$Lambda$lambda$newFileSystem$0>());
	}
	SecureZipFSProvider* inst$ = nullptr;
	$FileSystem* fs = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SecureZipFSProvider$$Lambda$lambda$newFileSystem$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SecureZipFSProvider$$Lambda$lambda$newFileSystem$0, inst$)},
	{"fs", "Ljava/nio/file/FileSystem;", nullptr, $PUBLIC, $field(SecureZipFSProvider$$Lambda$lambda$newFileSystem$0, fs)},
	{}
};
$MethodInfo SecureZipFSProvider$$Lambda$lambda$newFileSystem$0::methodInfos[3] = {
	{"<init>", "(LSecureZipFSProvider;Ljava/nio/file/FileSystem;)V", nullptr, $PUBLIC, $method(static_cast<void(SecureZipFSProvider$$Lambda$lambda$newFileSystem$0::*)(SecureZipFSProvider*,$FileSystem*)>(&SecureZipFSProvider$$Lambda$lambda$newFileSystem$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SecureZipFSProvider$$Lambda$lambda$newFileSystem$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SecureZipFSProvider$$Lambda$lambda$newFileSystem$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* SecureZipFSProvider$$Lambda$lambda$newFileSystem$0::load$($String* name, bool initialize) {
	$loadClass(SecureZipFSProvider$$Lambda$lambda$newFileSystem$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SecureZipFSProvider$$Lambda$lambda$newFileSystem$0::class$ = nullptr;

$FieldInfo _SecureZipFSProvider_FieldInfo_[] = {
	{"map", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/nio/file/FileSystem;LSecureZipFSProvider$SecureZipFS;>;", $PRIVATE | $FINAL, $field(SecureZipFSProvider, map)},
	{"defaultProvider", "Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PRIVATE | $FINAL, $field(SecureZipFSProvider, defaultProvider)},
	{}
};

$MethodInfo _SecureZipFSProvider_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/spi/FileSystemProvider;)V", nullptr, $PUBLIC, $method(static_cast<void(SecureZipFSProvider::*)($FileSystemProvider*)>(&SecureZipFSProvider::init$))},
	{"checkAccess", "(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"copy", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"createDirectory", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)V", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"delete", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileAttributeView", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Ljava/nio/file/Path;Ljava/lang/Class<TV;>;[Ljava/nio/file/LinkOption;)TV;", $PUBLIC | $TRANSIENT},
	{"getFileStore", "(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileSystem", "(Ljava/net/URI;)Ljava/nio/file/FileSystem;", nullptr, $PUBLIC},
	{"getPath", "(Ljava/net/URI;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getScheme", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isHidden", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isSameFile", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"lambda$newFileSystem$0", "(Ljava/nio/file/FileSystem;Ljava/nio/file/FileSystem;)LSecureZipFSProvider$SecureZipFS;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$SecureZipFSProvider$SecureZipFS*(SecureZipFSProvider::*)($FileSystem*,$FileSystem*)>(&SecureZipFSProvider::lambda$newFileSystem$0))},
	{"move", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newByteChannel", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;", "(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", $PUBLIC},
	{"newFileChannel", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/FileChannel;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newFileSystem", "(Ljava/nio/file/FileSystem;)Ljava/nio/file/FileSystem;", nullptr, $PUBLIC},
	{"newFileSystem", "(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;", "(Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;*>;)Ljava/nio/file/FileSystem;", $PUBLIC, nullptr, "java.io.IOException"},
	{"newInputStream", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"readAttributes", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;", "<A::Ljava/nio/file/attribute/BasicFileAttributes;>(Ljava/nio/file/Path;Ljava/lang/Class<TA;>;[Ljava/nio/file/LinkOption;)TA;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"readAttributes", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"toTestPath", "(Ljava/nio/file/Path;)LSecureZipFSProvider$TestPath;", nullptr, $STATIC, $method(static_cast<$SecureZipFSProvider$TestPath*(*)($Path*)>(&SecureZipFSProvider::toTestPath))},
	{}
};

$InnerClassInfo _SecureZipFSProvider_InnerClassesInfo_[] = {
	{"SecureZipFSProvider$TestPath", "SecureZipFSProvider", "TestPath", $STATIC},
	{"SecureZipFSProvider$SecureZipFS", "SecureZipFSProvider", "SecureZipFS", $STATIC},
	{}
};

$ClassInfo _SecureZipFSProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SecureZipFSProvider",
	"java.nio.file.spi.FileSystemProvider",
	nullptr,
	_SecureZipFSProvider_FieldInfo_,
	_SecureZipFSProvider_MethodInfo_,
	nullptr,
	nullptr,
	_SecureZipFSProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SecureZipFSProvider$TestPath,SecureZipFSProvider$TestPath$1,SecureZipFSProvider$SecureZipFS"
};

$Object* allocate$SecureZipFSProvider($Class* clazz) {
	return $of($alloc(SecureZipFSProvider));
}

void SecureZipFSProvider::init$($FileSystemProvider* provider) {
	$FileSystemProvider::init$();
	$set(this, map, $new($ConcurrentHashMap));
	$set(this, defaultProvider, provider);
}

$String* SecureZipFSProvider::getScheme() {
	return "jar"_s;
}

$FileSystem* SecureZipFSProvider::newFileSystem($FileSystem* fs) {
	return $cast($FileSystem, $nc(this->map)->computeIfAbsent(fs, static_cast<$Function*>($$new(SecureZipFSProvider$$Lambda$lambda$newFileSystem$0, this, fs))));
}

$FileSystem* SecureZipFSProvider::newFileSystem($URI* uri, $Map* env) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystem, fs, $nc(this->defaultProvider)->newFileSystem(uri, env));
	return $cast($FileSystem, $nc(this->map)->computeIfAbsent(fs, static_cast<$Function*>($$new(SecureZipFSProvider$$Lambda$lambda$newFileSystem$0, this, fs))));
}

$FileSystem* SecureZipFSProvider::getFileSystem($URI* uri) {
	return $cast($FileSystem, $nc(this->map)->get($($nc(this->defaultProvider)->getFileSystem(uri))));
}

$Path* SecureZipFSProvider::getPath($URI* uri) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc(this->defaultProvider)->getPath(uri));
	return $nc(($cast($SecureZipFSProvider$SecureZipFS, $($nc(this->map)->get($($nc(this->defaultProvider)->getFileSystem(uri)))))))->wrap(p);
}

$InputStream* SecureZipFSProvider::newInputStream($Path* path, $OpenOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "customPermission"_s));
		sm->checkRead($($nc(p)->toString()));
	}
	return $nc(this->defaultProvider)->newInputStream(p, options);
}

$SeekableByteChannel* SecureZipFSProvider::newByteChannel($Path* path, $Set* options, $FileAttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	return $nc(this->defaultProvider)->newByteChannel(p, options, attrs);
}

$FileChannel* SecureZipFSProvider::newFileChannel($Path* path, $Set* options, $FileAttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	return $nc(this->defaultProvider)->newFileChannel(p, options, attrs);
}

$DirectoryStream* SecureZipFSProvider::newDirectoryStream($Path* dir, $DirectoryStream$Filter* filter) {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

void SecureZipFSProvider::createDirectory($Path* dir, $FileAttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(dir)))->unwrap());
	$nc(this->defaultProvider)->createDirectory(p, attrs);
}

void SecureZipFSProvider::delete$($Path* path) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	$nc(this->defaultProvider)->delete$(p);
}

void SecureZipFSProvider::copy($Path* source, $Path* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, sp, $nc($(toTestPath(source)))->unwrap());
	$var($Path, tp, $nc($(toTestPath(target)))->unwrap());
	$nc(this->defaultProvider)->copy(sp, tp, options);
}

void SecureZipFSProvider::move($Path* source, $Path* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, sp, $nc($(toTestPath(source)))->unwrap());
	$var($Path, tp, $nc($(toTestPath(target)))->unwrap());
	$nc(this->defaultProvider)->move(sp, tp, options);
}

bool SecureZipFSProvider::isSameFile($Path* path, $Path* path2) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	$var($Path, p2, $nc($(toTestPath(path2)))->unwrap());
	return $nc(this->defaultProvider)->isSameFile(p, p2);
}

bool SecureZipFSProvider::isHidden($Path* path) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	return $nc(this->defaultProvider)->isHidden(p);
}

$FileStore* SecureZipFSProvider::getFileStore($Path* path) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	return $nc(this->defaultProvider)->getFileStore(p);
}

void SecureZipFSProvider::checkAccess($Path* path, $AccessModeArray* modes) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	$nc(this->defaultProvider)->checkAccess(p, modes);
}

$FileAttributeView* SecureZipFSProvider::getFileAttributeView($Path* path, $Class* type, $LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	return $nc(this->defaultProvider)->getFileAttributeView(p, type, options);
}

$BasicFileAttributes* SecureZipFSProvider::readAttributes($Path* path, $Class* type, $LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	return $nc(this->defaultProvider)->readAttributes(p, type, options);
}

$Map* SecureZipFSProvider::readAttributes($Path* path, $String* attributes, $LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	return $nc(this->defaultProvider)->readAttributes(p, attributes, options);
}

void SecureZipFSProvider::setAttribute($Path* path, $String* attribute, Object$* value, $LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, p, $nc($(toTestPath(path)))->unwrap());
	$nc(this->defaultProvider)->setAttribute(p, attribute, options, $$new($LinkOptionArray, 0));
}

$SecureZipFSProvider$TestPath* SecureZipFSProvider::toTestPath($Path* obj) {
	$init(SecureZipFSProvider);
	if (obj == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($SecureZipFSProvider$TestPath, obj))) {
		$throwNew($ProviderMismatchException);
	}
	return $cast($SecureZipFSProvider$TestPath, obj);
}

$SecureZipFSProvider$SecureZipFS* SecureZipFSProvider::lambda$newFileSystem$0($FileSystem* fs, $FileSystem* sfs) {
	return $new($SecureZipFSProvider$SecureZipFS, this, fs);
}

SecureZipFSProvider::SecureZipFSProvider() {
}

$Class* SecureZipFSProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SecureZipFSProvider$$Lambda$lambda$newFileSystem$0::classInfo$.name)) {
			return SecureZipFSProvider$$Lambda$lambda$newFileSystem$0::load$(name, initialize);
		}
	}
	$loadClass(SecureZipFSProvider, name, initialize, &_SecureZipFSProvider_ClassInfo_, allocate$SecureZipFSProvider);
	return class$;
}

$Class* SecureZipFSProvider::class$ = nullptr;