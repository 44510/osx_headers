//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "RKTerminationDelegateProtocol.h"

@class ILMediaBrowserView;

@interface TimeMachineBrowser : NSWindowController <RKTerminationDelegateProtocol>
{
    ILMediaBrowserView *mMediaBrowserView;
}

@property(readonly) ILMediaBrowserView *mediaBrowserView; // @synthesize mediaBrowserView=mMediaBrowserView;
- (id)contextMenuForMediaGroup:(id)arg1 defaultMenu:(id)arg2;
- (id)contextMenuForMediaObject:(id)arg1 defaultMenu:(id)arg2;
- (id)defaultLoadingMessage;
- (BOOL)mediaBrowserView:(id)arg1 shouldDisplayMediaGroup:(id)arg2;
- (void)mediaBrowserViewSelectionDidChange:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (id)windowNibName;
- (unsigned long long)applicationShouldTerminate;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

