//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LiEncoding.h"

@class LiStringAtomCache, NSArray, NSMutableArray, NSString;

@interface LiDropDef : NSObject <LiEncoding>
{
    NSMutableArray *_propertyDefs;
    unsigned long long _dataOffsets[512];
    BOOL _debugLogging;
    LiStringAtomCache *_stringAtomCache;
    unsigned long long _dropSize;
    unsigned long long _modelIdIndex;
}

+ (unsigned long long)dataSizeForFieldType:(unsigned char)arg1;
@property(nonatomic) BOOL debugLogging; // @synthesize debugLogging=_debugLogging;
@property(readonly, nonatomic) unsigned long long modelIdIndex; // @synthesize modelIdIndex=_modelIdIndex;
@property(nonatomic) unsigned long long dropSize; // @synthesize dropSize=_dropSize;
@property(retain, nonatomic) LiStringAtomCache *stringAtomCache; // @synthesize stringAtomCache=_stringAtomCache;
@property(readonly, nonatomic) NSArray *propertyDefs; // @synthesize propertyDefs=_propertyDefs;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDropDef:(id)arg1;
- (unsigned long long)dataSizeForIndex:(unsigned long long)arg1;
- (unsigned long long)dataOffsetForIndex:(unsigned long long)arg1;
- (unsigned char)propertyTypeForIndex:(unsigned long long)arg1;
- (id)propertyDefForIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)addProperties:(id)arg1 fromTable:(id)arg2;
- (void)addPropertyDef:(id)arg1;
- (void)clear;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

