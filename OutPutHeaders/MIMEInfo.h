/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;

@interface MIMEInfo : XXUnknownSuperclass {
	NSString* clientID;
	NSData* MIMEData;
	unsigned long startPos;
	unsigned long totalSize;
}
@property(assign, nonatomic) unsigned long totalSize;
@property(assign, nonatomic) unsigned long startPos;
@property(retain, nonatomic) NSData* MIMEData;
@property(retain, nonatomic) NSString* clientID;
-(void).cxx_destruct;
@end
