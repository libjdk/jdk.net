#ifndef _SecureZipFSProvider_h_
#define _SecureZipFSProvider_h_
//$ class SecureZipFSProvider
//$ extends java.nio.file.spi.FileSystemProvider

#include <java/lang/Array.h>
#include <java/nio/file/spi/FileSystemProvider.h>

class SecureZipFSProvider$SecureZipFS;
class SecureZipFSProvider$TestPath;
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
			class SeekableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class AccessMode;
			class CopyOption;
			class DirectoryStream;
			class DirectoryStream$Filter;
			class FileStore;
			class FileSystem;
			class LinkOption;
			class OpenOption;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class FileAttribute;
				class FileAttributeView;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

class $export SecureZipFSProvider : public ::java::nio::file::spi::FileSystemProvider {
	$class(SecureZipFSProvider, $NO_CLASS_INIT, ::java::nio::file::spi::FileSystemProvider)
public:
	SecureZipFSProvider();
	void init$(::java::nio::file::spi::FileSystemProvider* provider);
	virtual void checkAccess(::java::nio::file::Path* path, $Array<::java::nio::file::AccessMode>* modes) override;
	virtual void copy(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual void createDirectory(::java::nio::file::Path* dir, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual void delete$(::java::nio::file::Path* path) override;
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::FileStore* getFileStore(::java::nio::file::Path* path) override;
	virtual ::java::nio::file::FileSystem* getFileSystem(::java::net::URI* uri) override;
	virtual ::java::nio::file::Path* getPath(::java::net::URI* uri) override;
	virtual $String* getScheme() override;
	virtual bool isHidden(::java::nio::file::Path* path) override;
	virtual bool isSameFile(::java::nio::file::Path* path, ::java::nio::file::Path* path2) override;
	::SecureZipFSProvider$SecureZipFS* lambda$newFileSystem$0(::java::nio::file::FileSystem* fs, ::java::nio::file::FileSystem* sfs);
	virtual void move(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::Path* dir, ::java::nio::file::DirectoryStream$Filter* filter) override;
	virtual ::java::nio::channels::FileChannel* newFileChannel(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	using ::java::nio::file::spi::FileSystemProvider::newFileSystem;
	virtual ::java::nio::file::FileSystem* newFileSystem(::java::nio::file::FileSystem* fs);
	virtual ::java::nio::file::FileSystem* newFileSystem(::java::net::URI* uri, ::java::util::Map* env) override;
	virtual ::java::io::InputStream* newInputStream(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options) override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::util::Map* readAttributes(::java::nio::file::Path* path, $String* attributes, $Array<::java::nio::file::LinkOption>* options) override;
	virtual void setAttribute(::java::nio::file::Path* path, $String* attribute, Object$* value, $Array<::java::nio::file::LinkOption>* options) override;
	static ::SecureZipFSProvider$TestPath* toTestPath(::java::nio::file::Path* obj);
	::java::util::concurrent::ConcurrentHashMap* map = nullptr;
	::java::nio::file::spi::FileSystemProvider* defaultProvider = nullptr;
};

#endif // _SecureZipFSProvider_h_