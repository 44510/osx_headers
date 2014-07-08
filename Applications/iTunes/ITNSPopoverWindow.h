//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ITNSWindow.h"

@interface ITNSPopoverWindow : ITNSWindow
{
    struct weak_ptr<ITView> _parentView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (shared_ptr_d1782ae3)popover;
@property(nonatomic) shared_ptr_8092bbf7 parentView;
- (void)dealloc;

@end

