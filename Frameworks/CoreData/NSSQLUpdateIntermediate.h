//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLUpdateColumnsIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate
{
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}

- (id)generateSQLStringInContext:(id)arg1;
- (void)setUpdateColumnsIntermediate:(id)arg1;
- (id)updateColumnsIntermediate;
- (BOOL)isUpdateScoped;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 inScope:(id)arg2;

@end

