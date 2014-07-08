//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSTextField;

@interface IAInstallerWindow : NSWindow
{
    BOOL _enableClose;
    BOOL _enableMinimize;
    BOOL _enableZoom;
    NSTextField *_distributorTextField;
}

- (void)setShowsDistributorName:(id)arg1;
- (struct CGRect)_customTitleFrame;
- (void)_updateDistributorFrame;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)zoomEnabled;
- (void)setZoomEnabled:(BOOL)arg1;
- (BOOL)minimizedEnabled;
- (void)setMinimizeEnabled:(BOOL)arg1;
- (BOOL)closeEnabled;
- (void)setCloseEnabled:(BOOL)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

