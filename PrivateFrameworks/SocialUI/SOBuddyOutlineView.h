//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

@interface SOBuddyOutlineView : NSOutlineView
{
    unsigned int _delegateRespondsToMouseUp:1;
    unsigned int _delegateRespondsToMouseDown:1;
    id <SOBuddyOutlineViewMouseDelegate> _mouseDelegate;
}

@property(nonatomic) __weak id <SOBuddyOutlineViewMouseDelegate> mouseDelegate; // @synthesize mouseDelegate=_mouseDelegate;
- (void).cxx_destruct;
- (void)reloadData;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (void)mouseDown:(id)arg1;

@end

