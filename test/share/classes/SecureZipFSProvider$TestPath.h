#ifndef _SecureZipFSProvider$TestPath_h_
#define _SecureZipFSProvider$TestPath_h_
//$ class SecureZipFSProvider$TestPath
//$ extends java.nio.file.Path

#include <java/lang/Array.h>
#include <java/nio/file/Path.h>

class SecureZipFSProvider$SecureZipFS;
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class LinkOption;
			class WatchEvent$Kind;
			class WatchEvent$Modifier;
			class WatchKey;
			class WatchService;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

class $export SecureZipFSProvider$TestPath : public ::java::nio::file::Path {
	$class(SecureZipFSProvider$TestPath, $NO_CLASS_INIT, ::java::nio::file::Path)
public:
	SecureZipFSProvider$TestPath();
	using ::java::nio::file::Path::endsWith;
	void init$(::SecureZipFSProvider$SecureZipFS* fs, ::java::nio::file::Path* delegate);
	virtual int32_t compareTo(::java::nio::file::Path* other) override;
	virtual int32_t compareTo(Object$* other) override;
	virtual bool endsWith(::java::nio::file::Path* other) override;
	virtual bool equals(Object$* other) override;
	virtual ::java::nio::file::Path* getFileName() override;
	virtual ::java::nio::file::FileSystem* getFileSystem() override;
	virtual ::java::nio::file::Path* getName(int32_t index) override;
	virtual int32_t getNameCount() override;
	virtual ::java::nio::file::Path* getParent() override;
	virtual ::java::nio::file::Path* getRoot() override;
	virtual int32_t hashCode() override;
	virtual bool isAbsolute() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::nio::file::Path* normalize() override;
	using ::java::nio::file::Path::register$;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	virtual ::java::nio::file::Path* relativize(::java::nio::file::Path* other) override;
	using ::java::nio::file::Path::resolve;
	virtual ::java::nio::file::Path* resolve(::java::nio::file::Path* other) override;
	using ::java::nio::file::Path::startsWith;
	virtual bool startsWith(::java::nio::file::Path* other) override;
	virtual ::java::nio::file::Path* subpath(int32_t beginIndex, int32_t endIndex) override;
	virtual ::java::nio::file::Path* toAbsolutePath() override;
	virtual ::java::nio::file::Path* toRealPath($Array<::java::nio::file::LinkOption>* options) override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	virtual ::java::nio::file::Path* unwrap();
	::SecureZipFSProvider$SecureZipFS* fs = nullptr;
	::java::nio::file::Path* delegate = nullptr;
};

#endif // _SecureZipFSProvider$TestPath_h_