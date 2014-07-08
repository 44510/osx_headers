//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSDictionary, NSMachPort, NSString;

@interface PKInstallRequest : NSObject <NSSecureCoding>
{
    NSArray *_packageSpecifiers;
    NSString *_destinationPath;
    BOOL _stageRequest;
    BOOL _useForegroundPriorityForStaging;
    double _frameworkVersion;
    NSString *_clientProcessName;
    BOOL _openScripts;
    BOOL _internalBundleVersionChecking;
    NSString *_scriptTargetVolume;
    NSString *_loggingIdentifier;
    BOOL _ignoreIndexBom;
    BOOL _useAFSCByDefault;
    BOOL _isRecursive;
    NSData *_appStoreReceiptData;
    unsigned long long _spaceRequiredForInstall;
    BOOL _clientBlocksRestart;
    int _restartAction;
    NSString *_appPlaceholderPath;
    BOOL _isOSInstall;
    NSString *_installSandboxName;
    NSString *_masterBOMPath;
    unsigned long long _packageExtractorSpeed;
    NSDictionary *_untrustedEnvironment;
    NSMachPort *_clientBootstrapPort;
    NSMachPort *_clientSecuritySessionPort;
    int _clientUID;
    int _clientGID;
    CDStruct_166d2db6 *_authorizationEnvironment;
    struct AuthorizationOpaqueRef *_defaultAuthorization;
    struct AuthorizationOpaqueRef *_overrideAuthorization;
    int _minTrustLevel;
    BOOL _didPassPreflight;
    BOOL _hasValidTrustLevel;
    int _evaluatedTrustLevel;
    NSArray *_certificateChain;
    struct __SecTrust *_trustRef;
}

+ (BOOL)supportsSecureCoding;
+ (id)requestWithPackages:(id)arg1 destination:(id)arg2;
@property(retain) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
- (BOOL)_restrictedRootEnabled;
- (void)_setAppPlaceholderPath:(id)arg1;
- (id)_appPlaceholderPath;
- (void)_setClientBlocksRestart:(BOOL)arg1;
- (BOOL)_clientBlocksRestart;
- (void)_setSpaceRequiredForInstall:(unsigned long long)arg1;
- (unsigned long long)_spaceRequiredForInstall;
- (void)_setRestartAction:(int)arg1;
- (int)_restartAction;
- (void)_setAppStoreReceiptData:(id)arg1;
- (id)_appStoreReceiptData;
- (void)_setIsRecursive:(BOOL)arg1;
- (BOOL)_isRecursive;
- (void)_setInternalBundleVersionChecking:(BOOL)arg1;
- (BOOL)_internalBundleVersionChecking;
- (void)_setUseHFSPlusCompressionByDefault:(BOOL)arg1;
- (BOOL)_useHFSPlusCompressionByDefault;
- (unsigned long long)_extractionSpeed;
- (void)_setExtractionSpeed:(unsigned long long)arg1;
- (void)_setIgnoreIndexBom:(BOOL)arg1;
- (BOOL)_ignoreIndexBom;
- (void)_setUseOpenScriptsDirectory:(BOOL)arg1;
- (BOOL)_useOpenScriptsDirectory;
- (void)_setSkipsVerifyOnUnsignedPackages:(BOOL)arg1;
- (void)_setMasterBOMPath:(id)arg1;
- (id)_masterBOMPath;
- (void)_setScriptTargetVolume:(id)arg1;
- (id)_scriptTargetVolume;
- (void)_setClientUID:(int)arg1 andGID:(int)arg2;
- (int)_clientGID;
- (int)_clientUID;
- (void)_setClientSecuritySessionPort:(id)arg1;
- (id)_clientSecuritySessionPort;
- (void)_setClientBootstrapPort:(id)arg1;
- (id)_clientBootstrapPort;
- (void)_setUntrustedEnvironment:(id)arg1;
- (id)_untrustedEnvironment;
- (id)_installSandboxName;
- (void)_setInstallSandboxName:(id)arg1;
- (BOOL)_isOSInstall;
- (void)_setIsOSInstall:(BOOL)arg1;
- (id)_clientProcessName;
- (BOOL)_useForegroundPriorityForStaging;
- (void)_setUseForegroundPriorityForStaging:(BOOL)arg1;
- (BOOL)_isStageRequest;
- (void)_setIsStageRequest:(BOOL)arg1;
- (void)_setLoggingIdentifier:(id)arg1;
- (id)_loggingIdentifier;
- (id)_installItems;
- (void)removePackageSpecifiers:(id)arg1;
- (id)packageSpecifiers;
- (id)packages;
- (id)description;
- (BOOL)_checkChildIntegrityForDO;
- (BOOL)_isDeeplyEqualToRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithPackages:(id)arg1 destination:(id)arg2;
- (id)init;
- (id)initWithPackages:(id)arg1 destination:(id)arg2;
- (BOOL)_isRequestCompatibleWithRights:(id)arg1;
- (BOOL)_validateAuthorizationReturningAcquiredRights:(id *)arg1;
- (BOOL)authorizeForRight:(const char *)arg1 allowingInteraction:(BOOL)arg2;
- (BOOL)preauthorizeAllowingInteraction:(BOOL)arg1;
- (BOOL)requiresAuthorization;
- (int)_authLevel;
- (struct AuthorizationOpaqueRef *)authorization;
- (void)setAuthorizationEnvironment:(CDStruct_166d2db6 *)arg1;
- (void)setAuthorization:(struct AuthorizationOpaqueRef *)arg1;
- (struct AuthorizationOpaqueRef *)_createAuthorizationRefWithExternalFormData:(id)arg1;
- (id)_externalFormDataForAuthorizationRef:(struct AuthorizationOpaqueRef *)arg1;
- (id)_authorizationAsExternalData;
- (int)trustLevelReturningTrustRef:(struct __SecTrust **)arg1;
- (int)trustLevelReturningCertificateChain:(id *)arg1;
- (BOOL)evaluateTrustReturningError:(id *)arg1;
- (BOOL)_evaluateTrustForPackage:(id)arg1 verifyingPayload:(BOOL)arg2 returningError:(id *)arg3;
- (void)setMinimumRequiredTrustLevel:(int)arg1;
- (void)_updateWithSingleTrustLevel:(int)arg1 certificateChain:(id)arg2 trust:(struct __SecTrust *)arg3;
- (void)_clearTrustEvaluation;
- (BOOL)_hasValidInstallPathForAnyIAPContent;
- (BOOL)_isValidAppStoreRequest:(BOOL)arg1;
- (BOOL)_isRequestFromMacAppStore;
- (BOOL)_isRequestFromSoftwareUpdate;
- (BOOL)_validAttributesForSoftwareUpdate:(id)arg1;
- (BOOL)didPassPreflightCheck;
- (BOOL)_performPreflightCheckIncludingSizing:(BOOL)arg1 error:(id *)arg2;
- (BOOL)_canInstallPackageSpecifier:(id)arg1 error:(id *)arg2;
- (BOOL)performPreflightCheckReturningError:(id *)arg1;
- (unsigned long long)totalSizeRequired;
- (void)_resolveInstallPathsReplacingPriorResults:(BOOL)arg1;
- (BOOL)checkLocalPackagesReturningError:(id *)arg1;

@end

