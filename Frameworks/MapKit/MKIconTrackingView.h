//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSMutableArray, NSMutableDictionary;

@interface MKIconTrackingView : NSView
{
    NSMutableArray *_textFields;
    NSMutableDictionary *_textFieldToMouseInHanlder;
    NSMutableDictionary *_textFieldToMouseOutHanlder;
}

- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateConstraints;
- (void)addTrackingRowAroundTextField:(id)arg1 mouseInHandler:(CDUnknownBlockType)arg2 mouseOutHandler:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
