//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PrettyPinyin : NSObject
{
    NSDictionary *finalToneDictionary;
}

- (id)toneStringFromToneNumberString:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_toneStringWithDictionary:(id)arg1;
- (id)_dictionaryFromPinyinString:(id)arg1;
- (unsigned long long)_vowelPositionForString:(id)arg1;

@end

