//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/CFPrefsPlistSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsManagedSource : CFPrefsPlistSource
{
}

+ (void)withSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 perform:(CDUnknownBlockType)arg3;
- (void)alreadylocked_setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void)sendMessageSettingValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (BOOL)managed;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(BOOL)arg3;

@end

