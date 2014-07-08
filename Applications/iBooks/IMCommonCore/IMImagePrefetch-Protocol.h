//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>;

@protocol IMImagePrefetch <NSObject>
- (BOOL)isPrefetchCancelled;
- (void)addImageHandler:(void (^)(BOOL, struct CGImage *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)cancelPrefetchRequest;
- (struct CGImage *)cachedImageIfAvailable;
- (struct CGImage *)cachedImage;
- (void)loadData:(NSData *)arg1;
- (id)initWithData:(NSData *)arg1 optimalSize:(struct CGSize)arg2;
@end
