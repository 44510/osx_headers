//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IAListElement, NSMutableArray;

@interface IAListView : NSView
{
    NSMutableArray *_elements;
    IAListElement *_currentElement;
}

- (void)setState:(int)arg1 ofRepresentedObject:(id)arg2;
- (void)addElementWithTitle:(id)arg1 andRepresentedObject:(id)arg2;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)_elementForRepresentedObject:(id)arg1;
- (void)_resizeMatrix;

@end

