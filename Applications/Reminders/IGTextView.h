//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "InspectorGadget.h"

#import "NSTextViewDelegate.h"

@class NSString, NSTextView;

@interface IGTextView : InspectorGadget <NSTextViewDelegate>
{
    double _textViewMinHeight;
    double _textViewMaxHeight;
    double _oldHeight;
}

+ (long long)numberOfVisibleRows;
@property double oldHeight; // @synthesize oldHeight=_oldHeight;
@property double textViewMaxHeight; // @synthesize textViewMaxHeight=_textViewMaxHeight;
@property double textViewMinHeight; // @synthesize textViewMinHeight=_textViewMinHeight;
- (id)textView;
- (void)syncFields;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)sizeToFit;
- (id)initWithLabel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NSTextView *view;

@end

