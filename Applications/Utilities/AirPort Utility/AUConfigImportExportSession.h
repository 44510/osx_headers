//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@interface AUConfigImportExportSession : NSObject
{
    NSDictionary *_cachedSettings;
    BOOL configFileDataWasEncrypted;
    BOOL openingSecuredConfigFile;
    BOOL importingSecuredConfigFile;
    BOOL rememberBaseStationPassword;
    BOOL requireSecureAuth;
    BOOL userPromptedForPassword;
    NSData *configData;
    int passwordState;
    NSString *password;
    struct _BaseStation *_bsRef;
}

+ (int)prepareConfigFileImportWithData:(id)arg1 outConfigFileDict:(id *)arg2 outIsEncrypted:(char *)arg3;
+ (void)destroySharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *password; // @synthesize password;
@property(nonatomic) BOOL userPromptedForPassword; // @synthesize userPromptedForPassword;
@property(nonatomic) BOOL requireSecureAuth; // @synthesize requireSecureAuth;
@property(nonatomic) BOOL rememberBaseStationPassword; // @synthesize rememberBaseStationPassword;
@property(nonatomic) int passwordState; // @synthesize passwordState;
@property(nonatomic) BOOL openingSecuredConfigFile; // @synthesize openingSecuredConfigFile;
@property(nonatomic) BOOL importingSecuredConfigFile; // @synthesize importingSecuredConfigFile;
@property(nonatomic) BOOL configFileDataWasEncrypted; // @synthesize configFileDataWasEncrypted;
@property(retain, nonatomic) NSData *configData; // @synthesize configData;
@property(nonatomic) struct _BaseStation *bsRef; // @synthesize bsRef=_bsRef;
- (BOOL)addPasswordToKeychain;
- (int)saveConfigFileToPath:(id)arg1 includeSecureSettings:(BOOL)arg2;
- (int)saveConfigFileToPath:(id)arg1;
- (id)configFileDataIncludingSecureSettings:(BOOL)arg1 result:(int *)arg2;
- (int)doImportWithDictionary:(id)arg1;
- (int)doImport;
- (int)openWithConfigFileData:(id)arg1;
- (int)openWithSecuredConfigFileData:(id)arg1 password:(id)arg2;
- (BOOL)isModified;
- (BOOL)hasACPFeature:(unsigned int)arg1;
- (id)objectForBSSetting:(int)arg1;
- (id)objectForKey:(id)arg1;
- (int)setValue:(id)arg1 forSettingPath:(id)arg2;
- (int)getValue:(id *)arg1 forSettingPath:(id)arg2;
- (int)setValue:(id)arg1 forBSSetting:(int)arg2;
- (int)getValue:(id *)arg1 forBSSetting:(int)arg2;
- (id)allSupportedSettings;
- (void)dealloc;
- (void)resetSession;
- (id)init;

@end

