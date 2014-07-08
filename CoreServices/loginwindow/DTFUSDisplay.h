//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSProgressIndicator, NSWindow;

@interface DTFUSDisplay : NSObject
{
    unsigned int _display;
    NSWindow *_window;
    NSProgressIndicator *_indicator;
}

@property(readonly) NSProgressIndicator *indicator; // @synthesize indicator=_indicator;
@property(readonly) NSWindow *window; // @synthesize window=_window;
- (void)dealloc;
- (void)abortTransition;
- (void)transition;
- (void)appear;
- (id)initWithScreen:(id)arg1;

@end

