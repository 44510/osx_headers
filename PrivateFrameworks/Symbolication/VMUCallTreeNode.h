//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VMUCallTreeNode : NSObject
{
    VMUCallTreeNode *_parent;
    NSString *_name;
    unsigned long long _address;
    unsigned int _count;
    unsigned long long _numBytes;
    unsigned int _numChildren;
    union {
        void *theChild;
        void **theChildren;
    } _un;
}

+ (id)rootForTraceData:(id)arg1;
+ (id)makeFakeRootForNode:(id)arg1;
+ (id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned long long)arg4;
- (void)addTraceEvent:(id)arg1 forTraceData:(id)arg2;
- (id)pruneMallocSize:(unsigned long long)arg1;
- (id)pruneCount:(unsigned int)arg1;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1;
- (id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(BOOL)arg2;
- (id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3;
- (id)filterOutSymbols:(id)arg1;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)invertedNode;
- (id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1;
- (id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1 showPseudoNodes:(BOOL)arg2;
- (BOOL)callTreeHasBranches;
- (id)fullOutputWithThreshold:(unsigned int)arg1;
- (id)fullOutputWithThreshold:(unsigned int)arg1 showPseudoNodes:(BOOL)arg2;
- (void)countFunctionOccurrencesInTree:(id)arg1;
- (id)largestTopOfStackPath;
- (id)sortedChildrenWithPseudoNode;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (id)pseudoNodeTopOfStackChild;
- (long long)comparePuttingMainThreadFirst:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compareSizeAndCount:(id)arg1;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(BOOL)arg4;
- (void)parseNameIntoSymbol:(id *)arg1 library:(id *)arg2 loadAddress:(unsigned long long *)arg3 offset:(unsigned long long *)arg4 address:(unsigned long long *)arg5 suffix:(id *)arg6;
- (id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6;
- (id)nameWithoutOffset;
- (BOOL)isMallocBlockContentNode;
- (BOOL)symbolNameIsUnknown;
- (id)pseudoName;
- (BOOL)isPseudo;
- (id)browserName;
- (void)getBrowserName:(id)arg1;
- (id)name;
- (unsigned long long)numBytes;
- (unsigned int)count;
- (unsigned long long)address;
- (id)parent;
- (void)dealloc;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (id)allChildren;
- (id)childAtIndex:(unsigned int)arg1;
- (void)setNumChildren:(unsigned int)arg1;
- (unsigned int)numChildren;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;

@end

