//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSBinderPlugin.h"

@class NSString;

@interface _NSBinderPlugin : NSObject <_NSBinderPlugin>
{
    id _binder;
    struct __binderPluginFlags {
        unsigned int _isTableColumnPlugin:1;
        unsigned int _isOutlineColumnPlugin:1;
        unsigned int _isCellPlugin:1;
        unsigned int _reservedBinderPlugin:29;
    } _binderPluginFlags;
}

+ (id)_deprecatedBindings;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
+ (BOOL)isUsableWithObject:(id)arg1;
- (BOOL)observeKeyPathForBindingInfo:(id)arg1 registerOrUnregister:(BOOL)arg2 object:(id)arg3;
- (BOOL)handleObservingRefresh:(id)arg1;
- (void)connectionWasBroken:(id)arg1;
- (void)connectionWasEstablished:(id)arg1;
- (BOOL)acceptsMarker:(id)arg1 binding:(id)arg2 overrideWithPlaceholderIfDefined:(char *)arg3;
- (id)objectMechanismsRequired;
- (BOOL)needsAction;
- (BOOL)isEditingAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (BOOL)isEditingAtIndexPath:(id)arg1 withObject:(id)arg2;
- (BOOL)isEditingWithObject:(id)arg1;
- (id)editorWithObject:(id)arg1;
- (BOOL)isInvalidationCapableObject:(id)arg1 withSelector:(SEL)arg2;
- (BOOL)shouldUseInvalidationForObject:(id)arg1;
- (id)indexPathForOutlineView:(id)arg1 row:(long long)arg2;
- (id)viewForObject:(id)arg1;
- (id)cellOrControlForObject:(id)arg1;
- (Class)defaultPlaceholderLookupClassForBinding:(id)arg1 object:(id)arg2;
- (id)initWithBinder:(id)arg1 object:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

