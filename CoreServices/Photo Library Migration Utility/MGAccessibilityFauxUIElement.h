//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MGAccessibilityFauxUIElementParent.h"

@interface MGAccessibilityFauxUIElement : NSObject <MGAccessibilityFauxUIElementParent>
{
    id _representedObject;
    id <MGAccessibilityFauxUIElementParent> _parent;
}

+ (id)elementWithRepresentedObject:(id)arg1 parent:(id)arg2;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void)fauxUIElement:(id)arg1 setValue:(id)arg2 forAdditionalAttribute:(id)arg3;
- (BOOL)fauxUIElement:(id)arg1 isAdditionalAttributeSettable:(id)arg2;
- (id)fauxUIElement:(id)arg1 additionalAttributeValue:(id)arg2;
- (id)fauxUIElementAdditionalAccessiblityAttributeNames:(id)arg1;
- (id)fauxUIElementChildren:(id)arg1;
- (BOOL)fauxUIElementHasChildren:(id)arg1;
- (BOOL)fauxUIElementIsEnabled:(id)arg1;
- (BOOL)fauxUIElementIsFocused:(id)arg1;
- (void)fauxUIElement:(id)arg1 performAction:(id)arg2;
- (id)fauxUIElement:(id)arg1 descriptionForAction:(id)arg2;
- (id)fauxUIElementActionNames:(id)arg1;
- (id)fauxUIElementDescription:(id)arg1;
- (id)fauxUIElementRole:(id)arg1;
- (struct CGSize)fauxUIElementSize:(id)arg1;
- (struct CGPoint)fauxUIElementPosition:(id)arg1;
- (void)fauxUIElement:(id)arg1 setFocus:(id)arg2;
- (BOOL)isFauxUIElementFocusable:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1 parent:(id)arg2;

@end

