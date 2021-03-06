/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import "EmoticonDownloadProxy.h"

@class NSString;
@protocol EmoticonDownloadProxyDelegate;

@interface EmoticonCdnDownloadConnection : EmoticonDownloadProxy <NSURLConnectionDataDelegate, PBMessageObserverDelegate> {
	BOOL m_isActive;
	BOOL m_hasStartRequest;
	NSString* m_md5;
	NSString* m_cdnUrlString;
	id<EmoticonDownloadProxyDelegate> _m_delegate;
	NSString* _m_encryptUrlString;
	NSString* _m_aesKey;
	int _m_downloadType;
	int _m_decryptResult;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int m_decryptResult;
@property(assign, nonatomic) int m_downloadType;
@property(assign, nonatomic) BOOL m_hasStartRequest;
@property(assign, nonatomic) BOOL m_isActive;
@property(retain, nonatomic) NSString* m_aesKey;
@property(retain, nonatomic) NSString* m_encryptUrlString;
@property(retain, nonatomic) NSString* m_cdnUrlString;
@property(retain, nonatomic) NSString* m_md5;
@property(assign, nonatomic) __weak id<EmoticonDownloadProxyDelegate> m_delegate;
+(void)keyReportDecryptFailed;
+(void)keyReportDecryptOk;
+(void)keyReportDownloadEncryptUrl;
+(void)keyReportVerifyFailed;
+(void)keyReportVerifyOk;
+(void)keyReportDownloadFailed;
+(void)keyReportDownloadOK;
+(id)AESDecryptWithKeyString:(id)keyString andData:(id)data;
-(void).cxx_destruct;
-(void)kvReportDownloadFailed;
-(void)kvReportDownloadOKAndVerifyFailed;
-(void)kvReportDownloadAndVerifyOK;
-(void)callOkDelegateWithFilePath:(id)filePath;
-(void)callFailedDelegate;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)startRequest;
-(BOOL)isActive;
-(void)clearDelegate;
-(id)initWithMd5:(id)md5 withCdnUrl:(id)cdnUrl AndEncryptUrl:(id)url withAesKey:(id)aesKey delegate:(id)delegate;
-(id)initWithMd5:(id)md5 withCdnUrl:(id)cdnUrl delegate:(id)delegate;
-(void)dealloc;
@end

