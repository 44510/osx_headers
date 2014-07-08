//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSDictionary, NSString;

@interface EKUITextButton : NSButton
{
    NSDictionary *_textAttributes;
    NSString *_text;
}

@property(retain) NSString *text; // @synthesize text=_text;
@property(retain) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)setTitle:(id)arg1 withAttributes:(id)arg2;
- (BOOL)canBecomeKeyView;
- (id)init;

@end

