//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSAKit/OSAScriptAssistantStrategy.h>

@class NSArray;

@interface OSAScriptAssistantKeywordStrategy : OSAScriptAssistantStrategy
{
    NSArray *_keywords;
}

- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (id)_keywordCompletionItemsForKeywords:(id)arg1;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1;

@end

