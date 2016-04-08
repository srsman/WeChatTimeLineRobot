/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCBaseTextFieldItem.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "WCBizPickerViewDelegate.h"

@class NSArray, WCAddressStageDataStruct, NSString, UIPickerView;

@interface WCAddressPickerItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate, WCBizPickerViewDelegate> {
	NSArray* m_arrStage;
	WCAddressStageDataStruct* m_selectProvince;
	WCAddressStageDataStruct* m_selectCity;
	WCAddressStageDataStruct* m_selectDistrict;
	unsigned long m_uiCurProvince;
	unsigned long m_uiCurCity;
	unsigned long m_uiCurDistrict;
	UIPickerView* m_pickerView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)UIPickerViewDidFinish;
-(void)UIPickerViewDidCancel;
-(void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(id)pickerView:(id)view titleForRow:(int)row forComponent:(int)component;
-(float)pickerView:(id)view widthForComponent:(int)component;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(void)SetText;
-(void)becomeFirstResponder;
-(void)dealloc;
-(void)initView:(CGRect)view;
-(id)getSelectDistrict;
-(id)getSelectCity;
-(id)getSelectProvice;
-(void)setSelectStageProvince:(id)province City:(id)city District:(id)district;
-(void)setAllAddressStageData:(id)data;
@end
