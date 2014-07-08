//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

#import "NSAnimationDelegate.h"

@class NSString;

@interface NotesTableRowView : NSTableRowView <NSAnimationDelegate>
{
    long long _rowNumber;
}

@property(nonatomic) long long rowNumber; // @synthesize rowNumber=_rowNumber;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)setNextRowSelected:(BOOL)arg1;
- (void)setEmphasized:(BOOL)arg1;
- (id)_selectionHighlightColor:(BOOL)arg1;
- (void)_notesTableRowViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
