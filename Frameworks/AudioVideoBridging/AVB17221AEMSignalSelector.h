//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMBaseControl.h>

#import "NSCopying.h"

@class NSArray;

@interface AVB17221AEMSignalSelector : AVB17221AEMBaseControl <NSCopying>
{
    unsigned short currentSignalType;
    unsigned short currentSignalIndex;
    unsigned short currentSignalOutput;
    unsigned short defaultSignalType;
    unsigned short defaultSignalIndex;
    unsigned short defaultSignalOutput;
    NSArray *sources;
}

@property(copy) NSArray *sources; // @synthesize sources;
@property unsigned short defaultSignalOutput; // @synthesize defaultSignalOutput;
@property unsigned short defaultSignalIndex; // @synthesize defaultSignalIndex;
@property unsigned short defaultSignalType; // @synthesize defaultSignalType;
@property unsigned short currentSignalOutput; // @synthesize currentSignalOutput;
@property unsigned short currentSignalIndex; // @synthesize currentSignalIndex;
@property unsigned short currentSignalType; // @synthesize currentSignalType;
- (void)dealloc;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_02f57b7b *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_02f57b7b *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

