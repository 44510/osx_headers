//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPInfoView.h"

@class NSButton, NSImageView, NSLayoutConstraint, NSString, NSTextField, NSView;

@interface SPInfoMemoryView : SPInfoView
{
    NSTextField *_memInfoText;
    NSTextField *_memTotalText;
    NSTextField *_slotsUsedText;
    NSView *_slotsView;
    NSButton *_memHelpButton;
    NSView *_errorView;
    NSImageView *_cautionView;
    NSLayoutConstraint *_slotsViewHeightConstraint;
    NSString *_memInfoFormat;
    NSString *_memTotalFormat;
    NSString *_slotsUsedFormat;
}

+ (id)createFromNib;
- (void)memHelpButtonPressed:(id)arg1;
- (void)loadData;

@end

