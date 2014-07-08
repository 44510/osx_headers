//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class NSMutableAttributedString;

@interface RolloverActionTextView : NSTextView
{
    NSMutableAttributedString *normalAttrString;
    NSMutableAttributedString *rolloverAttrString;
    struct CGRect rolloverBounds;
    long long eventNumberForMouseDown;
    id target;
    SEL action;
}

- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setString:(id)arg1 activeRange:(struct _NSRange)arg2 target:(id)arg3 action:(SEL)arg4;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)dealloc;

@end

