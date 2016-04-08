/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "IMsgExt.h"

@class NSString, WCCardMsgTips, WCCardPkgDB;
@protocol WCCardMsgCenterMgrDelegate;

@interface WCCardMsgCenterMgr : MMObject <IMsgExt> {
	WCCardPkgDB* _wccardPkgDB;
	WCCardMsgTips* _wccardMsgTips;
	unsigned long long _lastMsgSvrId;
	unsigned long long _lastLastMsgSvrId;
	NSString* _nsLastConsumedBoxID;
	id<WCCardMsgCenterMgrDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<WCCardMsgCenterMgrDelegate> delegate;
-(void).cxx_destruct;
-(void)OnGetNewXmlMsg:(id)msg Type:(id)type MsgWrap:(id)wrap;
-(void)loadCardMsgTips;
-(void)cleanRedDot;
-(BOOL)hasRedDot;
-(BOOL)setConsumedMsgRead:(id)read;
-(BOOL)setAllMsgRead;
-(BOOL)addMsg:(id)msg XML:(id)xml;
-(id)getFirstPageMsgList;
-(unsigned long)getUnreadMsgCount;
-(void)initDB:(id)db;
-(void)dealloc;
-(id)init;
@end
