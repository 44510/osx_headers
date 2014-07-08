//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray, NSString;

@interface CKDPConfigurationFieldValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _longValue;
    NSData *_bytesValue;
    NSMutableArray *_fieldValues;
    NSMutableArray *_listValues;
    NSString *_stringValue;
    int _type;
    BOOL _boolValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int longValue:1;
        unsigned int type:1;
        unsigned int boolValue:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *listValues; // @synthesize listValues=_listValues;
@property(retain, nonatomic) NSMutableArray *fieldValues; // @synthesize fieldValues=_fieldValues;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long longValue; // @synthesize longValue=_longValue;
@property(nonatomic) BOOL boolValue; // @synthesize boolValue=_boolValue;
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)listValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)listValuesCount;
- (void)addListValues:(id)arg1;
- (void)clearListValues;
- (id)fieldValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldValuesCount;
- (void)addFieldValues:(id)arg1;
- (void)clearFieldValues;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(nonatomic) BOOL hasDoubleValue;
@property(nonatomic) BOOL hasLongValue;
@property(nonatomic) BOOL hasBoolValue;
@property(readonly, nonatomic) BOOL hasBytesValue;
@property(nonatomic) BOOL hasType;

@end
