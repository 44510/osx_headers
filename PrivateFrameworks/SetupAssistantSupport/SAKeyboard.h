//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDictionary;

@interface SAKeyboard : NSObject <NSCoding>
{
    NSArray *_modeArray;
    NSDictionary *_keyboardInfo;
    int _inputModeIndex;
}

+ (void)savePrefs;
+ (void)setKeyboard:(id)arg1 withLocale:(id)arg2;
+ (void)setCurrentKeyboard:(id)arg1 withLocale:(id)arg2;
+ (void)setCurrentKeyboard:(id)arg1;
+ (id)currentKeyboard;
+ (id)keyboardWithSourceID:(id)arg1;
+ (id)keyboardWithDictionary:(id)arg1;
+ (id)keyboardsFromKeyboardSourceIDs:(id)arg1;
+ (id)_keyboardWithInputSourceRef:(struct __TISInputSource *)arg1;
+ (id)_keyboardWithResID:(id)arg1;
+ (id)_allKeyboards;
+ (void)_setDefaultTSMInputSource;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)defaultModeName;
- (id)modeNames;
- (id)modes;
- (BOOL)isInputMethod;
- (BOOL)hasModes;
- (id)keyboardInfo;
- (id)englishName;
- (id)localizedName;
- (id)sourceID;
- (void)setAsciiLayoutWithLocale:(id)arg1;
- (int)inputModeIndex;
- (void)setInputModeIndex:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)sortKeyboardArray:(id)arg1;
- (id)englishName;
- (id)bundleID;
- (id)resID;
- (id)scriptID;
- (BOOL)_isVisible;
- (void)_selectInputSource;
- (void)_selectInputMode:(id)arg1;
- (void)_selectInputModeAtIndex:(long long)arg1;

@end

