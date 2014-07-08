//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface NSScriptCommandDescription : NSObject <NSCoding>
{
    NSString *_suiteName;
    NSString *_plistCommandName;
    unsigned int _classAppleEventCode;
    unsigned int _idAppleEventCode;
    NSString *_objcClassName;
    NSObject *_resultTypeNameOrDescription;
    unsigned int _plistResultTypeAppleEventCode;
    id _moreVars;
}

+ (id)_argumentDescriptionsFromUnnamedImplDeclaration:(id)arg1 presoDeclaration:(id)arg2 namedImplDeclarations:(id)arg3 presoDeclarations:(id)arg4 suiteName:(id)arg5 commandName:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)createCommandInstanceWithZone:(struct _NSZone *)arg1;
- (id)createCommandInstance;
- (BOOL)isOptionalArgumentWithName:(id)arg1;
- (unsigned int)appleEventCodeForArgumentWithName:(id)arg1;
- (id)typeForArgumentWithName:(id)arg1;
@property(readonly, copy) NSArray *argumentNames;
- (id)_argumentDescriptionsByName;
@property(readonly) unsigned int appleEventCodeForReturnType;
@property(readonly, copy) NSString *returnType;
@property(readonly, copy) NSString *commandClassName;
@property(readonly) unsigned int appleEventCode;
@property(readonly) unsigned int appleEventClassCode;
@property(readonly, copy) NSString *commandName;
@property(readonly, copy) NSString *suiteName;
- (id)initWithSuiteName:(id)arg1 commandName:(id)arg2 dictionary:(id)arg3;
- (void)dealloc;
- (id)init;
- (unsigned short)_appendEventDeclarationsToAETEData:(id)arg1 includingParts:(int)arg2;
- (BOOL)_hasHiddenParts;
- (id)_argumentDescriptionForKey:(id)arg1;
- (id)_firstPresentableName;
- (id)_presentableResultDescription;
- (id)_presentableNames;
- (id)_presentableDescription;
- (BOOL)_isHidden;
- (id)_resultTypeDescription;
- (id)_argumentDescriptions;
- (void)_addAccessGroups:(id)arg1;
- (void)_setAccessGroups:(id)arg1;
- (id)_accessGroups;
- (BOOL)_matchesAppleEventCode:(unsigned int)arg1 classCode:(unsigned int)arg2;
- (id)_synonymDescriptions;
- (BOOL)_isFromSDEF;
- (void)_reconcileToSuiteRegistry:(id)arg1;
- (id)_initWithProperties:(const CDStruct_1e3abd2a *)arg1 commandName:(id)arg2 resultTypeAppleEventCode:(unsigned int)arg3;
- (id)_initWithProperties:(const CDStruct_1e3abd2a *)arg1;
- (id)_initWithSuiteName:(id)arg1 commandName:(id)arg2 implDeclaration:(id)arg3 presoDeclaration:(id)arg4;
- (id)description;
- (id)_descriptionWithTabCount:(unsigned long long)arg1;

@end

