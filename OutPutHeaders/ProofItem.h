/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface ProofItem : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned msgTime;
@property(assign, nonatomic) unsigned msgType;
@property(retain, nonatomic) NSString* sender;
@property(retain, nonatomic) NSString* content;
@property(assign, nonatomic) unsigned long long newMsgId;
+(void)initialize;
@end
