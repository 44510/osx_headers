//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/_AMFinderWindow.h>

@class SBObject, _AMFinderColumnViewOptions, _AMFinderIconViewOptions, _AMFinderListViewOptions;

@interface _AMFinderFinderWindow : _AMFinderWindow
{
}

@property long long sidebarWidth;
@property BOOL statusbarVisible;
@property BOOL toolbarVisible;
@property(readonly, copy) _AMFinderColumnViewOptions *columnViewOptions;
@property(readonly, copy) _AMFinderListViewOptions *listViewOptions;
@property(readonly, copy) _AMFinderIconViewOptions *iconViewOptions;
@property int currentView;
@property(copy) SBObject *target;

@end

