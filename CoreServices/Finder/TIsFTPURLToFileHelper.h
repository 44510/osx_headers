//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSString;

@interface TIsFTPURLToFileHelper : NSObject <NSURLConnectionDelegate>
{
    struct TriStateBool _isFileURL;
    struct TMutex _isFileURLLock;
    struct TConditionVariable _isFileURLCondition;
    struct TNSAutoRef<NSURLConnection *> _ftpURLConnection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (struct TriStateBool)isFileURL;
- (void)startConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

