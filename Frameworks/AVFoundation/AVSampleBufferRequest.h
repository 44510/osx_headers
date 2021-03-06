//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVSampleBufferRequestInternal, AVSampleCursor;

@interface AVSampleBufferRequest : NSObject
{
    AVSampleBufferRequestInternal *_request;
}

+ (id)sampleBufferRequestWithStartCursor:(id)arg1;
@property(nonatomic) CDStruct_1b6d18a9 overrideTime;
@property(nonatomic) long long mode;
@property(nonatomic) long long maxSampleCount;
@property(nonatomic) long long preferredMinSampleCount;
@property(retain, nonatomic) AVSampleCursor *limitCursor;
@property(nonatomic) long long direction;
@property(readonly, retain, nonatomic) AVSampleCursor *startCursor;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithStartCursor:(id)arg1;

@end

