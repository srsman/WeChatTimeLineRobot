/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable, NSString;

@interface WCNewYearReportDB : MMObject {
	NSString* _m_nsFilePath;
	WCDataBase* _m_oDatabase;
	WCDataBaseTable* _m_oTable;
}
@property(retain, nonatomic) WCDataBaseTable* m_oTable;
@property(retain, nonatomic) WCDataBase* m_oDatabase;
@property(retain, nonatomic) NSString* m_nsFilePath;
-(void).cxx_destruct;
-(id)defaultDBPath;
-(id)createLogTable;
-(void)reset;
-(id)getFirstItem;
-(id)getLastItem;
-(BOOL)deleteItemsFromItem:(id)item ToItem:(id)item2;
-(id)getItemsFromItem:(id)item ToItem:(id)item2 Limit:(int)limit;
-(BOOL)insertItem:(id)item;
-(id)context;
-(void)close;
-(id)initWithPath:(id)path;
-(id)init;
@end
