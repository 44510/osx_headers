//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@interface TViewController : NSViewController
{
    _Bool _callingLoadView;
    _Bool _loadingFromNib;
    _Bool _isViewLoaded;
}

@property(readonly) _Bool isViewLoaded; // @synthesize isViewLoaded=_isViewLoaded;
- (_Bool)applyExtraKeyboardShortcuts:(id)arg1;
- (id)viewNoLoad;
- (void)viewLoaded;
- (void)setView:(id)arg1;
- (void)loadView;
- (id)nibBundle;
- (void)awakeFromNib;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1;

@end

