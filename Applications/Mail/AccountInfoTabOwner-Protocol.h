//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountInfo, NSView;

@protocol AccountInfoTabOwner <NSObject>
- (NSView *)view;
- (void)accountInfoWillShowView:(AccountInfo *)arg1;
- (void)accountInfoWillHideView:(AccountInfo *)arg1;
@end

