//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "InspectorGadget.h"

#import "NSTextFieldDelegate.h"

@class NSString, NSTextField;

@interface IGTextField : InspectorGadget <NSTextFieldDelegate>
{
    double _textFieldMinHeight;
    double _textFieldMaxHeight;
}

+ (long long)numberOfVisibleRows;
@property double textFieldMaxHeight; // @synthesize textFieldMaxHeight=_textFieldMaxHeight;
@property double textFieldMinHeight; // @synthesize textFieldMinHeight=_textFieldMinHeight;
- (id)textField;
- (void)syncFields;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)sizeToFit;
- (id)initWithLabel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NSTextField *view;

@end

