/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class AppRegisterInfo, UISwitch, MMWebImageView, UILabel;
@protocol ShareTo3rdAppManageCellDelegate;

@interface ShareTo3rdAppManageCell : MMUIView {
	MMWebImageView* _iconImageView;
	UILabel* _nameLabel;
	UISwitch* _switchView;
	AppRegisterInfo* m_appInfo;
	id<ShareTo3rdAppManageCellDelegate> m_delegate;
}
@property(assign, nonatomic) __weak id<ShareTo3rdAppManageCellDelegate> m_delegate;
-(void).cxx_destruct;
-(void)actionSwitchValueChanged:(id)changed;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame withAppInfo:(id)appInfo;
@end

