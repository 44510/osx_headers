//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SNode;

@interface SourceInfo : NSObject
{
    SNode *_dstNode;
    struct FSRef _srcFSRef;
    SNode *_srcNode;
    NSString *_srcPath;
}

- (void)dealloc;

@end

