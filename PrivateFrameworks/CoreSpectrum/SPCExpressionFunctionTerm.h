//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpectrum/SPCExpressionGroupTerm.h>

@class NSString, SPCExpressionOperator;

@interface SPCExpressionFunctionTerm : SPCExpressionGroupTerm
{
    NSString *_function;
    SPCExpressionOperator *_operator;
}

+ (id)termWithOperator:(id)arg1 subterms:(id)arg2 error:(id *)arg3;
+ (id)termWithFunction:(id)arg1 subterms:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) SPCExpressionOperator *operator; // @synthesize operator=_operator;
@property(readonly, nonatomic) NSString *function; // @synthesize function=_function;
- (id)expressionWithError:(id *)arg1;
- (BOOL)resolveWithParser:(id)arg1 error:(id *)arg2;
- (long long)type;
- (void)dealloc;
- (id)_initWithTokenizer:(id)arg1 error:(id *)arg2;
- (id)_initWithFunction:(id)arg1 subterms:(id)arg2 error:(id *)arg3;
- (id)_initWithOperator:(id)arg1 subterms:(id)arg2 error:(id *)arg3;

@end

