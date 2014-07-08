//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class DDGrammar, NSDictionary;

__attribute__((visibility("hidden")))
@interface DDCompilerState : NSObject <NSCoding>
{
    DDGrammar *_grammar;
    const struct __CFArray *_states;
    struct __DDDotedProduction **_dotedProduction;
    long long _numberOfDotedProduction;
    struct __DDProtoLexemeCollection *_plCollection;
    NSDictionary *_ExternalTerminalToInternalTerminal;
    NSDictionary *_InternalTerminalToTerminalExternal;
    NSDictionary *_ExternalNonTerminalToInternalNonTerminal;
    NSDictionary *_InternalNonTerminalToTerminalNonExternal;
}

@property(readonly) DDGrammar *grammar; // @synthesize grammar=_grammar;
- (struct __CFString *)_copyDescriptionOfInternalToken:(long long)arg1;
- (long long)_resolveInternalNonTerminalID:(long long)arg1;
- (long long)_resolveInternalTerminalID:(long long)arg1;
- (id)copyItemSetForStateIndex:(long long)arg1;
- (struct __CFString *)copyItemSetDescriptionForStateWithIndex:(long long)arg1;
- (void)setNonTerminalPermutation:(struct __DDPermutation *)arg1;
- (void)setTerminalPermutation:(struct __DDPermutation *)arg1;
- (void)setPlCollection:(struct __DDProtoLexemeCollection *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGrammar:(id)arg1 states:(struct __CFArray *)arg2 dotedProduction:(struct __DDDotedProduction **)arg3 numberOfDotedProduction:(long long)arg4;

@end

