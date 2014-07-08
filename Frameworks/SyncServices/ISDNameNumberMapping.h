//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISDNameNumberProvider, NSMutableDictionary, NSString;

@interface ISDNameNumberMapping : NSObject
{
    NSString *_mappingName;
    int _last;
    NSMutableDictionary *_nameToNumber;
    NSMutableDictionary *_numberToName;
    ISDNameNumberProvider *_providedBy;
    NSString *_zeroMapping;
}

- (BOOL)hasMappingForName:(id)arg1;
- (id)nameForNumber:(id)arg1;
- (id)nameForInt:(int)arg1;
- (id)numberForName:(id)arg1;
- (int)mapNextIntToName:(id)arg1;
- (void)setNumber:(id)arg1 forName:(id)arg2;
- (void)setInt:(int)arg1 forName:(id)arg2;
- (int)intForName:(id)arg1;
- (void)clear;
- (void)dealloc;
- (id)nameToNumberMap;
- (void)mergeNameNumberMapping:(id)arg1;
- (BOOL)canBeMergedWith:(id)arg1;
- (void)setZeroMapping:(id)arg1;
- (BOOL)isEntityMapping;
- (BOOL)isClientMapping;
- (id)initMappingNamed:(id)arg1 withNameNumberMap:(id)arg2 providedBy:(id)arg3;
- (void)mergeOrReplaceFromMap:(id)arg1;
- (void)refreshFromNameNumberMap:(id)arg1;

@end

