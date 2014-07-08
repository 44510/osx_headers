//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APLModel, APLTemplate, APLTemplateElement, APLView, NSMutableArray, NSMutableDictionary;

@interface APLLayout : NSObject
{
    id <APLSourceProtocol> source;
    APLModel *model;
    APLTemplate *currentTemplate;
    NSMutableDictionary *lastIterCount;
    BOOL renderingAborted;
    unsigned int currentPageGroup;
    unsigned int pageCount;
    APLView *view;
    APLTemplateElement *currentRootTemplateElement;
    NSMutableArray *rootElements;
    int totalCount;
    int maxSuccessCount;
    int minFailedCount;
    int lastResult;
}

- (void).cxx_destruct;
- (unsigned long long)pageCount;
- (id)rootElementForPage:(unsigned long long)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)reset;
- (id)remainingTypes;
- (BOOL)loadTemplate:(id)arg1;
- (int)layoutResult;
- (id)currentPagePosition;
- (BOOL)performEndResolveForType:(int)arg1;
- (long long)nextIterCountForEntityType:(id)arg1 currentCount:(long long)arg2 layoutSucceeded:(BOOL)arg3;
- (int)feedPage:(unsigned long long)arg1 withEntityType:(id)arg2 iterCount:(long long)arg3 totalIterCount:(long long *)arg4 nextEntity:(id *)arg5 lackingSize:(struct CGSize *)arg6 once:(BOOL)arg7;
- (int)renderPage:(unsigned long long)arg1 feedingWithEntitiesOfType:(id)arg2;
- (int)renderGroupUntilPage:(unsigned long long)arg1;
- (int)renderUpToPage:(unsigned long long)arg1;
- (void)abortRendering;
- (int)render;
- (id)initWithView:(id)arg1;
- (id)init;

@end
