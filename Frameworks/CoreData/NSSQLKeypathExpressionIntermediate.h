//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLExpressionIntermediate.h>

__attribute__((visibility("hidden")))
@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate
{
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3;
- (id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5;

@end

