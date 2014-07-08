//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ACDEClient/ACMToken.h>

@class NSDate, NSDictionary, NSString;

@interface ACMSSOToken : ACMToken
{
    NSString *_sessionToken;
    NSDate *_recentAuthenticationDate;
}

+ (id)legacyTokenWithCreationDate:(id)arg1 nonce:(id)arg2 data:(id)arg3 keyCode:(id)arg4;
+ (id)tokenWithToken:(id)arg1 data:(id)arg2;
+ (id)tokenWithCreationDate:(id)arg1 nonce:(id)arg2 data:(id)arg3 keyCode:(id)arg4;
+ (id)tokenWithKeychainTokenInfo:(id)arg1;
@property(retain) NSDate *recentAuthenticationDate; // @synthesize recentAuthenticationDate=_recentAuthenticationDate;
@property(retain) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
- (BOOL)validateLegacyTokenWithKeyCode:(id)arg1;
- (id)legacyTokenDataWithKeyCode:(id)arg1;
- (id)legacyTokenDictionaryWithKeyCode:(id)arg1;
- (id)legacyEncryptionKeyWithKeyCode:(id)arg1;
- (BOOL)validateTokenWithKeyCode:(id)arg1;
- (id)tokenDataWithKeyCode:(id)arg1;
- (id)tokenDictionaryWithKeyCode:(id)arg1;
- (id)encryptionKeyWithKeyCode:(id)arg1;
@property(readonly) NSDictionary *tokenDictionary;
- (void)dealloc;

@end

