//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionViewItem.h"

@class MGTableSelectionBox, NSButton, NSProgressIndicator, NSTextField;

@interface MGJobProgressCollectionViewItem : NSCollectionViewItem
{
    MGTableSelectionBox *_selectionBox;
    NSTextField *_titleTextField;
    NSTextField *_statusTextField;
    NSButton *_cancelButton;
    NSButton *_revealButton;
    NSProgressIndicator *_progressIndicator;
    double _initialStatusTextFieldFrameMinY;
    double _initialStatusTextFieldFrameHeight;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)updateStatusFieldPosition;

@end

