//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HiCloudViewController.h"

@class NSString;

@interface CreateODAccountController : HiCloudViewController
{
    long long selectedRadioIndex;
    NSString *username;
    BOOL usernameValid;
    NSString *password;
    BOOL passwordValid;
}

@property(readonly) BOOL passwordValid; // @synthesize passwordValid;
@property(copy) NSString *password; // @synthesize password;
@property(readonly) BOOL usernameValid; // @synthesize usernameValid;
@property(copy) NSString *username; // @synthesize username;
@property long long selectedRadioIndex; // @synthesize selectedRadioIndex;
- (void)pressedEnterForODCredentials:(id)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)willBecomeVisible;
- (id)manager;
- (id)init;
- (id)previousViewIdentifier;
- (id)nextViewIdentifier;

@end

