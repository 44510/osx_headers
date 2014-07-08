//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTextView.h"

@class NSMutableArray, NSTextView;

@interface IGExplanationField : IGTextView
{
    BOOL _shown;
    long long _proximity;
    NSMutableArray *_requestingGadgets;
}

@property(retain) NSMutableArray *requestingGadgets; // @synthesize requestingGadgets=_requestingGadgets;
@property long long proximity; // @synthesize proximity=_proximity;
@property BOOL shown; // @synthesize shown=_shown;
- (void).cxx_destruct;
- (void)inspectorDidClose;
- (void)requestShow:(BOOL)arg1 fromGadget:(id)arg2;
- (void)updateFromReminder;
- (BOOL)isVisible;
- (id)init;

// Remaining properties
@property(retain) NSTextView *view;

@end

