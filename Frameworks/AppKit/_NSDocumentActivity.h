//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSDocumentActivity : NSObject
{
    CDUnknownBlockType _grantHandler;
    CDUnknownBlockType _workBlock;
    CDUnknownBlockType _cancellationHandler;
    BOOL _accessGranted;
    BOOL _cancelled;
    BOOL _finished;
    BOOL _cachedCancellationHandlerResponse;
    NSMutableArray *_breadcrumbs;
}

@property(readonly) NSArray *breadcrumbs; // @synthesize breadcrumbs=_breadcrumbs;
@property(getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(getter=isAccessGranted) BOOL accessGranted; // @synthesize accessGranted=_accessGranted;
@property(copy) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(copy) CDUnknownBlockType workBlock; // @synthesize workBlock=_workBlock;
@property(copy) CDUnknownBlockType grantHandler; // @synthesize grantHandler=_grantHandler;
- (void)addBreadcrumb:(id)arg1;
- (void)cancelAndFinishAsynchronously:(char *)arg1;
- (void)dealloc;

@end

