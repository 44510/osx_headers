//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_xpc_object>;

@interface PVLegacyPDFBookmarksController : NSObject
{
    NSMutableArray *_bookmarksArray;
    NSMutableDictionary *_recentDocumentStatesDict;
    NSObject<OS_xpc_object> *_trustedBookmarksService;
}

+ (id)sharedPDFBookmarkController;
- (void)updateTrustedBookmarks;
- (void)getSandboxExtensionsForTrustedBookmarks;
- (void)writeBookmarks:(BOOL)arg1;
- (BOOL)migrateBookmarks:(id)arg1;
- (id)bookmarkWithUUID:(id)arg1;
- (void)removeBookmarksAtIndexes:(id)arg1;
- (void)removeBookmark:(id)arg1;
- (void)bookmarkPage:(long long)arg1 forDocument:(id)arg2 withLabel:(id)arg3;
- (void)setBookmarkArray:(id)arg1;
- (id)bookmarkArray;
- (void)dealloc;
- (id)init;

@end

