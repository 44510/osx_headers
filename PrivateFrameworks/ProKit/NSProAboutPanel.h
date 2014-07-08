//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class NSPanel, NSProSplashView, NSProTextField, NSString;

__attribute__((visibility("hidden")))
@interface NSProAboutPanel : NSObject <NSWindowDelegate>
{
    NSPanel *_panel;
    NSProSplashView *_splashView;
    NSProTextField *_licenseText;
    NSProTextField *_serialText;
    NSProTextField *_versionText;
    NSProTextField *_buildVersionText;
    void *_proReserved1;
}

+ (id)sharedAboutPanel;
- (void)toggleAlternateVersion:(id)arg1;
- (void)updateNib;
- (void)unloadNib:(BOOL)arg1;
- (void)windowWillClose:(id)arg1;
- (void)loadNib;
- (id)_nibNameForLook:(struct _themelook *)arg1;
- (void)orderOutSplash:(id)arg1;
- (void)orderFrontSplash:(id)arg1;
- (void)showAboutPanel:(id)arg1;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

