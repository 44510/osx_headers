//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMUnit.h>

#import "NSCopying.h"

@class AVB17221AEMSamplingRate, NSArray;

@interface AVB17221AEMAudioUnit : AVB17221AEMUnit <NSCopying>
{
    AVB17221AEMSamplingRate *currentSamplingRate;
    NSArray *samplingRates;
}

@property(copy) NSArray *samplingRates; // @synthesize samplingRates;
@property(copy) AVB17221AEMSamplingRate *currentSamplingRate; // @synthesize currentSamplingRate;
- (void)dealloc;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)xmlRepresentation;
- (id)xmlKey;
- (BOOL)updateWithXML:(id)arg1;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_02f57b7b *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_02f57b7b *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end
