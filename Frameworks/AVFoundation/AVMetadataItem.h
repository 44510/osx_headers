//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class AVMetadataItemInternal, NSData, NSDate, NSDictionary, NSLocale, NSNumber, NSString;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying>
{
    AVMetadataItemInternal *_priv;
}

+ (id)dataTypeForValue:(id)arg1;
+ (id)_figMetadataPropertyFromMetadataItems:(id)arg1;
+ (id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg1;
+ (id)_isoUserDataKeysRequiringKeySpaceConversion;
+ (BOOL)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+ (id)keySpaceForIdentifier:(id)arg1;
+ (id)keyForIdentifier:(id)arg1;
+ (id)identifierForKey:(id)arg1 keySpace:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByMetadataItemFilter:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withStringValue:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifier:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2;
+ (void)initialize;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSDictionary *extraAttributes;
- (id)_serializationDataType;
@property(readonly, copy) NSString *dataType;
@property(readonly, copy) id <NSObject><NSCopying> value;
@property(readonly) CDStruct_1b6d18a9 duration;
@property(readonly) CDStruct_1b6d18a9 time;
@property(readonly, copy) NSString *extendedLanguageTag;
@property(readonly, copy) NSLocale *locale;
@property(readonly, copy) NSString *identifier;
- (id)keySpace;
- (id)commonKey;
- (id)key;
- (void *)_copyValueAsCFTypeWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 failureReason:(id *)arg2;
- (id)_figMetadataSpecificationReturningError:(id *)arg1;
- (id)_figMetadataFormat;
- (id)_figMetadataDictionary;
- (id)_figMetadataProperties;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_areExtraAttributesOf:(id)arg1 comparableToExtraAttributesOf:(id)arg2;
- (id)intrinsicAttributesOfExtraAttributes:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)_initWithFigMetadataDictionary:(id)arg1;
- (id)_initWithReader:(struct OpaqueFigMetadataReader *)arg1 itemIndex:(long long)arg2;
- (id)init;
- (id)_keyAsString;
- (void)_extractPropertiesFromDictionary:(id)arg1;
- (void)_updateLocaleFromExtendedLanguageTag:(id)arg1;
- (void)_updateExtendedLanguageTagFromLocale:(id)arg1;
- (void)_updateIdentifier;
- (void)_updateCommonKey;
- (void)_makePropertiesReady;
- (void)_makeValueReady;
- (struct CGImage *)imageValue;
@property(readonly) NSData *dataValue;
@property(readonly) NSDate *dateValue;
@property(readonly) NSNumber *numberValue;
@property(readonly) NSString *stringValue;

@end

