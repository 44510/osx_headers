//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPViewDialog.h"

@class NSArray, NSMutableDictionary;

@interface CPView3DDialog : CPViewDialog
{
    id mBackgroundTopColor;
    id mBackgroundBottomColor;
    id mLightingPopup;
    id mLightingTableView;
    id mAmbientColor;
    id mSpecularColor;
    id mShininess;
    id mLineSmooth;
    NSMutableDictionary *mSettings;
    NSMutableDictionary *mCopyOfSettings;
    NSArray *mPredefinedLightings;
}

- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)lights;
- (void)dialogDidClose;
- (void)dialogDidCancel;
- (void)dialogDidOK;
- (BOOL)dialogShouldOK;
- (void)update:(id)arg1;
- (void)lightingDidChange;
- (void)dialogWillShow;
- (void)updateLightingGUI;
- (void)udpateLightingPopUp;
- (void)dealloc;
- (void)awakeFromNib;

@end

