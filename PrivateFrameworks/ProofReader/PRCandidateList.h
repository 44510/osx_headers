//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PRCandidateList : NSObject
{
    NSMutableArray *_candidates;
    unsigned long long _maxCount;
}

- (BOOL)isFull;
- (unsigned long long)maxCount;
- (unsigned long long)count;
- (id)candidateStrings;
- (id)candidates;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 errorType:(unsigned long long)arg3;
- (void)addCandidateWithString:(id)arg1 errorType:(unsigned long long)arg2;
- (void)addCandidate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithMaxCount:(unsigned long long)arg1;

@end

