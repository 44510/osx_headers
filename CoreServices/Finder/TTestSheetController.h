//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTestSheetController : NSObject
{
    struct TNSRef<TBrowserWindowController *> _windowController;
    struct TNSRef<id<TStdAlertSheetClientProtocol>> _client;
    unsigned long long _testNumber;
    unsigned long long _subTestNumber;
    short _expectedItemHit;
    _Bool _isRunningRaftTest;
}

+ (void)runTests;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buttonPressed:(short)arg1;
- (void)runTest;
- (void)runTestWithOKStr:(id)arg1 cancelStr:(id)arg2 otherStr:(id)arg3;
- (_Bool)calcExpectedButtonIndex;
- (void)dealloc;
- (id)init;

@end
