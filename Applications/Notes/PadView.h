//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSViewController;

@interface PadView : NSView
{
    NSViewController *_viewController;
    unsigned long long _textFaderEdge;
}

+ (id)enclosingPadViewForView:(id)arg1;
@property(nonatomic) unsigned long long textFaderEdge; // @synthesize textFaderEdge=_textFaderEdge;
@property(nonatomic) __weak NSViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)_padViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

