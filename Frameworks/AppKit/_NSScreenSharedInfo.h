//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSScreenSharedInfo : NSObject
{
    BOOL _dockIsHidden;
    struct CGRect _dockRect;
    int _dockOrientation;
    double _menuBarHeight;
}

@property(readonly) double menuBarHeight; // @synthesize menuBarHeight=_menuBarHeight;
@property(readonly) int dockOrientation; // @synthesize dockOrientation=_dockOrientation;
- (void)_resetMenuBarHeight;
- (void)_resetDockOrientationWithDockScreenLayoutRect:(struct CGRect)arg1;
@property(readonly) struct CGRect dockRect; // @dynamic dockRect;
- (void)_resetDockRect;
- (id)init;

@end

