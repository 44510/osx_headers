//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface MagnifierView : NSView
{
    unsigned int _connectionID;
    id _delegate;
    struct CGPoint _mouseLocation;
}

@property id delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

