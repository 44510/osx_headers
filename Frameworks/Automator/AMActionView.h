//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextFieldDelegate.h"

@class AMAction, AMActionIconView, AMActionResizeView, AMActionTextField, AMDescriptionViewController, AMResultsViewController, AMResultsViewOverlayView, AMShowWhenRunController, AMWorkflowView, NSArray, NSBezierPath, NSBox, NSButton, NSImageView, NSMenu, NSMutableArray, NSProgressIndicator, NSString, NSTextField, NSTextView;

@interface AMActionView : NSView <NSTextFieldDelegate>
{
    AMActionTextField *_titleField;
    NSButton *_closeButton;
    NSButton *_collapseButton;
    AMActionIconView *_iconView;
    NSMenu *_optionsMenu;
    NSView *_headerView;
    NSView *_footerView;
    NSView *_commentsView;
    NSView *_descriptionView;
    NSTextView *_commentsTextView;
    NSTextField *_statusTextField;
    NSProgressIndicator *_progressIndicator;
    NSImageView *_statusImageView;
    NSBox *_descriptionViewContainer;
    NSButton *_descriptionButton;
    NSButton *_resultsButton;
    NSButton *_bindingsButton;
    NSButton *_commentsButton;
    NSButton *_showWhenRunButton;
    AMAction *_action;
    AMWorkflowView *_workflowView;
    NSBezierPath *_outlinePath;
    NSBezierPath *_headerPath;
    NSBezierPath *_footerPath;
    AMActionResizeView *_resizeView;
    AMResultsViewController *_resultsViewController;
    AMShowWhenRunController *_showWhenRunController;
    NSArray *_showWhenRunItems;
    NSMutableArray *_showWhenRunOverlayViews;
    AMResultsViewOverlayView *_resultsOverlayView;
    AMDescriptionViewController *_descriptionViewController;
    struct CGSize _minimumSize;
    unsigned long long _defaultAutoresizingMask;
    unsigned long long _displayState;
    unsigned long long _visibleFooterViewType;
    double _footerHeight;
    BOOL _isSelected;
    BOOL _isCollapsed;
    BOOL _isEditingShowWhenRunItems;
    BOOL _ignoreSubviewResizing;
    BOOL _clickIsInHeader;
    struct CGLayer *_drawCachingLayer;
}

+ (id)generateFooterPathWithBounds:(struct CGRect)arg1 showingOutputConnection:(BOOL)arg2 footerHeight:(double)arg3;
+ (id)generateHeaderPathWithBounds:(struct CGRect)arg1 showingInputConnection:(BOOL)arg2;
+ (id)generateOutlinePathWithBounds:(struct CGRect)arg1 showingInputConnection:(BOOL)arg2 showingOutputConnection:(BOOL)arg3;
+ (void)drawInContext:(id)arg1 bounds:(struct CGRect)arg2 outlinePath:(id)arg3 headerPath:(id)arg4 footerPath:(id)arg5 footerHeight:(double)arg6 collapsed:(BOOL)arg7 selected:(BOOL)arg8 disabled:(BOOL)arg9 placeholder:(BOOL)arg10;
+ (double)baseActionViewHeight;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(getter=isCollapsed, setter=setCollapsed:) BOOL isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(retain) NSArray *showWhenRunItems; // @synthesize showWhenRunItems=_showWhenRunItems;
@property unsigned long long displayState; // @synthesize displayState=_displayState;
@property(retain) AMActionResizeView *resizeView; // @synthesize resizeView=_resizeView;
@property(getter=isEditingShowWhenRunItems, setter=setEditingShowWhenRunItems:) BOOL isEditingShowWhenRunItems; // @synthesize isEditingShowWhenRunItems=_isEditingShowWhenRunItems;
@property(getter=isSelected, setter=setSelected:) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property AMWorkflowView *workflowView; // @synthesize workflowView=_workflowView;
@property(retain) AMAction *action; // @synthesize action=_action;
- (void)updateProgressIndicator;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)parameterValueWithName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (void)toggleDescription:(id)arg1;
- (void)toggleComments:(id)arg1;
- (void)toggleResults:(id)arg1;
- (void)hideResults:(id)arg1;
- (void)showResults:(id)arg1;
- (void)_finishSetupResultsView;
- (void)showInLibrary:(id)arg1;
- (void)showInFinder:(id)arg1;
- (void)toggleCollapsed:(id)arg1;
- (void)toggleDisabled:(id)arg1;
- (void)toggleInputIgnored:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)endRenaming;
- (void)rename:(id)arg1;
- (void)hideFooterViews;
- (void)displayFooterView:(id)arg1;
@property(readonly) BOOL isShowingResultsView;
- (double)defaultHeightForFooterView:(id)arg1;
@property(readonly, retain) NSView *currentFooterView;
- (void)endEditingShowWhenRunItems;
- (void)beginEditingShowWhenRunItems;
- (void)toggleShowWhenRun:(id)arg1;
- (BOOL)lowerHalfContainsPoint:(struct CGPoint)arg1;
- (BOOL)upperHalfContainsPoint:(struct CGPoint)arg1;
- (BOOL)footerContainsPoint:(struct CGPoint)arg1;
- (BOOL)headerContainsPoint:(struct CGPoint)arg1;
- (BOOL)isAbovePoint:(struct CGPoint)arg1;
- (BOOL)isBelowPoint:(struct CGPoint)arg1;
- (struct CGRect)lowerHalfRect;
- (struct CGRect)upperHalfRect;
- (BOOL)validateMenuItem:(id)arg1;
- (void)actionViewFrameChanged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)dragResizeWithEvent:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
@property(readonly) double minimumViewHeight;
- (void)sizeToFit;
- (id)multiSelectionDragImageWithCount:(unsigned long long)arg1 offset:(struct CGPoint *)arg2;
- (id)imageWithAlpha:(double)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
@property(readonly, retain) NSBezierPath *footerPath;
@property(readonly, retain) NSBezierPath *headerPath;
@property(readonly, retain) NSBezierPath *outlinePath;
- (void)drawRect:(struct CGRect)arg1;
- (void)_generateDrawCachingLayerIfNotPresent;
- (void)_regenerateDrawCachingLayerIfPresent;
- (struct CGLayer *)_newDrawCachingLayer;
- (void)refresh;
- (void)_showOrHideResizeView;
- (void)setResultsOverlayViewString;
- (void)_removeResultsOverlayView;
- (void)_addResultsOverlayView;
@property(retain) NSString *title;
@property(readonly) BOOL shouldShowOutputConnection;
@property(readonly) BOOL shouldShowInputConnection;
@property(readonly) double minimumWidth;
- (struct CGRect)outlineFrame;
- (id)showWhenRunOverlayViews;
- (id)showWhenRunController;
- (id)resultsViewController;
@property(getter=isEnabled, setter=setEnabled:) BOOL isEnabled;
@property(readonly) BOOL isRunning;
- (BOOL)acceptsFirstResponder;
- (void)updateParameters;
- (void)dealloc;
- (void)_didClose;
- (void)willRemoveSubview:(id)arg1;
- (void)_removeFromMaps_ask;
- (void)_removeViewsFromMaps:(id)arg1;
- (id)propertyList;
- (void)_setup;
- (void)awakeFromNib;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

