//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSClassDescription.h>

@class NSArray, NSDictionary, NSObject, NSString;

@interface NSScriptClassDescription : NSClassDescription
{
    NSString *_suiteName;
    NSString *_objcClassName;
    unsigned int _appleEventCode;
    NSObject *_superclassNameOrDescription;
    NSArray *_attributeDescriptions;
    NSArray *_toOneRelationshipDescriptions;
    NSArray *_toManyRelationshipDescriptions;
    NSDictionary *_commandMethodSelectorsByName;
    id _moreVars;
}

+ (id)classDescriptionForClass:(Class)arg1;
+ (id)_propertyDescriptionsOfClass:(Class)arg1 fromImplDeclarations:(id)arg2 presoDeclarations:(id)arg3 suiteName:(id)arg4 className:(id)arg5;
+ (id)_sortedAETEElementClassDescriptions:(id)arg1;
+ (id)_sortedAETEPropertyDescriptions:(id)arg1;
- (id)inverseForRelationshipKey:(id)arg1;
- (id)toManyRelationshipKeys;
- (id)toOneRelationshipKeys;
- (id)attributeKeys;
- (id)_keysForPropertyDescriptionKind:(int)arg1;
- (void)_getKeys:(id)arg1 forPropertyDescriptionKind:(int)arg2;
- (BOOL)hasWritablePropertyForKey:(id)arg1;
- (BOOL)hasReadablePropertyForKey:(id)arg1;
- (BOOL)hasOrderedToManyRelationshipForKey:(id)arg1;
- (BOOL)hasPropertyForKey:(id)arg1;
- (BOOL)isLocationRequiredToCreateForKey:(id)arg1;
- (id)_propertyDescriptionsByKey;
@property(readonly, copy) NSString *defaultSubcontainerAttributeKey;
- (id)keyWithAppleEventCode:(unsigned int)arg1;
- (unsigned int)appleEventCodeForKey:(id)arg1;
- (id)classDescriptionForKey:(id)arg1;
- (id)typeForKey:(id)arg1;
- (SEL)selectorForCommand:(id)arg1;
- (BOOL)supportsCommand:(id)arg1;
- (id)_methodNameForCommand:(id)arg1;
- (BOOL)matchesAppleEventCode:(unsigned int)arg1;
@property(readonly) unsigned int appleEventCode;
@property(readonly, retain) NSScriptClassDescription *superclassDescription;
@property(readonly, copy) NSString *implementationClassName;
@property(readonly, copy) NSString *className;
@property(readonly, copy) NSString *suiteName;
- (id)initWithSuiteName:(id)arg1 className:(id)arg2 dictionary:(id)arg3;
- (void)dealloc;
- (id)init;
- (unsigned short)_appendObjectClassDeclarationsToAETEData:(id)arg1 includingParts:(int)arg2;
- (BOOL)_hasHiddenParts;
- (BOOL)isReadOnlyKey:(id)arg1;
- (id)_aeteElementClassDescriptions;
- (id)_aetePropertyDescriptions;
- (id)_firstPresentableName;
- (id)_presentablePluralName;
- (id)_presentableNames;
- (id)_presentableDescription;
- (BOOL)_isHidden;
- (void)_addAccessGroups:(id)arg1;
- (BOOL)_isToManyRelationshipOrderedForKey:(id)arg1;
- (id)_primitiveTypeDescription;
- (id)_contentsTypeDescription;
- (BOOL)_shouldByDefaultInsertAtBeginningOfRelationshipForKey:(id)arg1;
- (void)_forKey:(id)arg1 getType:(id *)arg2 andSuite:(id *)arg3;
- (id)_typeDescriptionForKey:(id)arg1;
- (id)_propertyDescriptionForKey:(id)arg1 checkSubclasses:(BOOL)arg2;
- (id)_propertyDescriptionForKey:(id)arg1 checkSubclasses:(BOOL)arg2 superclasses:(BOOL)arg3;
- (id)_propertyDescriptionForAppleEventCode:(unsigned int)arg1 checkSubclasses:(BOOL)arg2;
- (id)_propertyDescriptionForPresentableName:(id)arg1 checkSubclasses:(BOOL)arg2 superclasses:(BOOL)arg3;
- (id)_propertyDescriptionForAppleEventCode:(unsigned int)arg1 checkSubclasses:(BOOL)arg2 superclasses:(BOOL)arg3;
- (id)_synonymDescriptions;
- (BOOL)_isSynonym;
- (BOOL)_isFromSDEF;
- (id)_commandMethodSelectorsByName;
- (void)_reconcileToExtensionDescription:(id)arg1 suiteRegistry:(id)arg2;
- (void)_reconcileToSuiteRegistry:(id)arg1;
- (id)_initWithClassDescription:(id)arg1 synonymDescription:(id)arg2;
- (id)_initWithProperties:(const CDStruct_f48a3400 *)arg1 defaultSubcontainerAttributeKey:(id)arg2 inverseRelationshipKeys:(id)arg3;
- (id)_initWithProperties:(const CDStruct_f48a3400 *)arg1 primitiveType:(id)arg2;
- (id)_initWithSuiteName:(id)arg1 className:(id)arg2 implDeclaration:(id)arg3 presoDeclaration:(id)arg4;
- (id)description;
- (id)_descriptionWithTabCount:(unsigned long long)arg1;

@end

