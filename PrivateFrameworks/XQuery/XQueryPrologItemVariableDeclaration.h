//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XQueryPrologItemBehavior.h"

@class NSString, XQueryTypeDeclaration;

__attribute__((visibility("hidden")))
@interface XQueryPrologItemVariableDeclaration : NSObject <XQueryPrologItemBehavior>
{
    NSString *varName;
    id expr;
    XQueryTypeDeclaration *type;
    BOOL external;
    long long line;
}

+ (id)variable:(id)arg1 ofType:(id)arg2 forExpr:(id)arg3 isExternal:(BOOL)arg4 atLine:(long long)arg5;
- (void)finalize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)XQueryUpdateProlog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

