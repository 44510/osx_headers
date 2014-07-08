//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCRElement, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRRemoteSearchManager : NSObject
{
    SCRElement *_containerElement;
    unsigned long long _searchKey;
    NSString *_searchText;
    SCRUIElement *_nextStartElement;
    SCRUIElement *_prevStartElement;
}

+ (BOOL)uiElementSupportsSearch:(id)arg1;
+ (BOOL)elementSupportsSearch:(id)arg1;
+ (id)navigableElementForElement:(id)arg1 containerElement:(id)arg2;
+ (id)unpromotableUIDescendantElementForUIElement:(id)arg1;
+ (id)uiContainerElementForUIElement:(id)arg1;
+ (id)uiChildElementForSearchDirection:(unsigned long long)arg1 uiContainerElement:(id)arg2 uiStartElement:(id)arg3;
+ (id)resultsWithSearchKeys:(id)arg1 containerElement:(id)arg2 searchDirection:(unsigned long long)arg3 limit:(unsigned long long)arg4 returnType:(unsigned long long)arg5 startElement:(id)arg6 searchText:(id)arg7 immediateDescendantsOnly:(BOOL)arg8;
+ (id)allResultsWithSearchKey:(unsigned long long)arg1 containerElement:(id)arg2 returnType:(unsigned long long)arg3;
@property(retain, nonatomic) SCRUIElement *prevStartElement; // @synthesize prevStartElement=_prevStartElement;
@property(retain, nonatomic) SCRUIElement *nextStartElement; // @synthesize nextStartElement=_nextStartElement;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) unsigned long long searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) SCRElement *containerElement; // @synthesize containerElement=_containerElement;
- (id)prevNavigableResult;
- (id)nextNavigableResult;
- (id)prevResultsWithLimit:(unsigned long long)arg1 returnType:(unsigned long long)arg2;
- (id)nextResultsWithLimit:(unsigned long long)arg1 returnType:(unsigned long long)arg2;
- (id)prevResult;
- (id)nextResult;
- (id)initWithSearchKey:(unsigned long long)arg1 containerElement:(id)arg2 startElement:(id)arg3 searchText:(id)arg4;
- (void)dealloc;
- (void)_updateStartElementsWithElements:(id)arg1;
- (id)_uiElementsForAXElements:(id)arg1;
- (id)_resultsWithSearchKeys:(id)arg1 containerElement:(struct __AXUIElement *)arg2 searchDirection:(id)arg3 limit:(id)arg4 startElement:(struct __AXUIElement *)arg5 searchText:(id)arg6 immediateDescendantsOnly:(id)arg7;
- (id)_resultsWithSearchDirection:(unsigned long long)arg1 limit:(unsigned long long)arg2 returnType:(unsigned long long)arg3;
- (id)_navigableElementForSearchDirection:(unsigned long long)arg1;
- (id)_elementsForUIElements:(id)arg1;
- (struct __AXUIElement *)_axStartElementForSearchDirection:(unsigned long long)arg1;
- (id)_axSearchKeysForSCRSearchKeys:(id)arg1;
- (struct __CFString *)_axSearchKeyForSCRSearchKey:(unsigned long long)arg1;

@end

