/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSMutableArray, NSString;

@interface LbsRecommendPoiItem : MMObject {
	NSString* nsTitle;
	NSString* nsSubTitle;
	NSString* nsDesc;
	NSString* nsIconUrl;
	NSString* nsJumpUrl;
	NSString* nsSignature;
	NSMutableArray* aryADIconUrlList;
}
@property(retain, nonatomic) NSMutableArray* aryADIconUrlList;
@property(retain, nonatomic) NSString* nsSignature;
@property(retain, nonatomic) NSString* nsJumpUrl;
@property(retain, nonatomic) NSString* nsIconUrl;
@property(retain, nonatomic) NSString* nsDesc;
@property(retain, nonatomic) NSString* nsSubTitle;
@property(retain, nonatomic) NSString* nsTitle;
-(void).cxx_destruct;
@end

