/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface RemoteControlActionReport : MMObject {
}
+(void)ReportPrevTrack;
+(void)ReportNextTrack;
+(void)ReportStop;
+(void)ReportPause;
+(void)ReportPlay;
+(void)ReportFinishRecordForWXTalk;
+(void)ReportBeginRecordForWXTalk;
+(void)ReportFinishRecordForChat;
+(void)ReportBeginRecordForChat;
+(void)reportDataForAction:(unsigned long)action scene:(unsigned long)scene;
@end
