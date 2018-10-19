//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSInputStream, NSMutableArray, NSMutableData, NSMutableDictionary, NSNumber, NSOutputStream, NSRecursiveLock, NSString, NSThread, NSTimer, NSURL, QBASIDataDecompressor;
@protocol QBASICacheDelegate, QBASIHTTPRequestDelegate, QBASIHTTPRequestDelegate><QBASIProgressDelegate, QBASIProgressDelegate;

__attribute__((visibility("hidden")))
@interface QBASIHTTPRequest : NSOperation <NSCopying>
{
    NSURL *url;
    NSURL *originalURL;
    NSURL *redirectURL;
    id <QBASIHTTPRequestDelegate> delegate;
    id <QBASIHTTPRequestDelegate><QBASIProgressDelegate> queue;
    NSString *requestMethod;
    NSMutableData *postBody;
    NSData *compressedPostBody;
    _Bool shouldStreamPostDataFromDisk;
    NSString *postBodyFilePath;
    NSString *compressedPostBodyFilePath;
    _Bool didCreateTemporaryPostDataFile;
    NSOutputStream *postBodyWriteStream;
    NSInputStream *postBodyReadStream;
    NSMutableDictionary *requestHeaders;
    _Bool haveBuiltRequestHeaders;
    NSDictionary *responseHeaders;
    NSMutableArray *requestCookies;
    NSArray *responseCookies;
    _Bool useCookiePersistence;
    _Bool useKeychainPersistence;
    _Bool useSessionPersistence;
    _Bool allowCompressedResponse;
    _Bool shouldCompressRequestBody;
    NSString *downloadDestinationPath;
    NSString *temporaryFileDownloadPath;
    NSString *temporaryUncompressedDataDownloadPath;
    NSOutputStream *fileDownloadOutputStream;
    NSOutputStream *inflatedFileDownloadOutputStream;
    _Bool complete;
    _Bool finished;
    _Bool cancelled;
    NSError *error;
    NSString *username;
    NSString *password;
    NSString *userAgentString;
    NSString *domain;
    NSString *proxyUsername;
    NSString *proxyPassword;
    NSString *proxyDomain;
    id <QBASIProgressDelegate> uploadProgressDelegate;
    id <QBASIProgressDelegate> downloadProgressDelegate;
    _Bool haveExaminedHeaders;
    NSMutableData *rawResponseData;
    struct __CFHTTPMessage *request;
    NSInputStream *readStream;
    struct _CFHTTPAuthentication *requestAuthentication;
    NSDictionary *requestCredentials;
    int authenticationRetryCount;
    NSString *authenticationScheme;
    NSString *authenticationRealm;
    _Bool shouldPresentAuthenticationDialog;
    _Bool shouldPresentProxyAuthenticationDialog;
    struct _CFHTTPAuthentication *proxyAuthentication;
    NSDictionary *proxyCredentials;
    int proxyAuthenticationRetryCount;
    NSString *proxyAuthenticationScheme;
    NSString *proxyAuthenticationRealm;
    int responseStatusCode;
    NSString *responseStatusMessage;
    unsigned long long contentLength;
    unsigned long long partialDownloadSize;
    unsigned long long postLength;
    unsigned long long totalBytesRead;
    unsigned long long totalBytesSent;
    unsigned long long lastBytesRead;
    unsigned long long lastBytesSent;
    NSRecursiveLock *cancelledLock;
    SEL didStartSelector;
    SEL didReceiveResponseHeadersSelector;
    SEL willRedirectSelector;
    SEL didFinishSelector;
    SEL didFailSelector;
    SEL didReceiveDataSelector;
    NSDate *lastActivityTime;
    double timeOutSeconds;
    _Bool shouldResetUploadProgress;
    _Bool shouldResetDownloadProgress;
    QBASIHTTPRequest *mainRequest;
    _Bool showAccurateProgress;
    _Bool updatedProgress;
    _Bool haveBuiltPostBody;
    unsigned long long uploadBufferSize;
    unsigned long long defaultResponseEncoding;
    unsigned long long responseEncoding;
    _Bool allowResumeForFileDownloads;
    NSDictionary *userInfo;
    long long tag;
    _Bool useHTTPVersionOne;
    _Bool shouldRedirect;
    _Bool needsRedirect;
    int redirectCount;
    _Bool validatesSecureCertificate;
    struct __SecIdentity *clientCertificateIdentity;
    NSArray *clientCertificates;
    NSString *proxyHost;
    int proxyPort;
    NSString *proxyType;
    NSURL *PACurl;
    int authenticationNeeded;
    _Bool shouldPresentCredentialsBeforeChallenge;
    _Bool inProgress;
    _Bool readStreamIsScheduled;
    int numberOfTimesToRetryOnTimeout;
    int retryCount;
    _Bool willRetryRequest;
    _Bool shouldAttemptPersistentConnection;
    double persistentConnectionTimeoutSeconds;
    _Bool connectionCanBeReused;
    NSMutableDictionary *connectionInfo;
    _Bool shouldUseRFC2616RedirectBehaviour;
    _Bool downloadComplete;
    NSNumber *requestID;
    NSString *runLoopMode;
    NSTimer *statusTimer;
    id <QBASICacheDelegate> downloadCache;
    int cachePolicy;
    int cacheStoragePolicy;
    _Bool didUseCachedResponse;
    double secondsToCache;
    _Bool shouldContinueWhenAppEntersBackground;
    unsigned long long backgroundTask;
    QBASIDataDecompressor *dataDecompressor;
    _Bool shouldWaitToInflateCompressedResponses;
    _Bool isPACFileRequest;
    QBASIHTTPRequest *PACFileRequest;
    NSInputStream *PACFileReadStream;
    NSMutableData *PACFileData;
    _Bool isSynchronous;
    CDUnknownBlockType startedBlock;
    CDUnknownBlockType headersReceivedBlock;
    CDUnknownBlockType completionBlock;
    CDUnknownBlockType failureBlock;
    CDUnknownBlockType bytesReceivedBlock;
    CDUnknownBlockType bytesSentBlock;
    CDUnknownBlockType downloadSizeIncrementedBlock;
    CDUnknownBlockType uploadSizeIncrementedBlock;
    CDUnknownBlockType dataReceivedBlock;
    CDUnknownBlockType authenticationNeededBlock;
    CDUnknownBlockType proxyAuthenticationNeededBlock;
    CDUnknownBlockType requestRedirectedBlock;
    _Bool isQBNetwork;
    _Bool noRedict;
    NSThread *qbThread;
    NSString *sslHost;
}

+ (void)parseMimeType:(id *)arg1 andResponseEncoding:(unsigned long long *)arg2 fromContentType:(id)arg3;
+ (id)dateFromRFC1123String:(id)arg1;
+ (id)expiryDateForRequest:(id)arg1 maxAge:(double)arg2;
+ (id)base64forData:(id)arg1;
+ (_Bool)isMultitaskingSupported;
+ (void)runRequests;
+ (id)threadForRequest:(id)arg1;
+ (void)hideNetworkActivityIndicatorIfNeeeded;
+ (void)hideNetworkActivityIndicatorAfterDelay;
+ (void)hideNetworkActivityIndicator;
+ (void)showNetworkActivityIndicator;
+ (void)setShouldUpdateNetworkActivityIndicator:(_Bool)arg1;
+ (_Bool)isNetworkInUse;
+ (id)defaultCache;
+ (void)setDefaultCache:(id)arg1;
+ (id)sharedQueue;
+ (void)reachabilityChanged:(id)arg1;
+ (_Bool)isNetworkReachableViaWWAN;
+ (void)unsubscribeFromNetworkReachabilityNotifications;
+ (void)registerForNetworkReachabilityNotifications;
+ (void)throttleBandwidthForWWANUsingLimit:(unsigned long long)arg1;
+ (void)setShouldThrottleBandwidthForWWAN:(_Bool)arg1;
+ (unsigned long long)maxUploadReadLength;
+ (void)measureBandwidthUsage;
+ (unsigned long long)averageBandwidthUsedPerSecond;
+ (void)recordBandwidthUsage;
+ (void)incrementBandwidthUsedInLastSecond:(unsigned long long)arg1;
+ (void)setMaxBandwidthPerSecond:(unsigned long long)arg1;
+ (unsigned long long)maxBandwidthPerSecond;
+ (_Bool)isBandwidthThrottled;
+ (id)mimeTypeForFileAtPath:(id)arg1;
+ (void)setDefaultUserAgentString:(id)arg1;
+ (id)defaultUserAgentString;
+ (void)clearSession;
+ (void)addSessionCookie:(id)arg1;
+ (void)setSessionCookies:(id)arg1;
+ (id)sessionCookies;
+ (void)removeCredentialsForProxy:(id)arg1 port:(int)arg2 realm:(id)arg3;
+ (void)removeCredentialsForHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4;
+ (id)savedCredentialsForProxy:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4;
+ (id)savedCredentialsForHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4;
+ (void)saveCredentials:(id)arg1 forProxy:(id)arg2 port:(int)arg3 realm:(id)arg4;
+ (void)saveCredentials:(id)arg1 forHost:(id)arg2 port:(int)arg3 protocol:(id)arg4 realm:(id)arg5;
+ (void)removeAuthenticationCredentialsFromSessionStore:(id)arg1;
+ (void)removeProxyAuthenticationCredentialsFromSessionStore:(id)arg1;
+ (void)storeAuthenticationCredentialsInSessionStore:(id)arg1;
+ (void)storeProxyAuthenticationCredentialsInSessionStore:(id)arg1;
+ (id)sessionCredentialsStore;
+ (id)sessionProxyCredentialsStore;
+ (void)setDefaultTimeOutSeconds:(double)arg1;
+ (double)defaultTimeOutSeconds;
+ (void)expirePersistentConnections;
+ (_Bool)hasParsePac;
+ (_Bool)removeFileAtPath:(id)arg1 error:(id *)arg2;
+ (void)updateProgressIndicator:(id *)arg1 withProgress:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3;
+ (void)performInvocation:(id)arg1 onTarget:(id *)arg2 releasingObject:(id)arg3;
+ (void)performSelector:(SEL)arg1 onTarget:(id *)arg2 withObject:(id)arg3 amount:(void *)arg4 callerToRetain:(id)arg5;
+ (void)releaseBlocks:(id)arg1;
+ (id)requestWithURL:(id)arg1 usingCache:(id)arg2 andCachePolicy:(int)arg3;
+ (id)requestWithURL:(id)arg1 usingCache:(id)arg2;
+ (id)requestWithURL:(id)arg1;
+ (void)initialize;
@property(retain) NSString *sslHost; // @synthesize sslHost;
@property(retain) NSThread *qbThread; // @synthesize qbThread;
@property _Bool noRedict; // @synthesize noRedict;
@property _Bool isQBNetwork; // @synthesize isQBNetwork;
@property(nonatomic, setter=setSynchronous:) _Bool isSynchronous; // @synthesize isSynchronous;
@property(retain, nonatomic) NSMutableData *PACFileData; // @synthesize PACFileData;
@property(retain, nonatomic) NSInputStream *PACFileReadStream; // @synthesize PACFileReadStream;
@property(retain, nonatomic) QBASIHTTPRequest *PACFileRequest; // @synthesize PACFileRequest;
@property(nonatomic) _Bool isPACFileRequest; // @synthesize isPACFileRequest;
@property _Bool shouldWaitToInflateCompressedResponses; // @synthesize shouldWaitToInflateCompressedResponses;
@property(retain) QBASIDataDecompressor *dataDecompressor; // @synthesize dataDecompressor;
@property _Bool shouldContinueWhenAppEntersBackground; // @synthesize shouldContinueWhenAppEntersBackground;
@property(retain, nonatomic) NSURL *redirectURL; // @synthesize redirectURL;
@property(retain) NSArray *clientCertificates; // @synthesize clientCertificates;
@property double secondsToCache; // @synthesize secondsToCache;
@property _Bool didUseCachedResponse; // @synthesize didUseCachedResponse;
@property int cacheStoragePolicy; // @synthesize cacheStoragePolicy;
@property int cachePolicy; // @synthesize cachePolicy;
@property id <QBASICacheDelegate> downloadCache; // @synthesize downloadCache;
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer;
@property(nonatomic) NSString *runLoopMode; // @synthesize runLoopMode;
@property(retain) NSNumber *requestID; // @synthesize requestID;
@property(nonatomic) _Bool downloadComplete; // @synthesize downloadComplete;
@property _Bool shouldUseRFC2616RedirectBehaviour; // @synthesize shouldUseRFC2616RedirectBehaviour;
@property(nonatomic) _Bool readStreamIsScheduled; // @synthesize readStreamIsScheduled;
@property(retain, nonatomic) NSInputStream *readStream; // @synthesize readStream;
@property(retain, nonatomic) NSMutableDictionary *connectionInfo; // @synthesize connectionInfo;
@property _Bool connectionCanBeReused; // @synthesize connectionCanBeReused;
@property double persistentConnectionTimeoutSeconds; // @synthesize persistentConnectionTimeoutSeconds;
@property _Bool shouldAttemptPersistentConnection; // @synthesize shouldAttemptPersistentConnection;
@property _Bool willRetryRequest; // @synthesize willRetryRequest;
@property int retryCount; // @synthesize retryCount;
@property int numberOfTimesToRetryOnTimeout; // @synthesize numberOfTimesToRetryOnTimeout;
@property _Bool inProgress; // @synthesize inProgress;
@property _Bool haveBuiltRequestHeaders; // @synthesize haveBuiltRequestHeaders;
@property _Bool shouldPresentCredentialsBeforeChallenge; // @synthesize shouldPresentCredentialsBeforeChallenge;
@property(retain) NSString *responseStatusMessage; // @synthesize responseStatusMessage;
@property int authenticationNeeded; // @synthesize authenticationNeeded;
@property _Bool shouldPresentProxyAuthenticationDialog; // @synthesize shouldPresentProxyAuthenticationDialog;
@property _Bool shouldPresentAuthenticationDialog; // @synthesize shouldPresentAuthenticationDialog;
@property(retain) NSString *proxyAuthenticationScheme; // @synthesize proxyAuthenticationScheme;
@property(retain) NSString *authenticationScheme; // @synthesize authenticationScheme;
@property(retain) NSURL *PACurl; // @synthesize PACurl;
@property(retain) NSString *proxyType; // @synthesize proxyType;
@property int proxyPort; // @synthesize proxyPort;
@property(retain) NSString *proxyHost; // @synthesize proxyHost;
@property(retain) NSDictionary *proxyCredentials; // @synthesize proxyCredentials;
@property _Bool shouldCompressRequestBody; // @synthesize shouldCompressRequestBody;
@property(nonatomic) int redirectCount; // @synthesize redirectCount;
@property(nonatomic) _Bool needsRedirect; // @synthesize needsRedirect;
@property _Bool validatesSecureCertificate; // @synthesize validatesSecureCertificate;
@property _Bool shouldRedirect; // @synthesize shouldRedirect;
@property(nonatomic) _Bool updatedProgress; // @synthesize updatedProgress;
@property int proxyAuthenticationRetryCount; // @synthesize proxyAuthenticationRetryCount;
@property int authenticationRetryCount; // @synthesize authenticationRetryCount;
@property(retain, nonatomic) NSOutputStream *inflatedFileDownloadOutputStream; // @synthesize inflatedFileDownloadOutputStream;
@property(retain, nonatomic) NSOutputStream *fileDownloadOutputStream; // @synthesize fileDownloadOutputStream;
@property(nonatomic) _Bool haveBuiltPostBody; // @synthesize haveBuiltPostBody;
@property(retain) NSRecursiveLock *cancelledLock; // @synthesize cancelledLock;
@property(nonatomic) unsigned long long lastBytesSent; // @synthesize lastBytesSent;
@property(nonatomic) unsigned long long lastBytesRead; // @synthesize lastBytesRead;
@property _Bool useHTTPVersionOne; // @synthesize useHTTPVersionOne;
@property _Bool didCreateTemporaryPostDataFile; // @synthesize didCreateTemporaryPostDataFile;
@property _Bool shouldStreamPostDataFromDisk; // @synthesize shouldStreamPostDataFromDisk;
@property(retain, nonatomic) NSInputStream *postBodyReadStream; // @synthesize postBodyReadStream;
@property(retain, nonatomic) NSOutputStream *postBodyWriteStream; // @synthesize postBodyWriteStream;
@property(retain, nonatomic) NSString *compressedPostBodyFilePath; // @synthesize compressedPostBodyFilePath;
@property(retain) NSString *postBodyFilePath; // @synthesize postBodyFilePath;
@property long long tag; // @synthesize tag;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo;
@property _Bool allowResumeForFileDownloads; // @synthesize allowResumeForFileDownloads;
@property _Bool allowCompressedResponse; // @synthesize allowCompressedResponse;
@property unsigned long long responseEncoding; // @synthesize responseEncoding;
@property unsigned long long defaultResponseEncoding; // @synthesize defaultResponseEncoding;
@property(nonatomic) unsigned long long uploadBufferSize; // @synthesize uploadBufferSize;
@property _Bool showAccurateProgress; // @synthesize showAccurateProgress;
@property unsigned long long totalBytesSent; // @synthesize totalBytesSent;
@property unsigned long long totalBytesRead; // @synthesize totalBytesRead;
@property QBASIHTTPRequest *mainRequest; // @synthesize mainRequest;
@property _Bool shouldResetUploadProgress; // @synthesize shouldResetUploadProgress;
@property _Bool shouldResetDownloadProgress; // @synthesize shouldResetDownloadProgress;
@property unsigned long long postLength; // @synthesize postLength;
@property unsigned long long partialDownloadSize; // @synthesize partialDownloadSize;
@property unsigned long long contentLength; // @synthesize contentLength;
@property(retain, nonatomic) NSData *compressedPostBody; // @synthesize compressedPostBody;
@property(retain) NSMutableData *postBody; // @synthesize postBody;
@property double timeOutSeconds; // @synthesize timeOutSeconds;
@property(retain, nonatomic) NSDate *lastActivityTime; // @synthesize lastActivityTime;
@property(retain) NSMutableData *rawResponseData; // @synthesize rawResponseData;
@property int responseStatusCode; // @synthesize responseStatusCode;
@property(retain) NSDictionary *requestCredentials; // @synthesize requestCredentials;
@property(retain) NSMutableArray *requestCookies; // @synthesize requestCookies;
@property(retain) NSArray *responseCookies; // @synthesize responseCookies;
@property(retain) NSDictionary *responseHeaders; // @synthesize responseHeaders;
@property(retain) NSMutableDictionary *requestHeaders; // @synthesize requestHeaders;
@property _Bool complete; // @synthesize complete;
@property(retain) NSError *error; // @synthesize error;
@property(retain) NSString *proxyAuthenticationRealm; // @synthesize proxyAuthenticationRealm;
@property(retain) NSString *authenticationRealm; // @synthesize authenticationRealm;
@property SEL didReceiveDataSelector; // @synthesize didReceiveDataSelector;
@property SEL didFailSelector; // @synthesize didFailSelector;
@property SEL didFinishSelector; // @synthesize didFinishSelector;
@property SEL willRedirectSelector; // @synthesize willRedirectSelector;
@property SEL didReceiveResponseHeadersSelector; // @synthesize didReceiveResponseHeadersSelector;
@property SEL didStartSelector; // @synthesize didStartSelector;
@property(retain) NSString *temporaryUncompressedDataDownloadPath; // @synthesize temporaryUncompressedDataDownloadPath;
@property(retain) NSString *temporaryFileDownloadPath; // @synthesize temporaryFileDownloadPath;
@property(retain) NSString *downloadDestinationPath; // @synthesize downloadDestinationPath;
@property _Bool useCookiePersistence; // @synthesize useCookiePersistence;
@property _Bool useSessionPersistence; // @synthesize useSessionPersistence;
@property _Bool useKeychainPersistence; // @synthesize useKeychainPersistence;
@property(retain) NSURL *originalURL; // @synthesize originalURL;
@property(retain) NSString *proxyDomain; // @synthesize proxyDomain;
@property(retain) NSString *proxyPassword; // @synthesize proxyPassword;
@property(retain) NSString *proxyUsername; // @synthesize proxyUsername;
@property(retain) NSString *domain; // @synthesize domain;
@property(retain) NSString *userAgentString; // @synthesize userAgentString;
@property(retain) NSString *password; // @synthesize password;
@property(retain) NSString *username; // @synthesize username;
- (void)qbSetPostBodyReadStream:(id)arg1;
- (_Bool)qbNeedsRedirect;
- (void)qbRedirectToURL:(id)arg1;
- (void)qbCancel;
- (void)qbStartAsynchronous;
- (void)qbStartSynchronous;
- (void)setRequestRedirectedBlock:(CDUnknownBlockType)arg1;
- (void)setProxyAuthenticationNeededBlock:(CDUnknownBlockType)arg1;
- (void)setAuthenticationNeededBlock:(CDUnknownBlockType)arg1;
- (void)setDataReceivedBlock:(CDUnknownBlockType)arg1;
- (void)setUploadSizeIncrementedBlock:(CDUnknownBlockType)arg1;
- (void)setDownloadSizeIncrementedBlock:(CDUnknownBlockType)arg1;
- (void)setBytesSentBlock:(CDUnknownBlockType)arg1;
- (void)setBytesReceivedBlock:(CDUnknownBlockType)arg1;
- (void)setFailedBlock:(CDUnknownBlockType)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setHeadersReceivedBlock:(CDUnknownBlockType)arg1;
- (void)setStartedBlock:(CDUnknownBlockType)arg1;
- (void)performThrottling;
- (id)findSessionAuthenticationCredentials;
- (id)findSessionProxyAuthenticationCredentials;
- (void)setClientCertificateIdentity:(struct __SecIdentity *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)connectionID;
- (void)finishedDownloadingPACFile:(id)arg1;
- (void)runPACScript:(id)arg1;
- (void)timeOutPACRead;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)fetchPACFile;
- (_Bool)configureProxies;
- (_Bool)removeTemporaryCompressedUploadFile;
- (_Bool)removeTemporaryUploadFile;
- (_Bool)removeTemporaryUncompressedDownloadFile;
- (_Bool)removeTemporaryDownloadFile;
- (void)unscheduleReadStream;
- (void)scheduleReadStream;
- (void)destroyReadStream;
- (void)handleStreamError;
- (_Bool)retryUsingNewConnection;
- (void)useDataFromCache;
- (void)markAsFinished;
- (void)handleStreamComplete;
- (void)handleBytesAvailable;
- (_Bool)willAskDelegateToConfirmRedirect;
- (void)handleNetworkEvent:(unsigned long long)arg1;
- (void)addBasicAuthenticationHeaderWithUsername:(id)arg1 andPassword:(id)arg2;
- (void)attemptToApplyCredentialsAndResume;
- (_Bool)showAuthenticationDialog;
- (void)attemptToApplyProxyCredentialsAndResume;
- (void)askDelegateForCredentials;
- (_Bool)willAskDelegateForCredentials;
- (void)askDelegateForProxyCredentials;
- (_Bool)willAskDelegateForProxyCredentials;
- (_Bool)showProxyAuthenticationDialog;
- (void)failAuthentication;
- (void)cancelAuthentication;
- (void)retryUsingSuppliedCredentials;
- (id)findCredentials;
- (id)findProxyCredentials;
- (_Bool)applyCredentials:(id)arg1;
- (_Bool)applyProxyCredentials:(id)arg1;
- (void)saveCredentialsToKeychain:(id)arg1;
- (void)saveProxyCredentialsToKeychain:(id)arg1;
- (void)parseStringEncodingFromHeaders;
- (_Bool)willRedirect;
- (void)readResponseHeaders;
- (void)failWithError:(id)arg1;
- (void)passOnReceivedData:(id)arg1;
- (void)reportFailure;
- (void)reportFinished;
- (void)requestFinished;
- (void)requestWillRedirectToURL:(id)arg1;
- (void)requestReceivedResponseHeaders:(id)arg1;
- (void)requestRedirected;
- (void)requestStarted;
- (void)callBlock:(CDUnknownBlockType)arg1;
- (void)performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (void)removeUploadProgressSoFar;
- (void)incrementUploadSizeBy:(long long)arg1;
- (void)incrementDownloadSizeBy:(long long)arg1;
- (void)updateUploadProgress;
- (void)updateDownloadProgress;
@property(nonatomic) id downloadProgressDelegate; // @synthesize downloadProgressDelegate;
@property(nonatomic) id uploadProgressDelegate; // @synthesize uploadProgressDelegate;
- (void)updateProgressIndicators;
- (id)HEADRequest;
- (void)cancelLoad;
- (void)checkRequestStatus;
- (_Bool)shouldTimeOut;
- (void)redirectToURL:(id)arg1;
- (void)performRedirect;
- (void)updateStatus:(id)arg1;
- (void)startRequest;
- (void)updatePartialDownloadSize;
- (void)buildRequestHeaders;
- (void)applyCookieHeader;
- (void)applyAuthorizationHeader;
- (void)main;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (void)startAsynchronous;
- (void)start;
- (void)startSynchronous;
- (id)responseData;
- (_Bool)isResponseCompressed;
- (id)responseString;
- (_Bool)isCancelled;
- (void)clearDelegatesAndCancel;
- (void)cancel;
- (void)cancelOnRequestThread;
@property(retain, nonatomic) id queue; // @synthesize queue;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(retain, nonatomic, setter=setURL:) NSURL *url; // @synthesize url;
@property(retain, nonatomic) NSString *requestMethod; // @synthesize requestMethod;
- (void)appendPostDataFromFile:(id)arg1;
- (void)appendPostData:(id)arg1;
- (void)setupPostBody;
- (void)buildPostBody;
- (void)appendRequestHeader:(id)arg1 value:(id)arg2;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
- (void)releaseBlocksOnMainThread;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

