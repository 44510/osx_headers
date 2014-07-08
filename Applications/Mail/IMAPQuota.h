//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RemoteStoreQuota.h"

@class NSPopUpButton, NSTextField, NSView, QuotaBar;

@interface IMAPQuota : RemoteStoreQuota
{
    NSPopUpButton *_quotaPopup;
    NSTextField *_quotaPopupLabel;
    NSView *_quotaContainerView;
    QuotaBar *_quotaBar;
    NSTextField *_capacityField;
    NSTextField *_statusField;
    double _spaceUnderQuotaPopup;
}

@property(readonly, nonatomic) double spaceUnderQuotaPopup; // @synthesize spaceUnderQuotaPopup=_spaceUnderQuotaPopup;
@property(nonatomic) __weak NSTextField *statusField; // @synthesize statusField=_statusField;
@property(nonatomic) __weak NSTextField *capacityField; // @synthesize capacityField=_capacityField;
@property(nonatomic) __weak QuotaBar *quotaBar; // @synthesize quotaBar=_quotaBar;
@property(nonatomic) __weak NSView *quotaContainerView; // @synthesize quotaContainerView=_quotaContainerView;
@property(nonatomic) __weak NSTextField *quotaPopupLabel; // @synthesize quotaPopupLabel=_quotaPopupLabel;
@property(nonatomic) __weak NSPopUpButton *quotaPopup; // @synthesize quotaPopup=_quotaPopup;
- (void).cxx_destruct;
- (id)_stringForSize:(unsigned long long)arg1 andCount:(long long)arg2 isCapacity:(BOOL)arg3;
- (void)_updateUIForQuotaName:(id)arg1 updateTable:(BOOL)arg2;
- (void)engineUpdated:(id)arg1;
- (void)engineDidFinish;
- (void)_updateQuotaPopupWithQuotaNames:(id)arg1;
- (void)_engineStatusChanged:(id)arg1;
- (void)_updateStatusField;
- (void)_updateQuotaBarWithSize:(unsigned long long)arg1 maxSize:(unsigned long long)arg2 count:(unsigned long long)arg3 maxCount:(unsigned long long)arg4;
- (id)_selectedQuotaName;
- (void)quotaPopupChanged:(id)arg1;
- (BOOL)tableShouldIncludeMailbox:(id)arg1;
- (Class)engineClass;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithAccount:(id)arg1;

@end

