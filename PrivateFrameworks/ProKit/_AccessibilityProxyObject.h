//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _AccessibilityProxyObject : NSObject
{
    unsigned long long _identifier;
    id _parent;
    NSString *_role;
    id _delegate;
}

@property(readonly, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *role; // @synthesize role=_role;
@property(readonly, nonatomic) id parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
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
- (id)initWithIdentifier:(unsigned long long)arg1 parent:(id)arg2 role:(id)arg3 delegate:(id)arg4;

@end

