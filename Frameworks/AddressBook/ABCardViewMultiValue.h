//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABCardViewMultiValue.h"

@class ABCardViewPersonMapper, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ABCardViewMultiValue : NSObject <ABCardViewMultiValue>
{
    NSMutableArray *_entries;
    NSMutableArray *_removedEntryIdentifiers;
    NSArray *_personIdentifiers;
    id <ABCardViewProperty> _property;
    ABCardViewPersonMapper *_personMapper;
}

+ (id)multiValueWithLabel:(id)arg1 value:(id)arg2 property:(id)arg3;
@property(retain, nonatomic) ABCardViewPersonMapper *personMapper; // @synthesize personMapper=_personMapper;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)constraintForPersonIdentifier:(id)arg1;
- (id)availableLabelsForPersonIdentifier:(id)arg1;
- (id)initialLabelsForPersonIdentifier:(id)arg1;
- (BOOL)customLabelsSupportedAtIndex:(unsigned long long)arg1;
- (id)initialLabels;
- (id)availableLabelsAtIndex:(unsigned long long)arg1;
- (id)availableLabels;
- (id)defaultLabel;
- (void)eachEntry:(CDUnknownBlockType)arg1;
- (id)entries;
- (BOOL)hasEmptyValue;
- (BOOL)isValueEmptyAtIndex:(unsigned long long)arg1;
- (struct ABCardActionMultiValueIdentifier)cardActionIdentifierForMultiValueIdentifier:(id)arg1;
- (id)multiValueIdentifierAtIndex:(unsigned long long)arg1;
- (id)personIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfValueForIdentifier:(id)arg1;
- (id)labelForIdentifier:(id)arg1;
- (id)valueForIdentifier:(id)arg1;
- (id)accountBadgeAtIndex:(unsigned long long)arg1;
- (id)multiValueIdentifiersAtIndex:(unsigned long long)arg1;
- (id)personIdentifiersAtIndex:(unsigned long long)arg1;
- (BOOL)isPrivateValueIndex:(unsigned long long)arg1;
- (BOOL)isDuplicateIndex:(unsigned long long)arg1;
- (BOOL)isReadOnlyIndex:(unsigned long long)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)localizedLabelAtIndex:(unsigned long long)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)valuesForLabel:(id)arg1;
- (id)firstValueForLabel:(id)arg1;
- (id)multiValueByUpdatingWithBlock:(CDUnknownBlockType)arg1;
- (id)key;
- (id)removedEntryIdentifiers;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)containsValue:(id)arg1;
- (id)values;
- (id)labels;
- (id)identifiers;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithMultiValue:(id)arg1;
- (id)initWithProperty:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

