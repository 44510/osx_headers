//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSLayoutConstraint, NSTextField;

@interface SPTextFieldSliceView : NSView
{
    NSLayoutConstraint *_aboveConstraint;
    NSTextField *_textField;
}

@property NSTextField *textField; // @synthesize textField=_textField;
@property NSLayoutConstraint *aboveConstraint; // @synthesize aboveConstraint=_aboveConstraint;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

