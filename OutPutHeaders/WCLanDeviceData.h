/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class WCMediaItem, WCDataItem, CMessageWrap, WCLanDeviceKissFileMsg;

@interface WCLanDeviceData : MMObject {
	CMessageWrap* m_nsMsgWrap;
	WCDataItem* m_nsDataItem;
	unsigned m_nsScene;
	unsigned m_nsSource;
	WCMediaItem* m_nsMediaItem;
	WCLanDeviceKissFileMsg* m_nsFileInfo;
}
@property(retain, nonatomic) WCLanDeviceKissFileMsg* m_nsFileInfo;
@property(retain, nonatomic) CMessageWrap* m_nsMsgWrap;
@property(retain, nonatomic) WCMediaItem* m_nsMediaItem;
@property(retain, nonatomic) WCDataItem* m_nsDataItem;
@property(assign, nonatomic) unsigned m_nsScene;
@property(assign, nonatomic) unsigned m_nsSource;
-(void).cxx_destruct;
-(id)dataId;
-(id)fileKissMsg;
-(id)filePath;
-(id)imageKissMsg;
-(id)imagePath;
-(id)locationInfo;
-(id)musicInfo;
-(id)initWithTimeLineItem:(id)timeLineItem mediaItem:(id)item;
-(id)initWithMessageWrap:(id)messageWrap;
@end

