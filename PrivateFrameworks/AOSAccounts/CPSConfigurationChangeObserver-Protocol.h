//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPSConfigurationClient, NSArray;

@protocol CPSConfigurationChangeObserver <NSObject>

@optional
- (void)configurationClientDidChangeLoggedInAccountStatus:(CPSConfigurationClient *)arg1;
- (void)configurationClient:(CPSConfigurationClient *)arg1 didChangePreferencesForServiceIdentifiers:(NSArray *)arg2;
- (void)configurationClient:(CPSConfigurationClient *)arg1 didChangeStateForServiceIdentifiers:(NSArray *)arg2;
- (void)configurationClientDidStart:(CPSConfigurationClient *)arg1;
@end

