//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableAttributedString.h"

@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString
{
    id _contents;
    NSAttributeDictionary *_baseAttributes;
    long long _length;
    unsigned long long _hashValue;
    struct {
        id _field1;
        long long _field2;
    } *_runs;
    long long _numRuns;
    long long _allocedRunsSize;
    long long _numHits;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyCachedInstance;
- (void)cache;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_baselineMode;
- (BOOL)_isStringDrawingTextStorage;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (unsigned long long)length;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributedString:(id)arg1;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;

@end

