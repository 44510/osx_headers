//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHAction.h>

@class ACSHResourceCollection, NSString;

@interface ACSHActionAppleScript : ACSHAction
{
    NSString *_scriptUUID;
    ACSHResourceCollection *_resourceCollection;
}

+ (id)actionWithAppleScriptUUID:(id)arg1;
@property(retain, nonatomic) ACSHResourceCollection *resourceCollection; // @synthesize resourceCollection=_resourceCollection;
@property(retain, nonatomic) NSString *scriptUUID; // @synthesize scriptUUID=_scriptUUID;
- (void)perform;
- (id)paramDictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

