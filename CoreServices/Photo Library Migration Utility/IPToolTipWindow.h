//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@interface IPToolTipWindow : NSWindow
{
}

+ (id)showWithContent:(id)arg1 entry:(struct IPToolTipInfo)arg2 ownerView:(id)arg3 viewClass:(Class)arg4 forPoint:(struct CGPoint)arg5;
+ (struct CGRect)safeRect:(struct CGRect)arg1;
- (BOOL)inWindow;
- (void)setHideOnExit:(BOOL)arg1;
- (BOOL)hideOnExit;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)dealloc;
- (void)updateWithContent:(id)arg1 entry:(struct IPToolTipInfo)arg2 ownerView:(id)arg3 viewClass:(Class)arg4 forPoint:(struct CGPoint)arg5;
- (id)initWithContentRect:(struct CGRect)arg1;

@end

