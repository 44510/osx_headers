//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class APLConstraint, APLPacker, APLPrintController, APLRangeController, NSBundle, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<APLSourceProtocol>, NSString;

@interface APLModel : NSObject <NSXMLParserDelegate>
{
    NSBundle *modelBundle;
    NSDictionary *properties;
    NSObject<APLSourceProtocol> *source;
    APLRangeController *rangeController;
    NSMutableArray *templates;
    NSMutableArray *packers;
    NSMutableDictionary *defaults;
    NSMutableArray *options;
    NSDictionary *optionValues;
    NSDictionary *expectedElementNamesDict;
    NSMutableArray *elementNamesStack;
    NSString *currentElementName;
    BOOL parsingPackers;
    BOOL parsingDefaults;
    BOOL parsingOptions;
    APLPacker *currentPacker;
    APLConstraint *currentConstraint;
    NSMutableDictionary *currentOption;
    int modelTag;
    int optionOrder;
    BOOL loaded;
    APLPrintController *_printController;
}

- (void).cxx_destruct;
- (id)numberFromString:(id)arg1;
- (BOOL)isElementNameExpected:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (id)parser:(id)arg1 resolveExternalEntityName:(id)arg2 systemID:(id)arg3;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundUnparsedEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 notationName:(id)arg5;
- (void)parser:(id)arg1 foundProcessingInstructionWithTarget:(id)arg2 data:(id)arg3;
- (void)parser:(id)arg1 foundNotationDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4;
- (void)parser:(id)arg1 foundInternalEntityDeclarationWithName:(id)arg2 value:(id)arg3;
- (void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;
- (void)parser:(id)arg1 foundExternalEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4;
- (void)parser:(id)arg1 foundElementDeclarationWithName:(id)arg2 model:(id)arg3;
- (void)parser:(id)arg1 foundComment:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundAttributeDeclarationWithName:(id)arg2 forElement:(id)arg3 type:(id)arg4 defaultValue:(id)arg5;
- (void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (BOOL)oftenRefreshPreview;
- (unsigned long long)orientation;
@property(readonly, copy) NSString *description;
- (id)identifier;
- (id)name;
- (id)timerange;
- (id)resolvedDefaults;
- (id)source;
- (long long)modelTag;
- (void)setModelTag:(long long)arg1;
- (void)setDefaultValue:(id)arg1 forProperty:(id)arg2 forDefault:(id)arg3;
- (id)valueForOption:(id)arg1;
- (void)setOptionValues:(id)arg1;
- (id)allOptions;
- (id)optionGroups;
- (id)templateForElements:(id)arg1 andPagePosition:(id)arg2;
- (id)templateWithName:(id)arg1;
- (id)localizedDictionaryWithDictionary:(id)arg1;
- (BOOL)load;
- (id)initFromBundle:(id)arg1;
- (id)initFromBundle:(id)arg1 printController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

