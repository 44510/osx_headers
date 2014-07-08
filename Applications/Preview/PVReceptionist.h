//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString;

@interface PVReceptionist : NSObject
{
    id _observedObject;
    NSString *_observedKeyPath;
    CDUnknownBlockType _task;
    NSOperationQueue *_queue;
}

+ (id)receptionistForKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 task:(CDUnknownBlockType)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 task:(CDUnknownBlockType)arg4;

@end

