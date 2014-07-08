//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LoadRemoteContentBannerViewController.h"

@class NSTextField;

@interface JunkMailBannerViewController : LoadRemoteContentBannerViewController
{
    NSTextField *_messageField;
}

@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
- (void).cxx_destruct;
- (void)markNotJunk:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)shouldDisplayToLoadRemoteContent;
- (CDStruct_3c058996)iconAlignmentRectInsets;
- (id)backgroundColor;
- (void)dealloc;
- (id)nibName;

@end

