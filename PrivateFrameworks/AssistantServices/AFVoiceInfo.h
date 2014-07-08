//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isCustom;
    NSString *_languageCode;
    long long _gender;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isCustom; // @synthesize isCustom=_isCustom;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(BOOL)arg3;

@end

