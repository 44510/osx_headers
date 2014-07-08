//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MCUserAlertCoordinator : NSObject
{
    NSMutableArray *_requests;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (void)_dequeueRequestAndStartNextRequest;
- (void)_displayInsecureAuthenticationRequest:(id)arg1;
- (void)_displayWebAuthentication:(id)arg1;
- (void)_displayUserAlertRequest;
- (void)_queueDisplayUserAlertForCoalescingValue:(id)arg1 onWindow:(CDUnknownBlockType)arg2 completionHandler:(id)arg3 requestCreator:(CDUnknownBlockType)arg4;
- (void)queueDisplayInsecureAuthenticationRequestForAccount:(id)arg1 applicationName:(id)arg2 onWindow:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)queueDisplayWebAuthenticationURL:(id)arg1 onWindow:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)description;
- (void)dealloc;
- (id)init;

@end

