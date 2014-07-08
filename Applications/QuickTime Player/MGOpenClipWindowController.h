//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class AVAssetCollection, IKImageBrowserView, NSArray;

@interface MGOpenClipWindowController : NSWindowController
{
    AVAssetCollection *_assetCollection;
    IKImageBrowserView *_imageBrowserView;
    NSArray *_assetItems;
}

@property(retain) NSArray *assetItems; // @synthesize assetItems=_assetItems;
@property __weak IKImageBrowserView *imageBrowserView; // @synthesize imageBrowserView=_imageBrowserView;
- (void).cxx_destruct;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (void)cancel:(id)arg1;
- (void)open:(id)arg1;
@property(readonly) NSArray *selectedAssets;
- (void)close;
- (void)windowDidLoad;
@property(retain) AVAssetCollection *assetCollection;

@end

