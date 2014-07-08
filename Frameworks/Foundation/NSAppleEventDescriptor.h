//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface NSAppleEventDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    struct AEDesc _desc;
    BOOL _hasValidDesc;
    char _padding[3];
}

+ (BOOL)supportsSecureCoding;
+ (id)recordDescriptor;
+ (id)listDescriptor;
+ (id)appleEventWithEventClass:(unsigned int)arg1 eventID:(unsigned int)arg2 targetDescriptor:(id)arg3 returnID:(short)arg4 transactionID:(int)arg5;
+ (id)descriptorWithString:(id)arg1;
+ (id)descriptorWithTypeCode:(unsigned int)arg1;
+ (id)descriptorWithInt32:(int)arg1;
+ (id)descriptorWithEnumCode:(unsigned int)arg1;
+ (id)descriptorWithBoolean:(unsigned char)arg1;
+ (id)descriptorWithDescriptorType:(unsigned int)arg1 data:(id)arg2;
+ (id)descriptorWithDescriptorType:(unsigned int)arg1 bytes:(const void *)arg2 length:(unsigned long long)arg3;
+ (id)nullDescriptor;
+ (id)_descriptorWithNumber:(id)arg1;
+ (id)_scriptingAnyWithDescriptor:(id)arg1;
+ (id)_descriptorOfType:(id)arg1 withValue:(id)arg2;
+ (id)_descriptorOfType:(id)arg1 withValue:(id)arg2 orReasonWhyNot:(id *)arg3;
- (id)coerceToDescriptorType:(unsigned int)arg1;
- (unsigned int)keywordForDescriptorAtIndex:(long long)arg1;
- (void)removeDescriptorWithKeyword:(unsigned int)arg1;
- (id)descriptorForKeyword:(unsigned int)arg1;
- (void)setDescriptor:(id)arg1 forKeyword:(unsigned int)arg2;
- (void)removeDescriptorAtIndex:(long long)arg1;
- (id)descriptorAtIndex:(long long)arg1;
- (void)insertDescriptor:(id)arg1 atIndex:(long long)arg2;
@property(readonly) long long numberOfItems;
- (id)attributeDescriptorForKeyword:(unsigned int)arg1;
- (void)setAttributeDescriptor:(id)arg1 forKeyword:(unsigned int)arg2;
- (void)removeParamDescriptorWithKeyword:(unsigned int)arg1;
- (id)paramDescriptorForKeyword:(unsigned int)arg1;
- (void)setParamDescriptor:(id)arg1 forKeyword:(unsigned int)arg2;
@property(readonly) int transactionID;
@property(readonly) short returnID;
@property(readonly) unsigned int eventID;
@property(readonly) unsigned int eventClass;
@property(readonly, copy) NSString *stringValue;
@property(readonly) unsigned int typeCodeValue;
@property(readonly) int int32Value;
@property(readonly) unsigned int enumCodeValue;
@property(readonly) unsigned char booleanValue;
- (id)_dataForDescriptorType:(unsigned int)arg1;
@property(readonly, copy) NSData *data;
@property(readonly) unsigned int descriptorType;
@property(readonly) const struct AEDesc *aeDesc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initRecordDescriptor;
- (id)initListDescriptor;
- (id)initWithEventClass:(unsigned int)arg1 eventID:(unsigned int)arg2 targetDescriptor:(id)arg3 returnID:(short)arg4 transactionID:(int)arg5;
- (id)initWithDescriptorType:(unsigned int)arg1 data:(id)arg2;
- (id)initWithDescriptorType:(unsigned int)arg1 bytes:(const void *)arg2 length:(unsigned long long)arg3;
- (id)initWithAEDescNoCopy:(const struct AEDesc *)arg1;
- (id)init;
- (void)_flushAEDesc;
- (BOOL)_isAutoWhitelistedEvent;
- (BOOL)_senderHasGenericSendRights;
- (id)_senderAccessGroups;
- (BOOL)_senderHasSpecificSendRights;
- (id)_filePathValue;
- (id)_singleFilePathValue;
- (id)_fsRefValue;
- (id)_fileURLValue;
- (id)_dateValue;
- (BOOL)_copyValueOfDescriptorType:(unsigned int)arg1 toBuffer:(void *)arg2 ofLength:(unsigned long long)arg3;
- (id)_numberValue;
- (void)_setAEDesc:(struct AEDesc *)arg1;
- (struct AEDesc *)_AEDesc;
- (id)_initWithoutAEDesc;
- (id)_initWithDescriptorType:(unsigned int)arg1 bytes:(const void *)arg2 byteCount:(unsigned long long)arg3;
- (void)removeDecriptorAtIndex:(long long)arg1;
- (id)_scriptingAnyDescriptor;
- (int)_scriptingAlternativeValueRankWithDescriptor:(id)arg1;
- (id)_valueOfType:(id)arg1 withDeferredSpecifierEvaluation:(BOOL)arg2;
- (id)_valueOfType:(id)arg1;
- (id)_printSettingsValue;

@end

