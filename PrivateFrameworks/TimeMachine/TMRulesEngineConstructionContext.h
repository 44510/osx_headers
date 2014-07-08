//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface TMRulesEngineConstructionContext : NSObject
{
    NSMutableDictionary *_sourceDiskMap;
    NSMutableDictionary *_filterGeneratorMap;
    NSMutableDictionary *_spotlightOracleMap;
    NSArray *_filterGenerators;
}

@property(readonly) NSArray *filterGenerators; // @synthesize filterGenerators=_filterGenerators;
- (void)enumerateRelatedObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)filterGeneratorCorrespondingToPath:(id)arg1;
- (id)pathFilterGenerators;
@property(readonly) NSArray *sourceDisks;
- (id)spotlightOracleForDevice:(int)arg1;
- (void)setSpotlightOracle:(id)arg1 forDevice:(int)arg2;
- (id)filterGeneratorForDevice:(int)arg1;
- (void)setFilterGenerator:(id)arg1 forDevice:(int)arg2;
- (id)sourceDiskForDevice:(int)arg1;
- (void)setSourceDisk:(id)arg1 forDevice:(int)arg2;
- (void)dealloc;
- (id)init;

@end

