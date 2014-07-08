//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCRStyleInfoAttributesParser : NSObject
{
    NSArray *_styleInfoAttributes;
}

@property(retain, nonatomic) NSArray *styleInfoAttributes; // @synthesize styleInfoAttributes=_styleInfoAttributes;
- (id)_translateColor:(id)arg1;
- (id)_translateColors:(id)arg1;
- (id)_parseAXStyleInfoTextAttributes:(id)arg1;
- (id)_parseColorAttribute:(id)arg1;
- (id)_parseAttributeStringValue:(id)arg1;
- (id)_colorAttributesHashTable;
- (id)parseValue:(id)arg1 forAttribute:(id)arg2;
- (id)parseAttributesWithImportance:(id)arg1;
- (void)dealloc;
- (id)initWithStyleInfoAttributes:(id)arg1;

@end

