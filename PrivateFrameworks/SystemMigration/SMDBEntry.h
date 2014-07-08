//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary;

@interface SMDBEntry : NSObject <NSCopying, NSCoding>
{
    NSMutableDictionary *dictionaryRepresentation;
}

+ (id)nativeRecordTypeForDSRecordType:(id)arg1;
+ (id)DSRecordTypeForNativeRecordType:(id)arg1;
+ (id)DSKeyForNativeKey:(id)arg1;
+ (id)nativeKeyForDSKey:(id)arg1;
- (void).cxx_destruct;
- (id)metaDataForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)convertRecordDictionary:(id)arg1 fromClass:(Class)arg2;
- (id)name;
- (id)attributes;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)convertEntry:(id)arg1 toClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)replaceValue:(id)arg1 withNewValue:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2 forMetaType:(BOOL)arg3;
- (void)deleteKey:(id)arg1 forMetaType:(BOOL)arg2;
- (void)setName:(id)arg1;
- (void)_setDictionaryRep:(id)arg1;

@end

