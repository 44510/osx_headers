//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptorInternal;

@interface AVAssetWriterInputMetadataAdaptor : NSObject
{
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}

+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1;
+ (void)initialize;
- (BOOL)appendTimedMetadataGroup:(id)arg1;
@property(readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetWriterInput:(id)arg1;
- (id)init;

@end

