//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionaryController, NSString;

@interface _NSControllerKeyValuePair : NSObject
{
    NSDictionaryController *_dictionaryController;
    NSString *_localizedKey;
    NSString *_key;
    id _value;
    struct __controllerKeyValuePairFlags {
        unsigned int _isExplicitlyIncluded:1;
        unsigned int _reservedControllerKeyValuePair:31;
    } _controllerKeyValuePairFlags;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitlyIncluded;
- (void)_markAsExplicitlyIncluded:(BOOL)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)_setValueWithoutNotification:(id)arg1;
- (BOOL)validateValue:(id *)arg1 error:(id *)arg2;
- (id)key;
- (void)setKey:(id)arg1;
- (void)_setKeyWithoutLocalizedKey:(id)arg1;
- (BOOL)validateKey:(id *)arg1 error:(id *)arg2;
- (id)localizedKey;
- (void)setLocalizedKey:(id)arg1;
- (void)_setLocalizedKeyWithoutKey:(id)arg1;
- (BOOL)validateLocalizedKey:(id *)arg1 error:(id *)arg2;
- (BOOL)_validateAnyKey:(id)arg1 error:(id *)arg2;
- (void)_setWithoutNotificationLocalizedKey:(id)arg1 key:(id)arg2;
- (id)dictionaryController;
- (void)setDictionaryController:(id)arg1;
- (void)dealloc;
- (id)init;

@end

