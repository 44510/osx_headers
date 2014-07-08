//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCItemID, BRCLocalContainer, NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCDesiredAddition : NSObject
{
    id _versionOrThumbData;
    NSData *_thumbnailData;
    BOOL _needsInsert;
    unsigned int _type;
    BRCItemID *_itemID;
    NSNumber *_stagedFileID;
    NSString *_etag;
    BRCLocalContainer *_container;
    NSString *_key;
}

+ (BOOL)dumpContainer:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
+ (BOOL)dumpContainer:(id)arg1 type:(unsigned int)arg2 name:(id)arg3 toContext:(id)arg4 error:(id *)arg5;
+ (id)fetchFromContainer:(id)arg1 itemID:(id)arg2 etag:(id)arg3 type:(unsigned int)arg4;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) id versionOrThumbData; // @synthesize versionOrThumbData=_versionOrThumbData;
@property(nonatomic) BOOL needsInsert; // @synthesize needsInsert=_needsInsert;
@property(readonly, nonatomic) BRCLocalContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSNumber *stagedFileID; // @synthesize stagedFileID=_stagedFileID;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (BOOL)deleteFromDB;
- (BOOL)moveToStageFromDownloadPath:(id)arg1;
- (BOOL)saveToDB;
- (id)description;
- (id)initWithItemID:(id)arg1 container:(id)arg2 etag:(id)arg3 type:(unsigned int)arg4;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id *)arg3;

@end
