//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity
{
    int _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (void).cxx_destruct;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (BOOL)_requiresHostAndOwner;
- (unsigned long long)isMatchForSource:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 type:(unsigned long long)arg2;

@end

