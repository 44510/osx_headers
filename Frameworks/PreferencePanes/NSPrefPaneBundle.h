//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBundle, NSDictionary, NSImage, NSMutableArray, NSMutableDictionary, NSNumber, NSPreferencePane, NSString;

@interface NSPrefPaneBundle : NSObject
{
    NSString *_path;
    NSString *_iconLabel;
    NSString *_shortName;
    NSString *_longName;
    NSString *_description;
    NSString *_identifier;
    NSString *_hardwareTestTool;
    NSString *_ioServiceToMatch;
    NSDictionary *_ioServiceAttributesToMatch;
    NSString *_searchGroupsPath;
    NSNumber *_isDisabledOnServer;
    NSString *_bestLocale;
    NSArray *_localizations;
    NSString *_shortVersion;
    NSString *_remoteViewClass;
    NSMutableDictionary *_localizedNames;
    NSMutableDictionary *_localizedIconLabels;
    NSPreferencePane *_prefPaneObject;
    NSImage *_icon;
    NSString *_iconName;
    NSImage *_largeIcon;
    NSBundle *_bundle;
    BOOL _enabled;
    BOOL _visible;
    BOOL _overrideVisible;
    BOOL _favorite;
    NSMutableArray *_searchAnchors;
}

+ (BOOL)bundleAtPathIsNativeForSystem:(id)arg1;
@property(readonly) NSPreferencePane *prefPaneObject; // @synthesize prefPaneObject=_prefPaneObject;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL overrideVisible; // @synthesize overrideVisible=_overrideVisible;
@property BOOL favorite; // @synthesize favorite=_favorite;
- (void)authorize:(id)arg1;
- (void)reveal:(id)arg1;
- (id)anchors;
- (id)objectSpecifier;
@property(getter=isVisible) BOOL visible; // @dynamic visible;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compare:(id)arg1;
- (id)mainView;
- (BOOL)instantiatePrefPaneObject;
- (id)localizedIconLabels;
- (id)localizedNames;
- (id)bundle;
- (id)largeIcon;
- (id)icon;
- (id)_iconName;
@property(readonly) NSString *remoteViewClass; // @dynamic remoteViewClass;
- (id)shortVersion;
- (BOOL)isDisabledOnServer;
- (id)searchGroupsPath;
- (id)ioServiceAttributesToMatch;
- (id)ioServiceToMatch;
- (id)hardwareTestTool;
@property(readonly) BOOL supportsAutoLayout; // @dynamic supportsAutoLayout;
@property(readonly) BOOL shouldAlwaysAllowOpenDocument; // @dynamic shouldAlwaysAllowOpenDocument;
- (id)description;
- (id)longName;
- (id)bestLocaleForCurrentUser;
- (id)shortName;
- (id)iconLabel;
- (BOOL)isNativeForSystem;
- (BOOL)isApple;
- (id)name;
- (id)identifier;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)_IOServiceDidMatch;

@end

