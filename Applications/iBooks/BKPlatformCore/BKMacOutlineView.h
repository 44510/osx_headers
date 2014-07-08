//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

@interface BKMacOutlineView : NSOutlineView
{
    BOOL _overrideShouldAnimateExpandCollapse;
    struct CGPoint _disclosureTriangleOffset;
}

@property(nonatomic) BOOL overrideShouldAnimateExpandCollapse; // @synthesize overrideShouldAnimateExpandCollapse=_overrideShouldAnimateExpandCollapse;
@property(nonatomic) struct CGPoint disclosureTriangleOffset; // @synthesize disclosureTriangleOffset=_disclosureTriangleOffset;
- (id)menuForEvent:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (void)copy:(id)arg1;
- (void)delete:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (BOOL)_shouldAnimateExpandCollapse;
- (void)stopOverridingShouldAnimateExpandCollapse;
- (void)startOverridingShouldAnimateExpandCollapse;
- (void)updateDisclosureButtonAtRow:(long long)arg1;

@end
