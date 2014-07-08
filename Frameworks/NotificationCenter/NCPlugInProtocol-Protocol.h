//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol NCPlugInProtocol <NSObject>
- (void)simulateCrash;
- (void)requestEditMode:(long long)arg1;
- (void)requestSnapshot:(double)arg1;
- (void)deactivateNow;
- (void)changeDisplay:(unsigned int)arg1;
- (void)changeActiveState:(_Bool)arg1;
- (void)remoteViewReadyForDisplay:(unsigned int)arg1 block:(void (^)(double, unsigned long long, BOOL))arg2;
- (void)configureDeathTimeout:(double)arg1 leftMargin:(double)arg2 maxSize:(struct CGSize)arg3 enabledLogging:(_Bool)arg4 defaults:(NSDictionary *)arg5 reply:(void (^)(void))arg6;
@end

