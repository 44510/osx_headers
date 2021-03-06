//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HiCloudManager.h"

@class ADMUser, NSData, NSString, iCloudManager;

@interface LocalUserAccountManager : NSObject <HiCloudManager>
{
    id <NSObject> adminAuthorization;
    ADMUser *_createdUser;
    NSString *userName;
    NSString *fullName;
    NSString *password;
    NSString *hint;
    NSData *userPictureData;
    BOOL secureMyMac;
    BOOL isOpenDirectoryAccount;
    NSString *odUsername;
    NSString *odFullname;
    iCloudManager *icloudManager;
    CDUnknownBlockType _additionalApplySettingsBlock;
    BOOL shouldCreateUser;
    BOOL allowAppleIDLocalAccountPasswordReset;
    BOOL _useAppleIDAsLogin;
}

+ (id)_pickUserPicturePath;
+ (void)setOSVersioniCloudCreatedForUser:(id)arg1;
+ (id)randomUserPictureData;
+ (BOOL)_setHiddenUsersListUser:(id)arg1 adding:(BOOL)arg2;
+ (id)_firstNameFromFullName:(id)arg1;
+ (void)_setTheComputerNameWithOwnerName:(id)arg1;
+ (id)_userWithName:(id)arg1 byFullName:(BOOL)arg2 localOnly:(BOOL)arg3;
+ (unsigned long long)getGlobalPasswordLengthPolicy;
@property BOOL useAppleIDAsLogin; // @synthesize useAppleIDAsLogin=_useAppleIDAsLogin;
@property BOOL allowAppleIDLocalAccountPasswordReset; // @synthesize allowAppleIDLocalAccountPasswordReset;
@property BOOL shouldCreateUser; // @synthesize shouldCreateUser;
@property(retain) iCloudManager *icloudManager; // @synthesize icloudManager;
@property(copy) NSString *odFullname; // @synthesize odFullname;
@property(copy) NSString *odUsername; // @synthesize odUsername;
@property BOOL isOpenDirectoryAccount; // @synthesize isOpenDirectoryAccount;
@property BOOL secureMyMac; // @synthesize secureMyMac;
@property(retain) NSData *userPictureData; // @synthesize userPictureData;
@property(retain) NSString *hint; // @synthesize hint;
@property(retain) NSString *password; // @synthesize password;
@property(retain) NSString *fullName; // @synthesize fullName;
@property(retain) NSString *userName; // @synthesize userName;
@property(retain) id <NSObject> adminAuthorization; // @synthesize adminAuthorization;
- (void)setAdditionalApplySettingsBlock:(CDUnknownBlockType)arg1;
- (BOOL)_createLoginKeychain:(id)arg1 pass:(id)arg2;
- (BOOL)adminAccountExists:(id *)arg1:(id *)arg2;
@property(readonly) BOOL adminAccountExists;
- (void)_setAutomaticLogin:(BOOL)arg1;
- (void)_setTheComputerName;
@property(readonly) NSString *suggestedFullname;
@property(readonly) BOOL canEnableAppleIDLocalAccountPasswordReset;
- (BOOL)validatePassword:(id)arg1 forUserWithShortName:(id)arg2 localOnly:(BOOL)arg3;
- (BOOL)userExistsWithFullName:(id)arg1 localOnly:(BOOL)arg2 outShortName:(id *)arg3;
- (BOOL)userExistsWithShortName:(id)arg1 localOnly:(BOOL)arg2 outFullname:(id *)arg3;
- (BOOL)applyPostUserAccountMachineSettings;
- (BOOL)_applyPostUserAccountPreKeychainSyncSettings;
- (BOOL)setAppleIDPasswordReset_RunAsRoot;
- (BOOL)applySettings:(id *)arg1;
- (BOOL)linkAppleIDToUserAccount_RunSetEUID:(id)arg1;
- (BOOL)commitUserAccount;
- (id)createdUser;
- (id)settingsStatusMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

