//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSObject<OS_dispatch_queue>;

@interface ISCViewController : NSViewController
{
    BOOL _populateIsPending;
    BOOL _hasPopulatedSinceSetRepresentedObject;
    id <ISCViewControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_sideQueue;
}

@property BOOL hasPopulatedSinceSetRepresentedObject; // @synthesize hasPopulatedSinceSetRepresentedObject=_hasPopulatedSinceSetRepresentedObject;
@property BOOL populateIsPending; // @synthesize populateIsPending=_populateIsPending;
@property(retain) NSObject<OS_dispatch_queue> *sideQueue; // @synthesize sideQueue=_sideQueue;
@property id <ISCViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)prefetchHintForDirectionOfScrollAlongInfiniteAxis;
- (void)_didPopulateFirstTime;
- (BOOL)_shouldPopulate;
- (BOOL)_allowDeferral;
- (void)populateLater;
- (BOOL)needsToPopulate;
- (void)populateNow;
- (void)setRepresentedObject:(id)arg1;

@end

