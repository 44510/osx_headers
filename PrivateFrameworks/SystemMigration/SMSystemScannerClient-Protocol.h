//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SMSystem_Client;

@protocol SMSystemScannerClient <NSObject>
@property(readonly) unsigned long long requestedClientScannerState;

@optional
- (void)daemonConnectionLost;
- (void)systemScannerRequestsHighlightOfSystem:(SMSystem_Client *)arg1;
@end

