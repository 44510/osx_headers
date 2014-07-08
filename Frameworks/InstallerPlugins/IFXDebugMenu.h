//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMenu, NSString;

@interface IFXDebugMenu : NSObject
{
    NSMenu *_containingMenu;
    NSString *_applicationVersionString;
    NSArray *_environmentVariable;
    NSArray *_environmentVariableDescription;
}

+ (id)debugMenu;
+ (BOOL)loadDebugMenuWithApplicationVersionString:(const char *)arg1;
+ (id)_sharedDebugMenuWithApplicationVersionString:(id)arg1;
- (id)initWithApplicationVersionString:(id)arg1;
- (void)dealloc;
- (id)_debugMenu;
- (BOOL)_addCrashToMenu:(id)arg1;
- (void)_crashThisProcess:(id)arg1;
- (void)_addEnvironmentVariablesToMenu:(id)arg1;
- (void)_environmentMenuItemChanged:(id)arg1;
- (BOOL)_addVersionInformation:(id)arg1;
- (id)_projectVersionFromProjectInfoString:(id)arg1;

@end

