//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMBaseControl.h>

#import "NSCopying.h"

@class NSArray;

@interface AVB17221AEMMatrix : AVB17221AEMBaseControl <NSCopying>
{
    unsigned short controlValueType;
    unsigned short width;
    unsigned short height;
    unsigned short numberOfSources;
    unsigned short baseSource;
    unsigned long long controlType;
    NSArray *values;
    NSArray *sources;
}

@property(copy) NSArray *sources; // @synthesize sources;
@property unsigned short baseSource; // @synthesize baseSource;
@property unsigned short numberOfSources; // @synthesize numberOfSources;
@property(copy) NSArray *values; // @synthesize values;
@property unsigned short height; // @synthesize height;
@property unsigned short width; // @synthesize width;
@property unsigned short controlValueType; // @synthesize controlValueType;
@property unsigned long long controlType; // @synthesize controlType;
- (void)dealloc;
- (void)renumberDescriptorWithNextIndexes:(id)arg1;
- (void)updateDependentContent;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)validChildrenDescriptorTypes;
- (id)xmlRepresentation;
- (id)xmlKey;
- (BOOL)updateWithXML:(id)arg1;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_02f57b7b *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_02f57b7b *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

