//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACFPrincipal, NSData, NSDate, NSString;

@interface ACMToken : NSObject
{
    ACFPrincipal *_principal;
    NSDate *_creationDate;
    NSDate *_expirationDate;
    NSString *_nonce;
    NSData *_tokenData;
}

+ (id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenString:(id)arg3;
+ (id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenData:(id)arg3;
@property(retain) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) ACFPrincipal *principal; // @synthesize principal=_principal;
@property(retain) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(copy, nonatomic) NSString *tokenString;
@property(retain) NSDate *expirationDate;
- (void)dealloc;

@end

