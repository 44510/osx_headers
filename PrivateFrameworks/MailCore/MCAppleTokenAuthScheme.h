//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailCore/MCAuthScheme.h>

@interface MCAppleTokenAuthScheme : MCAuthScheme
{
}

+ (id)appleTokenAuthScheme;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)supportedSaslMechanisms;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (unsigned int)applescriptScheme;
- (id)humanReadableName;
- (id)name;
- (id)internetAccountsScheme;
- (void)dealloc;

@end

