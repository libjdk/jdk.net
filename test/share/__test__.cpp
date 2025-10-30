#include <jdk.net.test.h>

#include <ALPNFailureTest.h>
#include <ActionSpace.h>
#include <AddURLTest.h>
#include <AddressNotSet.h>
#include <AnotherSelectFdsLimit.h>
#include <B4148751.h>
#include <B4414825.h>
#include <B4769350.h>
#include <B4849451.h>
#include <B4923906.h>
#include <B4962064.h>
#include <B5087907.h>
#include <B6246242.h>
#include <B6277794.h>
#include <B6296240.h>
#include <B6411513.h>
#include <B6425815.h>
#include <B6427403.h>
#include <B6463990.h>
#include <B6469803.h>
#include <B6499348.h>
#include <B6529759.h>
#include <B6563259.h>
#include <B6644726.h>
#include <B6737819.h>
#include <B6827999.h>
#include <B6896088.h>
#include <B8035158.h>
#include <B8035653.h>
#include <BadDottedIPAddress.h>
#include <BadIPv6Addresses.h>
#include <BadProxySelector.h>
#include <BasicAuthTest.h>
#include <BigBacklog.h>
#include <BindFailTest.h>
#include <BodyProcessorInputStreamTest.h>
#include <ByteArrayPublishers.h>
#include <CheckBoundaries.h>
#include <CheckDiscard.h>
#include <Child.h>
#include <Concurrent.h>
#include <Constructor.h>
#include <CookieNegativeMaxAge.h>
#include <CreateUnresolved.h>
#include <CustomSocketImplFactory.h>
#include <DecodeNonEncoded.h>
#include <Decoder.h>
#include <EmptyAuthenticate.h>
#include <EncodeDecode.h>
#include <Equals.h>
#include <ExifContentGuesser.h>
#include <FindResourceDoesNotThrowException.h>
#include <GetAuthenticatorTest.h>
#include <GetContentType.h>
#include <GetDefaultPort.h>
#include <GetFileNameMap.h>
#include <GetLocalAddress.h>
#include <GetLoopbackAddress.h>
#include <GetMacAddress.h>
#include <GetURLsTest.h>
#include <HandlerLoop.h>
#include <HandlersPkgPrefix.h>
#include <HandshakeFailureTest.h>
#include <HashCode.h>
#include <HashSpread.h>
#include <HeadersTest.h>
#include <HeadersTest2.h>
#include <Http1ChunkedTest.h>
#include <HttpInputStreamTest.h>
#include <HttpRequestBuilderTest.h>
#include <IDNTest.h>
#include <IPv4Formats.h>
#include <IPv6AddressTypes.h>
#include <IPv6Numeric.h>
#include <IllegalArg.h>
#include <ImmutableHeaders.h>
#include <ImplicitBind.h>
#include <IndexTest.h>
#include <Inet6AddressSerTest.h>
#include <Inet6AddressSerializationTest.h>
#include <InheritHandle.h>
#include <InternalNameServiceTest.h>
#include <InternalNameServiceWithHostsFileTest.h>
#include <InternalNameServiceWithNoHostsFileTest.h>
#include <InterruptedBlockingSend.h>
#include <InterruptibleDatagramSocket.h>
#include <IsHostReachableBug.h>
#include <IsReachable.h>
#include <IsReachableViaLoopbackTest.h>
#include <LineAdaptersCompileOnly.h>
#include <LocalHostCookie.h>
#include <LocalSocketAddress.h>
#include <LocaleDependentURLTest.h>
#include <LookupTest.h>
#include <MethodsTest.h>
#include <MultiAuthTest.h>
#include <MultiThreadedSystemProxies.h>
#include <MulticastTTL.h>
#include <NetParamsTest.h>
#include <NetworkInterfaceEmptyGetInetAddressesTest.h>
#include <NetworkPrefixLength.h>
#include <NoAction.h>
#include <NonOverridableHandlerFactory.h>
#include <NullArguments.h>
#include <NullConstructor.h>
#include <NullHost.h>
#include <NullURLTest.h>
#include <NullUriCookieTest.h>
#include <Offset.h>
#include <OneExceptionOnly.h>
#include <OpenConnection.h>
#include <OpenStream.h>
#include <ParseAuthority.h>
#include <ParseURL.h>
#include <PlainProxyConnectionTest.h>
#include <PortUnreachable.h>
#include <Protocol.h>
#include <ProxyServer.h>
#include <Race.h>
#include <RacyHandler.h>
#include <ReadAfterReset.h>
#include <RelativeEncoding.h>
#include <RelativePath.h>
#include <RelativeURL.h>
#include <RelativeURLTest.h>
#include <ReportSocketClosed.h>
#include <RequestPropertyValues.h>
#include <Responses.h>
#include <RestoreURL.h>
#include <RestrictedHeadersTest.h>
#include <Reuse.h>
#include <ReuseBuf.h>
#include <SelectFdsLimit.h>
#include <Send12k.h>
#include <SendDatagramToBadAddress.h>
#include <SendSize.h>
#include <Serialize.h>
#include <SetBufferSize.h>
#include <SetOption.h>
#include <SetReceiveBufferSize.h>
#include <SetTTLAndGetTTL.h>
#include <SetTTLTo0.h>
#include <ShortRequestBody.h>
#include <ShutdownBoth.h>
#include <SoTimeout.h>
#include <SocketGrowth.h>
#include <SocketPermissionCollection.h>
#include <SpecifyHandler.h>
#include <Streams.h>
#include <StringScope.h>
#include <SubNetworkInterfaceTest.h>
#include <SurrogatePairs.h>
#include <SystemProxies.h>
#include <TIFFContentGuesser.h>
#include <TcpKeepAliveTest.h>
#include <Test4URI.h>
#include <Test4URL.h>
#include <TestAfterClose.h>
#include <TestDefaults.h>
#include <TestHttpCookie.h>
#include <TestIPv6Addresses.h>
#include <TestPort.h>
#include <TestRFC2732.h>
#include <ThreadStop.h>
#include <TimeToLive.h>
#include <Timeout.h>
#include <TimeoutOrdering.h>
#include <UNCTest.h>
#include <URIToURLTest2.h>
#include <URItoURLTest.h>
#include <URLDecoderArgs.h>
#include <URLEncodeDecode.h>
#include <URLEncoderEncodeArgs.h>
#include <URLParsing.h>
#include <URLPermissionTest.h>
#include <UnknownContentType.h>
#include <Unresolved.h>
#include <UppercaseScheme.h>
#include <UseSTD3ASCIIRules.h>
#include <WhiteSpaceHostTest.h>
#include <Wildcard.h>
#include <ZeroRedirects.h>
#include <getResponseCode4HttpURLConnection.h>
#include <isSiteLocalAddress.h>
#include <textToNumericFormat.h>
#include <jcpp.h>

#undef A
#undef B
#undef S

class TestCases {
public:
	TestCases(int argc, char** argv) : argc(argc), argv(argv) {
		processedCount = 0;
		success = false;
	}

	bool isListAction() {
		for (int32_t i = 1; i < argc; i++) {
			$String* arg = $cstr(argv[i]);
			if ("-l"_s->equals(arg) || "--list"_s->equals(arg)) {
				return true;
			}
		}
		return false;
	}

	bool isSelectedOne() {
		bool exitsInclude = false;
		for (int32_t i = 1; i < argc; i++) {
			$String* arg = $cstr(argv[i]);
			if ("-l"_s->equals(arg) || "--list"_s->equals(arg)) {
				continue;
			} else if ("--include"_s->equals(arg)) {
				return false;
			} else if ("--exclude"_s->equals(arg)) {
				return false;
			} else {
				return true;
			}
		}
		return false;
	}

	bool isSelected(const char* caseName, bool excludeFromAll) {
		bool exitsInclude = false;
		for (int32_t i = 1; i < argc; i++) {
			$String* arg = $cstr(argv[i]);
			if ("-l"_s->equals(arg) || "--list"_s->equals(arg)) {
				continue;
			} else if ("--include"_s->equals(arg)) {
				i++;
				exitsInclude = true;
				if (i < argc) {
					$String* include = $cstr(argv[i]);
					$var($StringArray, includeArray, include->split(","_s));
					for (int32_t j = 0; j < includeArray->length; j++) {
						$String* includeItem = $arrayGet<$String>(includeArray, j);
						if ($(includeItem->trim())->equals(caseName)) {
							return true;
						}
					}
				}
			} else if ("--exclude"_s->equals(arg)) {
				i++;
				if (i < argc) {
					$String* exclude = $cstr(argv[i]);
					$var($StringArray, excludeArray, exclude->split(","_s));
					for (int32_t j = 0; j < excludeArray->length; j++) {
						$String* excludeItem = $arrayGet<$String>(excludeArray, j);
						if ($(excludeItem->trim())->equals(caseName)) {
							return false;
						}
					}
				}
			} else {
				exitsInclude = true;
				if (arg->equals(caseName)) {
					return true;
				}
			}
		}
		if (excludeFromAll) {
			return false;
		}
		return !exitsInclude;
	}

	template<typename T>
	void runCase(const char* caseName, bool excludeFromAll = false, $StringArray* args = nullptr) {
		if (isListAction()) {
			processedCount++;
			if (excludeFromAll) {
				$System::out->println($$str({ "#case "_s, $$str(processedCount), " "_s, $$str(caseName) }));
			} else {
				$System::out->println($$str({ "case "_s, $$str(processedCount), " "_s, $$str(caseName) }));
			}
		} else {
			if (isSelected(caseName, excludeFromAll)) {
				processedCount++;
				if (!isSelectedOne()) {
					$System::out->println($$str({ "case "_s, $$str(processedCount), " "_s, $$str(caseName) }));
				}
				int64_t beginMs = $System::currentTimeMillis();
				if (args != nullptr) {
					T::main(args);
				} else {
					T::main($$new($StringArray, 0));
				}
				int64_t endMs = $System::currentTimeMillis();
				$System::out->println($$str({ $$str(endMs - beginMs), "ms"_s }));
				if (!isSelectedOne()) {
					$System::out->println(""_s);
				}
			}
		}
	}

	template<typename T>
	void runCase(const char* caseName, $StringArray* args) {
		runCase<T>(caseName, false, args);
	}

	void runCases();
	int32_t isSuccess() {
		return success;
	}
private:
	int argc;
	char** argv;
	int32_t processedCount;
	bool success;
};

#define run(caseName, caseClass, ...) runCase<caseClass>(caseName, ##__VA_ARGS__);

void TestCases::runCases() {
	int64_t runCasesBeginMs = $System::currentTimeMillis();

	run("ALPNFailureTest", ::ALPNFailureTest);
	run("ActionSpace", ::ActionSpace);
	run("AddURLTest", ::AddURLTest);
	run("AddressNotSet", ::AddressNotSet);
	run("AnotherSelectFdsLimit", ::AnotherSelectFdsLimit);
	run("B4148751", ::B4148751);
	run("B4414825", ::B4414825);
	run("B4769350", ::B4769350);
	run("B4849451", ::B4849451);
	run("B4923906", ::B4923906);
	run("B4962064", ::B4962064);
	run("B5087907", ::B5087907);
	run("B6246242", ::B6246242);
	run("B6277794", ::B6277794);
	run("B6296240", ::B6296240);
	run("B6411513", ::B6411513);
	run("B6425815", ::B6425815);
	run("B6427403", ::B6427403);
	run("B6463990", ::B6463990);
	run("B6469803", ::B6469803);
	run("B6499348", ::B6499348);
	run("B6529759", ::B6529759);
	run("B6563259", ::B6563259);
	run("B6644726", ::B6644726);
	run("B6737819", ::B6737819);
	run("B6827999", ::B6827999);
	run("B6896088", ::B6896088);
	run("B8035158", ::B8035158);
	run("B8035653", ::B8035653);
	run("BadDottedIPAddress", ::BadDottedIPAddress);
	run("BadIPv6Addresses", ::BadIPv6Addresses);
	run("BadProxySelector", ::BadProxySelector);
	run("BasicAuthTest", ::BasicAuthTest);
	run("BigBacklog", ::BigBacklog);
	run("BindFailTest", ::BindFailTest);
	run("BodyProcessorInputStreamTest", ::BodyProcessorInputStreamTest);
	run("ByteArrayPublishers", ::ByteArrayPublishers);
	run("CheckBoundaries", ::CheckBoundaries);
	run("CheckDiscard", ::CheckDiscard);
	run("Child", ::Child);
	run("Concurrent", ::Concurrent);
	run("Constructor", ::Constructor);
	run("CookieNegativeMaxAge", ::CookieNegativeMaxAge);
	run("CreateUnresolved", ::CreateUnresolved);
	run("CustomSocketImplFactory", ::CustomSocketImplFactory);
	run("DecodeNonEncoded", ::DecodeNonEncoded);
	run("Decoder", ::Decoder);
	run("EmptyAuthenticate", ::EmptyAuthenticate);
	run("EncodeDecode", ::EncodeDecode);
	run("Equals", ::Equals);
	run("ExifContentGuesser", ::ExifContentGuesser);
	run("FindResourceDoesNotThrowException", ::FindResourceDoesNotThrowException);
	run("GetAuthenticatorTest", ::GetAuthenticatorTest);
	run("GetContentType", ::GetContentType);
	run("GetDefaultPort", ::GetDefaultPort);
	run("GetFileNameMap", ::GetFileNameMap);
	run("GetLocalAddress", ::GetLocalAddress);
	run("GetLoopbackAddress", ::GetLoopbackAddress);
	run("GetMacAddress", ::GetMacAddress);
	run("GetURLsTest", ::GetURLsTest);
	run("HandlerLoop", ::HandlerLoop);
	run("HandlersPkgPrefix", ::HandlersPkgPrefix);
	run("HandshakeFailureTest", ::HandshakeFailureTest);
	run("HashCode", ::HashCode);
	run("HashSpread", ::HashSpread);
	run("HeadersTest", ::HeadersTest);
	run("HeadersTest2", ::HeadersTest2);
	run("Http1ChunkedTest", ::Http1ChunkedTest);
	run("HttpInputStreamTest", ::HttpInputStreamTest);
	run("HttpRequestBuilderTest", ::HttpRequestBuilderTest);
	run("IDNTest", ::IDNTest);
	run("IPv4Formats", ::IPv4Formats);
	run("IPv6AddressTypes", ::IPv6AddressTypes);
	run("IPv6Numeric", ::IPv6Numeric);
	run("IllegalArg", ::IllegalArg);
	run("ImmutableHeaders", ::ImmutableHeaders);
	run("ImplicitBind", ::ImplicitBind);
	run("IndexTest", ::IndexTest);
	run("Inet6AddressSerTest", ::Inet6AddressSerTest);
	run("Inet6AddressSerializationTest", ::Inet6AddressSerializationTest);
	run("InheritHandle", ::InheritHandle);
	run("InternalNameServiceTest", ::InternalNameServiceTest);
	run("InternalNameServiceWithHostsFileTest", ::InternalNameServiceWithHostsFileTest);
	run("InternalNameServiceWithNoHostsFileTest", ::InternalNameServiceWithNoHostsFileTest);
	run("InterruptedBlockingSend", ::InterruptedBlockingSend);
	run("InterruptibleDatagramSocket", ::InterruptibleDatagramSocket);
	run("IsHostReachableBug", ::IsHostReachableBug);
	run("IsReachable", ::IsReachable);
	run("IsReachableViaLoopbackTest", ::IsReachableViaLoopbackTest);
	run("LineAdaptersCompileOnly", ::LineAdaptersCompileOnly);
	run("LocalHostCookie", ::LocalHostCookie);
	run("LocalSocketAddress", ::LocalSocketAddress);
	run("LocaleDependentURLTest", ::LocaleDependentURLTest);
	run("LookupTest", ::LookupTest);
	run("MethodsTest", ::MethodsTest);
	run("MultiAuthTest", ::MultiAuthTest);
	run("MultiThreadedSystemProxies", ::MultiThreadedSystemProxies);
	run("MulticastTTL", ::MulticastTTL);
	run("NetParamsTest", ::NetParamsTest);
	run("NetworkInterfaceEmptyGetInetAddressesTest", ::NetworkInterfaceEmptyGetInetAddressesTest);
	run("NetworkPrefixLength", ::NetworkPrefixLength);
	run("NoAction", ::NoAction);
	run("NonOverridableHandlerFactory", ::NonOverridableHandlerFactory);
	run("NullArguments", ::NullArguments);
	run("NullConstructor", ::NullConstructor);
	run("NullHost", ::NullHost);
	run("NullURLTest", ::NullURLTest);
	run("NullUriCookieTest", ::NullUriCookieTest);
	run("Offset", ::Offset);
	run("OneExceptionOnly", ::OneExceptionOnly);
	run("OpenConnection", ::OpenConnection);
	run("OpenStream", ::OpenStream);
	run("ParseAuthority", ::ParseAuthority);
	run("ParseURL", ::ParseURL);
	run("PlainProxyConnectionTest", ::PlainProxyConnectionTest);
	run("PortUnreachable", ::PortUnreachable);
	run("Protocol", ::Protocol);
	run("ProxyServer", ::ProxyServer);
	run("Race", ::Race);
	run("RacyHandler", ::RacyHandler);
	run("ReadAfterReset", ::ReadAfterReset);
	run("RelativeEncoding", ::RelativeEncoding);
	run("RelativePath", ::RelativePath);
	run("RelativeURL", ::RelativeURL);
	run("RelativeURLTest", ::RelativeURLTest);
	run("ReportSocketClosed", ::ReportSocketClosed);
	run("RequestPropertyValues", ::RequestPropertyValues);
	run("Responses", ::Responses);
	run("RestoreURL", ::RestoreURL);
	run("RestrictedHeadersTest", ::RestrictedHeadersTest);
	run("Reuse", ::Reuse);
	run("ReuseBuf", ::ReuseBuf);
	run("SelectFdsLimit", ::SelectFdsLimit);
	run("Send12k", ::Send12k);
	run("SendDatagramToBadAddress", ::SendDatagramToBadAddress);
	run("SendSize", ::SendSize);
	run("Serialize", ::Serialize);
	run("SetBufferSize", ::SetBufferSize);
	run("SetOption", ::SetOption);
	run("SetReceiveBufferSize", ::SetReceiveBufferSize);
	run("SetTTLAndGetTTL", ::SetTTLAndGetTTL);
	run("SetTTLTo0", ::SetTTLTo0);
	run("ShortRequestBody", ::ShortRequestBody);
	run("ShutdownBoth", ::ShutdownBoth);
	run("SoTimeout", ::SoTimeout);
	run("SocketGrowth", ::SocketGrowth);
	run("SocketPermissionCollection", ::SocketPermissionCollection);
	run("SpecifyHandler", ::SpecifyHandler);
	run("Streams", ::Streams);
	run("StringScope", ::StringScope);
	run("SubNetworkInterfaceTest", ::SubNetworkInterfaceTest);
	run("SurrogatePairs", ::SurrogatePairs);
	run("SystemProxies", ::SystemProxies);
	run("TIFFContentGuesser", ::TIFFContentGuesser);
	run("TcpKeepAliveTest", ::TcpKeepAliveTest);
	run("Test4URI", ::Test4URI);
	run("Test4URL", ::Test4URL);
	run("TestAfterClose", ::TestAfterClose);
	run("TestDefaults", ::TestDefaults);
	run("TestHttpCookie", ::TestHttpCookie);
	run("TestIPv6Addresses", ::TestIPv6Addresses);
	run("TestPort", ::TestPort);
	run("TestRFC2732", ::TestRFC2732);
	run("ThreadStop", ::ThreadStop);
	run("TimeToLive", ::TimeToLive);
	run("Timeout", ::Timeout);
	run("TimeoutOrdering", ::TimeoutOrdering);
	run("UNCTest", ::UNCTest);
	run("URIToURLTest2", ::URIToURLTest2);
	run("URItoURLTest", ::URItoURLTest);
	run("URLDecoderArgs", ::URLDecoderArgs);
	run("URLEncodeDecode", ::URLEncodeDecode);
	run("URLEncoderEncodeArgs", ::URLEncoderEncodeArgs);
	run("URLParsing", ::URLParsing);
	run("URLPermissionTest", ::URLPermissionTest);
	run("UnknownContentType", ::UnknownContentType);
	run("Unresolved", ::Unresolved);
	run("UppercaseScheme", ::UppercaseScheme);
	run("UseSTD3ASCIIRules", ::UseSTD3ASCIIRules);
	run("WhiteSpaceHostTest", ::WhiteSpaceHostTest);
	run("Wildcard", ::Wildcard);
	run("ZeroRedirects", ::ZeroRedirects);
	run("getResponseCode4HttpURLConnection", ::getResponseCode4HttpURLConnection);
	run("isSiteLocalAddress", ::isSiteLocalAddress);
	run("textToNumericFormat", ::textToNumericFormat);

	int64_t runCaseEndMs = $System::currentTimeMillis();
	if (processedCount > 1) {
		$System::out->println($$str({"runCases "_s, $$str(processedCount), " "_s, $$str(runCaseEndMs - runCasesBeginMs), "ms"_s}));
	}
	$System::out->flush();
	success = true;
}

int main(int argc, char** argv) {
	::jdk$net$test::init();
	TestCases testcases(argc, argv);
	try {
		testcases.runCases();
	} catch ($Throwable& e) {
		e->printStackTrace();
	}
	$System::deinit();
	return testcases.isSuccess() ? 0 : 1;
}