//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "ABNameView.h"

@class ABCardView, ABCardViewStyleProvider, ABNameView, NSArray, NSButton, NSString;

__attribute__((visibility("hidden")))
@interface ABNameFrameView : NSView <ABNameView>
{
    ABNameView *mPersonLayoutView;
    ABCardView *mCardView;
    ABNameView *mCurrentView;
    ABCardViewStyleProvider *_styleProvider;
    NSArray *_constraints;
}

@property(retain) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
- (void)reloadDataForKey:(id)arg1;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)updateNameView;
- (id)_ancestralPersonView;
- (id)_delegatedNameView;
- (id)_effectiveNameView;
- (void)commitEditing;
- (id)updateKeyViewLoop;
- (void)updateViews;
- (void)queueFullLayout;
- (void)updateCurrentView;
- (void)updateConstraints;
- (void)highlightSearchTerms:(id)arg1;
- (void)focusKey:(id)arg1;
- (BOOL)accessibilityIsIgnored;
@property(readonly) NSButton *companyCheckbox;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

