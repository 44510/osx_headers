//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPInfoView.h"

@class NSButton, NSImageView;

@interface SPInfoDiagnosticView : SPInfoView
{
    NSImageView *_osIcon;
    NSImageView *_macIcon;
    NSButton *_supportButton;
    NSButton *_manualButton;
    NSButton *_specsButton;
    NSButton *_osSupportButton;
    NSButton *_osHelpButton;
    NSButton *_importantInfoButton;
}

+ (id)createFromNib;
- (void)importantInfoPressed:(id)arg1;
- (void)osHelpPressed:(id)arg1;
- (void)osSupportPressed:(id)arg1;
- (void)specsPressed:(id)arg1;
- (void)manualPressed:(id)arg1;
- (void)supportPressed:(id)arg1;

@end

