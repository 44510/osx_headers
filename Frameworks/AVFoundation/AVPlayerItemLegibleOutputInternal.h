//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray, NSString;

@interface AVPlayerItemLegibleOutputInternal : NSObject
{
    id <AVPlayerItemLegibleOutputDependencyFactory> dependencyFactory;
    NSArray *nativeRepresentationSubtypes;
    AVWeakReferencingDelegateStorage *delegateStorage;
    struct dispatch_queue_s *ivarAccessQueue;
    AVWeakReference *weakReferenceToHost;
    BOOL suppressesPlayerRendering;
    double advanceInterval;
    NSString *textStylingResolution;
}

@end

