//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class MFMailAccount, NSArray, NSString;

@protocol MFUIMailbox <NSCopying, NSObject>
@property(readonly) BOOL isVisibleFlaggedMailbox;
@property int type;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (BOOL)isPlaceholder;
- (NSString *)accountURLString;
- (MFMailAccount *)account;
- (BOOL)isSmartMailbox;
- (BOOL)isStore;
- (NSArray *)children;
- (BOOL)hasChildren;
- (unsigned long long)numberOfChildren;
- (unsigned long long)displayCount;
- (BOOL)isContainer;
- (NSString *)extendedDisplayName;
- (NSString *)displayName;
- (NSString *)persistentIdentifier;
@end

