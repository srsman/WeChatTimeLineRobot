/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface iAPTransation : XXUnknownSuperclass {
	NSString* nsProductID;
	NSString* nsTransationID;
	NSString* nsSerialID;
	unsigned long iRequestType;
	unsigned long iBizType;
}
@property(assign, nonatomic) unsigned long iBizType;
@property(assign, nonatomic) unsigned long iRequestType;
@property(retain, nonatomic) NSString* nsSerialID;
@property(retain, nonatomic) NSString* nsTransationID;
@property(retain, nonatomic) NSString* nsProductID;
-(void).cxx_destruct;
-(id)description;
-(void)dealloc;
@end
