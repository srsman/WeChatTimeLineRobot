/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WloginTlv.h"

@class NSData, NSString;

@interface WloginTlv_0x127 : WloginTlv {
	unsigned short wVer;
	NSString* msgCode;
	NSData* randData;
}
@property(copy) NSString* msgCode;
@property(retain) NSData* randData;
@property(assign) unsigned short wVer;
-(void)dealloc;
-(int)encode:(id)encode;
@end

