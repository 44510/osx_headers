//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPCExpressionOperator : NSObject
{
    NSString *_symbol;
    NSString *_function;
    long long _precedence;
    long long _arity;
    long long _associativity;
}

+ (id)operatorsForFunction:(id)arg1;
+ (id)operatorsForSymbol:(id)arg1;
+ (id)standardOperators;
+ (id)operatorWithSymbol:(id)arg1 mappingToFunction:(id)arg2 precedence:(long long)arg3 arity:(long long)arg4 associativity:(long long)arg5;
+ (id)_standardOperators;
@property(nonatomic) long long associativity; // @synthesize associativity=_associativity;
@property(nonatomic) long long arity; // @synthesize arity=_arity;
@property(nonatomic) long long precedence; // @synthesize precedence=_precedence;
@property(retain, nonatomic) NSString *function; // @synthesize function=_function;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void)dealloc;
- (id)initWithSymbol:(id)arg1 mappingToFunction:(id)arg2 precedence:(long long)arg3 arity:(long long)arg4 associativity:(long long)arg5;

@end

