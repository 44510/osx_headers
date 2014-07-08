//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CWImageCache : NSObject
{
    NSMutableArray *_imageCache;
    struct dispatch_queue_s *_syncQueue;
}

+ (id)sharedImageCache;
- (id)iconImageNamed:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)highlightedImageNamed:(id)arg1;
- (id)__highlightedImageNamed:(id)arg1;
- (id)menuImageNamed:(id)arg1;
- (id)__menuImageNamed:(id)arg1;
- (id)__imageNamed:(id)arg1 template:(BOOL)arg2;
- (void)clearCache;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

