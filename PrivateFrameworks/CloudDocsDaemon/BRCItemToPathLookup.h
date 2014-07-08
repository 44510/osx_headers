//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCLocalContainer, BRCLocalItem, BRCRelativePath, BRCServerItem, NSURL;

@interface BRCItemToPathLookup : NSObject
{
    BRCLocalItem *_item;
    BRCServerItem *_serverItem;
    BRCLocalContainer *_container;
    BRCRelativePath *_parentPath;
    BRCRelativePath *_matchByFileID;
    BRCRelativePath *_matchByDocumentID;
    BRCRelativePath *_matchByPath;
    unsigned long long _parentFileID;
    BOOL _documentIDMayStillExist;
    struct {
        unsigned int byFileID:1;
        unsigned int byDocumentID:1;
        unsigned int byPath:1;
        unsigned int parent:1;
    } _fetched;
}

+ (id)lookupForServerItem:(id)arg1;
+ (id)lookupForItem:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)closePaths;
- (BOOL)_fetchByDocumentID;
- (BOOL)_fetchByPath;
- (BOOL)_fetchByFileID;
- (BOOL)_fetchParent;
@property(readonly, nonatomic) BOOL documentIDMayStillExist;
@property(readonly, nonatomic) BRCRelativePath *byDocumentID;
@property(readonly, nonatomic) BRCRelativePath *byFileID;
@property(readonly, nonatomic) NSURL *coordinationURL;
@property(readonly, nonatomic) BRCRelativePath *byPath;
@property(readonly, nonatomic) BRCRelativePath *parentPath;
@property(readonly, nonatomic) unsigned long long parentFileID;
- (id)initWithServerItem:(id)arg1;
- (id)initWithItem:(id)arg1;

@end

