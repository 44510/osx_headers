//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCItemID, BRCLocalContainer, CKRecordID, NSNumber, NSObject<GSAdditionStoring>, NSProgress, NSString;

@interface BRCDownloadContext : NSObject
{
    BOOL _liveItemIsPackage;
    BOOL _contentIsPackage;
    BOOL _wantsContent;
    BOOL _contentsHasThumbnail;
    BRCItemID *_itemID;
    BRCLocalContainer *_container;
    long long _transferPriority;
    NSNumber *_documentID;
    NSNumber *_liveFileID;
    NSString *_etag;
    double _contentSize;
    NSProgress *_downloadProgress;
    NSString *_debugName;
    struct NSObject *_storage;
}

@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
@property(readonly, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(readonly, nonatomic) double contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) BOOL contentsHasThumbnail; // @synthesize contentsHasThumbnail=_contentsHasThumbnail;
@property(readonly, nonatomic) BOOL wantsContent; // @synthesize wantsContent=_wantsContent;
@property(readonly, nonatomic) BOOL contentIsPackage; // @synthesize contentIsPackage=_contentIsPackage;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, nonatomic) BOOL liveItemIsPackage; // @synthesize liveItemIsPackage=_liveItemIsPackage;
@property(readonly, nonatomic) NSNumber *liveFileID; // @synthesize liveFileID=_liveFileID;
@property(readonly, nonatomic) NSNumber *documentID; // @synthesize documentID=_documentID;
@property(readonly, nonatomic) long long transferPriority; // @synthesize transferPriority=_transferPriority;
@property(readonly, nonatomic) BRCLocalContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) CKRecordID *recordID;
@property(readonly, nonatomic) CKRecordID *structuralRecordID;
- (id)initWithLocalItem:(id)arg1;

@end

