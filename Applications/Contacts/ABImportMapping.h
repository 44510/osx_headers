//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, NSString;

@interface ABImportMapping : NSObject <NSCopying>
{
    NSString *_property;
    NSString *_label;
    NSString *_service;
    NSMutableDictionary *_mappings;
}

+ (id)propertyWithValue:(id)arg1 label:(id)arg2;
+ (id)mappingWithProperty:(id)arg1 label:(id)arg2;
+ (id)mappingWithProperty:(id)arg1 label:(id)arg2 service:(id)arg3;
+ (id)ignoreMapping;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)title;
- (BOOL)isSocialProfile;
- (BOOL)isInstantMessage;
- (BOOL)isAddress;
- (BOOL)isMultiValue;
- (BOOL)multiValue;
- (BOOL)isIgnore;
- (id)service;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)property;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 label:(id)arg2 service:(id)arg3 addressImportMappings:(id)arg4;
- (id)initWithProperty:(id)arg1 label:(id)arg2;
- (void)setColumnsForAddressMappingItemUsingMapping:(id)arg1;
- (void)setColumn:(long long)arg1 forAddressMappingItem:(id)arg2 postNotification:(BOOL)arg3;
- (void)setColumn:(long long)arg1 forAddressMappingItem:(id)arg2;
- (long long)columnForAddressMappingItem:(id)arg1;
- (void)postImportMappingModifiedNotification;

@end

