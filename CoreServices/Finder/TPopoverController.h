//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPopoverDelegate.h"

@class NSString, TBaseBrowserViewController, TPopover;

@interface TPopoverController : NSObject <NSPopoverDelegate>
{
    struct TNSRef<TViewController *> _contentViewController;
    struct TNSRef<TLayoutBinder *> _contentViewLayoutBinder;
    struct TNSRef<TPopover *> _popover;
    struct TFENode _popoverTargetNode;
    long long _behavior;
    struct TNSRef<NSMutableArray *> _popoverSubviewDatas;
    TBaseBrowserViewController *_browserViewController;
    _Bool _releasedWhenClosed;
}

@property(nonatomic) _Bool releasedWhenClosed; // @synthesize releasedWhenClosed=_releasedWhenClosed;
@property(readonly, nonatomic) struct TFENode targetNode; // @synthesize targetNode=_popoverTargetNode;
@property(nonatomic) TBaseBrowserViewController *browserViewController; // @synthesize browserViewController=_browserViewController;
@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)browserViewWillMoveToWindow:(id)arg1;
- (void)aboutToTearDownPopover;
- (void)popoverWillClose:(id)arg1;
- (void)closePopover;
- (void)updatePopoverPosition;
- (void)showPopoverRelativeToRect:(struct CGRect)arg1 relativeView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)showPopoverOverNode:(const struct TFENode *)arg1 browserViewController:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)removeSubview:(id)arg1;
- (void)addSubview:(id)arg1;
- (_Bool)useSeparatorsBetweenSubviews;
- (void)setWidth:(double)arg1;
- (void)setPopoverTargetNode:(const struct TFENode *)arg1;
- (const struct TFENode *)popoverTargetNode;
@property(readonly, nonatomic) _Bool isShown; // @dynamic isShown;
@property(readonly, retain, nonatomic) TPopover *popoverNoLoad; // @dynamic popoverNoLoad;
@property(readonly, retain, nonatomic) TPopover *popover; // @dynamic popover;
- (Class)popoverClass;
- (void)dealloc;
- (id)init;
- (id)initWithWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

