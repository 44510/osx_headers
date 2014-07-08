//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@interface FirstMouseButton : NSButton
{
    BOOL mAcceptsFirstMouse;
    BOOL mWasEnabled;
    BOOL mWindowIsKey;
}

- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)_windowResignedKey:(id)arg1;
- (void)_windowBecameKey:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setAcceptsFirstMouse:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

