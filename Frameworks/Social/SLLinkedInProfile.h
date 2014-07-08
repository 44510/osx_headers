//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface SLLinkedInProfile : NSObject <NSSecureCoding>
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_headline;
}

+ (BOOL)supportsSecureCoding;
+ (id)profileWithDictionaryRepresentation:(id)arg1;
@property(retain) NSString *headline; // @synthesize headline=_headline;
@property(retain) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValuesWithProifleRep:(id)arg1;

@end

