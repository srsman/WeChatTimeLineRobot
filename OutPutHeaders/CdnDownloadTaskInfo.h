/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface CdnDownloadTaskInfo : XXUnknownSuperclass {
	NSString* m_nsClientMsgID;
	unsigned long m_uiFileLength;
	NSString* m_nsTransInfo;
	long m_nRetCode;
	unsigned long m_uiScene;
	NSString* m_nsFileID;
	NSString* m_nsExtInfo;
	BOOL m_isPartialEnd;
}
@property(assign, nonatomic) BOOL m_isPartialEnd;
@property(retain, nonatomic) NSString* m_nsExtInfo;
@property(retain, nonatomic) NSString* m_nsFileID;
@property(assign, nonatomic) unsigned long m_uiScene;
@property(assign, nonatomic) long m_nRetCode;
@property(retain, nonatomic) NSString* m_nsTransInfo;
@property(assign, nonatomic) unsigned long m_uiFileLength;
@property(retain, nonatomic) NSString* m_nsClientMsgID;
-(void).cxx_destruct;
@end

