//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiSqlASTNode.h>

@interface LiSqlBinaryASTNode : LiSqlASTNode
{
    LiSqlASTNode *_leftArg;
    LiSqlASTNode *_rightArg;
}

@property(retain, nonatomic) LiSqlASTNode *rightArg; // @synthesize rightArg=_rightArg;
@property(retain, nonatomic) LiSqlASTNode *leftArg; // @synthesize leftArg=_leftArg;
- (void).cxx_destruct;
- (BOOL)refersToFields:(id)arg1;
- (unsigned long long)countDynamicParams;
- (id)sqlStringReplacingSymbols:(id)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)initWithOpcode:(int)arg1 leftArg:(id)arg2 rightArg:(id)arg3;

@end

