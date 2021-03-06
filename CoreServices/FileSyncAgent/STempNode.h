//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class NSString, SNode, SStoreNodeInfo;

@interface STempNode : NSProxy
{
    SStoreNodeInfo *_proxyNodeInfo;
    SNode *_realNode;
    SNode *_rootNode;
    NSString *_tempRootPathOnDisk;
    NSString *_pathOnDisk;
    NSString *_tempPathFromRoot;
}

+ (id)tempNodeForNode:(id)arg1 rootNode:(id)arg2 tempPathOnDisk:(id)arg3;
@property(retain, nonatomic) NSString *tempRootPathOnDisk; // @synthesize tempRootPathOnDisk=_tempRootPathOnDisk;
@property(retain, nonatomic) SNode *rootNode; // @synthesize rootNode=_rootNode;
@property(retain, nonatomic) SNode *realNode; // @synthesize realNode=_realNode;
@property(retain, nonatomic) SStoreNodeInfo *proxyNodeInfo; // @synthesize proxyNodeInfo=_proxyNodeInfo;
@property(retain, nonatomic) NSString *pathOnDisk; // @synthesize pathOnDisk=_pathOnDisk;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)updateWithStoreNodeInfo:(id)arg1;
@property(readonly, retain, nonatomic) NSString *tempPathFromRoot;
- (id)parent;
- (void)dealloc;

@end

