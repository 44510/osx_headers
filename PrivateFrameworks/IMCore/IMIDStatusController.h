//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSRecursiveLock;

@interface IMIDStatusController : NSObject
{
    NSRecursiveLock *_servicesLock;
    NSMutableSet *_servicesRegistered;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *_servicesRegistered; // @synthesize _servicesRegistered;
@property(retain, nonatomic) NSRecursiveLock *_servicesLock; // @synthesize _servicesLock;
- (long long)statusForID:(id)arg1 onService:(id)arg2;
- (void)requestStatusForID:(id)arg1 onAccount:(id)arg2;
- (void)requestStatusForID:(id)arg1 onService:(id)arg2;
- (void)_requestStatusForID:(id)arg1 onService:(id)arg2 onAccount:(id)arg3;
- (long long)_idStatusForID:(id)arg1 onAccount:(id)arg2;
- (long long)_statusForCanonicalizedID:(id)arg1 onService:(id)arg2;
- (long long)_idStatusForID:(id)arg1 onService:(id)arg2;
- (long long)__statusForID:(id)arg1 onService:(id)arg2 isCanonicalized:(BOOL)arg3;
- (void)_processIDStatusResponseForURI:(id)arg1 resultStatus:(long long)arg2 forService:(id)arg3;
- (void)dealloc;
- (id)init;

@end
