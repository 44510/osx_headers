//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, _NCMachSendRight;

@protocol NCPlugInHostProtocol <NSObject>
- (void)pluginRequestHeightChange:(double)arg1 updateNumber:(unsigned long long)arg2 fencePort:(_NCMachSendRight *)arg3;
- (void)pluginEditModeChanged:(long long)arg1;
- (void)pluginSnapshotData:(NSData *)arg1 scale:(double)arg2 result:(unsigned long long)arg3;
- (void)pluginHasContentChanged:(BOOL)arg1;
@end

