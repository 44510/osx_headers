//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SidebarTopBarView;

@protocol SidebarTopBarViewDelegate <NSObject>
@property(readonly, nonatomic) id currentSidebarModeIdentifier;
- (void)sidebarTopBarView:(SidebarTopBarView *)arg1 selectedTabIdentifierDidChange:(id)arg2;
@end

