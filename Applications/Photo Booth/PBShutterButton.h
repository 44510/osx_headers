//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSImage;

@interface PBShutterButton : NSButton
{
    NSImage *_enabledImage;
    NSImage *_pressedImage;
    NSImage *_disabledImage;
    BOOL _fullScreenMode;
    BOOL _currentImageUsesRedColor;
    int _currentImageType;
}

@property(nonatomic) BOOL fullScreenMode; // @synthesize fullScreenMode=_fullScreenMode;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)setImageForType:(int)arg1 useRedColor:(BOOL)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateButtonImages;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

