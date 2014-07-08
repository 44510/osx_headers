//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface BKAnnotationHeightCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct __CFDictionary *_annotationHeights;
    id <THAnnotationMeasuring> _annotationMeasurer;
}

@property(nonatomic) __weak id <THAnnotationMeasuring> annotationMeasurer; // @synthesize annotationMeasurer=_annotationMeasurer;
- (void).cxx_destruct;
- (void)p_writeHeight:(double)arg1 forAnnotation:(id)arg2;
- (BOOL)p_readHeight:(double *)arg1 forAnnotation:(id)arg2;
- (void)p_writeToCache:(CDUnknownBlockType)arg1;
- (void)p_readFromCache:(CDUnknownBlockType)arg1;
- (double)p_measureAnnotation:(id)arg1;
- (void)overrideHeight:(double)arg1 forAnnotation:(id)arg2;
- (void)calculateHeightForAnnotations:(id)arg1;
- (void)invalidateHeightForAnnotation:(id)arg1;
- (double)heightForAnnotation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

