//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPInspector.h"

@class CPViewController, EIntegrationGraphInterpretor, EIntegrationView, EIntegratorMethodSelectionView, GGraph, GView, NSArray, NSView;

@interface EIntegrator : CPInspector
{
    EIntegrationGraphInterpretor *mCurveInterpretor;
    EIntegrationGraphInterpretor *mSurfaceInterpretor;
    EIntegratorMethodSelectionView *mMethodSelectionView;
    NSView *mCloseView;
    NSArray *mInterpretors;
    CPViewController *mViewController;
    GView *mDataView;
    NSView *mView;
    GGraph *mGraph;
    EIntegrationGraphInterpretor *mInterpretor;
    EIntegrationView *mIntegrationView;
}

+ (id)sharedInspector;
- (void)calculate:(id)arg1;
- (void)calculateWithAction:(id)arg1;
- (void)clearResult;
- (void)kindDidChange:(id)arg1;
- (id)view;
- (id)dataView;
- (id)otherGraph;
- (id)graph;
- (void)stopIntegration;
- (void)startIntegrationWithViewController:(id)arg1;
- (BOOL)canStartIntegrationWithViewController:(id)arg1;
- (BOOL)setGraphs:(id)arg1;
- (BOOL)setGraph:(id)arg1;
- (void)updateViews;
- (BOOL)handleMouseDown:(id)arg1 inView:(id)arg2 controller:(id)arg3;
- (BOOL)windowIsResizable;
- (BOOL)removeSubviewsBeforeResizingWindow;
- (BOOL)resizeSubviewWidths;
- (BOOL)sortByViews;
- (void)dealloc;
- (void)awakeFromNib;
- (id)windowNibName;

@end
