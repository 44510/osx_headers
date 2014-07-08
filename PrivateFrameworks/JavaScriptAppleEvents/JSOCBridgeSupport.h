//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSExportNames, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface JSOCBridgeSupport : NSObject
{
    NSMutableDictionary *_dictionary;
    NSMutableArray *_caches;
    NSMutableSet *_loadPaths;
    JSExportNames *_exportNames;
}

@property(readonly) JSExportNames *exportNames; // @synthesize exportNames=_exportNames;
- (void).cxx_destruct;
- (id)functionPointerForFunctionWithName:(id)arg1;
- (id)functionPointerForTarget:(id)arg1 selector:(SEL)arg2 superclassDepth:(unsigned long long)arg3;
- (id)typeForClass:(Class)arg1 selector:(SEL)arg2;
- (id)typeForName:(id)arg1;
- (id)typeForMethodSignature:(id)arg1;
- (id)typeForObjCType:(const char *)arg1;
- (id)typeForSelectorInfo:(id)arg1 typeEncoding:(const char *)arg2;
- (id)typeForFunctionInfo:(id)arg1 isBlock:(BOOL)arg2;
- (id)typeForArgumentInfo:(id)arg1 fallbackObjCType:(const char *)arg2;
- (id)valueForStringConstantWithName:(id)arg1 isNSString:(char *)arg2;
- (id)pointerForConstantWithName:(id)arg1;
- (id)valueForEnumWithName:(id)arg1;
- (Class)classWithName:(id)arg1;
- (BOOL)hasClass:(id)arg1;
- (BOOL)hasFunction:(id)arg1;
- (BOOL)hasEnum:(id)arg1;
- (BOOL)hasStringConstant:(id)arg1;
- (BOOL)hasConstant:(id)arg1;
- (BOOL)hasStruct:(id)arg1;
- (id)extendedObjCTypeForObjCType:(id)arg1;
- (id)objCTypeForStructName:(id)arg1;
- (id)infoForClassWithName:(id)arg1;
- (id)infoForFunctionWithName:(id)arg1;
- (id)infoForEnumWithName:(id)arg1;
- (id)infoForStringConstantWithName:(id)arg1;
- (id)infoForConstantWithName:(id)arg1;
- (id)infoForStructWithName:(id)arg1;
- (id)infoForStructWithTag:(id)arg1;
- (BOOL)didLoadPath:(id)arg1;
- (void)addLoadPath:(id)arg1;
- (void)addBridgeSupportCache:(id)arg1;
- (BOOL)import:(id)arg1;
@property(readonly) NSDictionary *metadata;
- (id)init;

@end

