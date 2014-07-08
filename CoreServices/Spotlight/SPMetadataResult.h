//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPResult.h"

@class NSDictionary, NSImage, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface SPMetadataResult : SPResult
{
    unsigned long long _rank;
    unsigned long long _score;
    NSImage *_icon;
    NSImage *_appImage;
    NSString *_filePath;
    NSURL *_fileURL;
    NSDictionary *_cache;
    NSMutableDictionary *_dynamicCache;
    const void *_lastUsedDate;
    struct __MDItem *_metadataItem;
}

+ (id)dictionaryForKeys:(id)arg1 keySet:(id)arg2 query:(struct __MDQuery *)arg3 group:(unsigned long long)arg4 index:(unsigned long long)arg5;
+ (id)dictionaryForKeys:(id)arg1 keySet:(id)arg2 query:(struct __MDQuery *)arg3 index:(unsigned long long)arg4;
+ (void)initialize;
@property(readonly) struct __MDItem *metadataItem; // @synthesize metadataItem=_metadataItem;
- (void).cxx_destruct;
- (BOOL)allowShowPath;
@property(readonly) NSNumber *adamID;
- (id)groupHeadingWithTitle:(id)arg1 focusString:(id)arg2;
- (id)fastURL;
- (void)setScore:(unsigned long long)arg1;
- (unsigned long long)score;
- (id)groupName;
@property(readonly) NSNumber *groupNumber;
- (id)category;
- (void)dealloc;
- (id)groupId;
- (void)_setObject:(id)arg1 forCacheSlot:(const void **)arg2;
- (id)_objectForCacheSlot:(const void **)arg1 getterKey:(id)arg2;
- (int)qlPreviewMode;
- (id)customPreviewController;
- (unsigned long long)resultOpenOptions;
- (BOOL)shouldNotBeTopHit;
- (BOOL)isTopHitCandidate;
- (id)displayInfo;
- (id)filePath;
- (void)markAsUsed;
- (id)lastUsedDate;
- (id)slowLastUsedDate;
- (id)URL;
- (id)otherNames;
- (id)otherTypes;
- (id)valueForAttribute:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqualToMetadataResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property unsigned long long rank;
- (id)initWithFilePath:(id)arg1 prefetchAttributes:(id)arg2;
- (id)initWithMetadataItem:(struct __MDItem *)arg1;
- (id)initWithMetadataItem:(struct __MDItem *)arg1 attributeDictionary:(id)arg2;
- (id)iconImageForApplication;
- (id)iconImage;

@end

