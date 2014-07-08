//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Social/SLMicroBlogUserRecord.h>

#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface SLTencentWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding>
{
    NSString *_openid;
    NSURL *_objectID;
}

+ (BOOL)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
@property(retain, nonatomic) NSURL *objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSString *openid; // @synthesize openid=_openid;
- (void).cxx_destruct;
- (void)setValuesWithUserDictionary:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

