//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ThreadJob.h"

#import "SSyncJobInterface.h"

@class NSArray, NSDictionary, NSSet, NSString, SNode, SPeer, SStore, VersionVector;

@interface SSyncJob : ThreadJob <SSyncJobInterface>
{
    int _jobType;
    BOOL _deepCopy;
    SPeer *_peer;
    SStore *_sourceStore;
    SStore *_originalMoveStore;
    NSSet *_sources;
    NSSet *_losers;
    VersionVector *_finalVersion;
    VersionVector *_finalContentsVersion;
    VersionVector *_finalAttributesVersion;
    VersionVector *_finalLocationVersion;
    NSArray *_dstPathComponents;
    NSArray *_srcPathComponents;
    unsigned long long _sequence;
    SNode *_sourceNode;
}

+ (void)queueUpdateVersionsForPeer:(id)arg1 sourceNode:(id)arg2 destNode:(id)arg3 versionVector:(id)arg4;
+ (void)queueMoveJobForPeer:(id)arg1 sourceNode:(id)arg2 movedTo:(id)arg3;
+ (id)queueModifyJobForPeer:(id)arg1 sourceNode:(id)arg2 winners:(id)arg3;
+ (void)queueHoardJobForPeer:(id)arg1 srcPND:(id)arg2;
+ (void)queueAttributesModifyJobForPeer:(id)arg1 sourceNode:(id)arg2 winners:(id)arg3;
+ (id)queueAddJobForPeer:(id)arg1 sourceNode:(id)arg2 winners:(id)arg3 deepCopy:(BOOL)arg4;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSArray *srcPathComponents; // @synthesize srcPathComponents=_srcPathComponents;
@property(retain, nonatomic) NSArray *dstPathComponents; // @synthesize dstPathComponents=_dstPathComponents;
@property(retain, nonatomic) VersionVector *finalLocationVersion; // @synthesize finalLocationVersion=_finalLocationVersion;
@property(retain, nonatomic) VersionVector *finalAttributesVersion; // @synthesize finalAttributesVersion=_finalAttributesVersion;
@property(retain, nonatomic) VersionVector *finalContentsVersion; // @synthesize finalContentsVersion=_finalContentsVersion;
@property(retain, nonatomic) VersionVector *finalVersion; // @synthesize finalVersion=_finalVersion;
@property(retain, nonatomic) NSSet *losers; // @synthesize losers=_losers;
@property(retain, nonatomic) NSSet *sources; // @synthesize sources=_sources;
@property(nonatomic) SStore *originalMoveStore; // @synthesize originalMoveStore=_originalMoveStore;
@property(nonatomic) SStore *sourceStore; // @synthesize sourceStore=_sourceStore;
@property(nonatomic) SPeer *peer; // @synthesize peer=_peer;
@property(nonatomic) BOOL deepCopy; // @synthesize deepCopy=_deepCopy;
@property(nonatomic) int jobType; // @synthesize jobType=_jobType;
- (id)descriptionFlat;
- (void)main;
- (long long)compareJobs:(id)arg1;
@property(readonly, retain, nonatomic) NSString *sourcePath;
@property(readonly, retain, nonatomic) SNode *sourceNode;
- (unsigned long long)sizeForJobItemCount:(unsigned int *)arg1 numQuotaBlocks:(long long *)arg2 blockSize:(unsigned int)arg3;
@property(readonly, retain, nonatomic) NSDictionary *progressInfoDict;
@property(readonly, nonatomic) int jobTypeForInfo;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) BOOL isTrivial;
@property(readonly, retain, nonatomic) NSString *destPath;
@property(readonly, retain, nonatomic) SNode *destNode;
- (void)cancel;
- (void)dealloc;
- (void)setupJobDependenciesForDestNode:(id)arg1 pnd:(id)arg2;
- (int)rank;
- (id)initWithPND:(id)arg1 jobType:(int)arg2 winners:(id)arg3 sourceNode:(id)arg4 destNode:(id)arg5;

@end

