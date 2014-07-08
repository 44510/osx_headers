//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMLibraryPlist : NSObject
{
    NSString *_path;
    NSString *_directory;
}

+ (id)storeIdFromPlistEntry:(id)arg1;
+ (BOOL)isThinnedAssetFromPlistEntry:(id)arg1;
+ (id)isManagedBookFromURL:(id)arg1;
+ (id)coverPathFromPlistEntry:(id)arg1;
+ (id)isSampleFromPlistEntry:(id)arg1;
+ (id)folderNameFromPlistEntry:(id)arg1;
+ (id)uniqueIdFromPlistEntry:(id)arg1;
+ (id)keyNameForCoverWritingMode;
+ (id)keyNameForScrollDirection;
+ (id)keyNameForPrimaryLanguage;
+ (id)keyNameForLanguages;
+ (id)keyNameForPageProgression;
+ (id)keyNameForHumanReadablePublicationVersion;
+ (id)keyNameForPublicationVersion;
+ (id)keyNameForSortTitle;
+ (id)keyNameForSortAuthor;
+ (id)keyNameForDeletesArray;
+ (id)keyNameForBooksArray;
+ (id)keyNameForSubject;
+ (id)keyNameForAssetType;
+ (id)keyNameForUniqueId;
+ (id)keyNameForStoreId;
+ (id)keyNameForPath;
+ (id)keyNameForExplicitContent;
+ (id)keyNameForGenre;
+ (id)keyNameForTitle;
+ (id)keyNameForAuthor;
+ (id)primaryLanguageFromPlistEntry:(id)arg1;
+ (id)languagesFromPlistEntry:(id)arg1;
+ (id)scrollDirectionFromPlistEntry:(id)arg1;
+ (id)coverWritingModeFromPlistEntry:(id)arg1;
+ (id)languageFromPlistEntry:(id)arg1;
+ (id)assetTypeFromPlistEntry:(id)arg1;
+ (id)pageProgressionFromPlistEntry:(id)arg1;
+ (id)humanReadablePublicationVersionFromPlistEntry:(id)arg1;
+ (id)publicationVersionFromPlistEntry:(id)arg1;
+ (id)extensionFromPlistEntry:(id)arg1;
+ (id)mimeTypeFromPlistEntry:(id)arg1;
+ (id)feedURLFromPlistEntry:(id)arg1;
+ (id)isItunesUFromPlistEntry:(id)arg1;
+ (id)albumFromPlistEntry:(id)arg1;
+ (id)bookEpubIdFromPlistEntry:(id)arg1;
+ (id)persistentIDFromPlistEntry:(id)arg1;
+ (id)temporaryItemIdentifierFromPlistEntry:(id)arg1;
+ (id)isExplicitContentFromPlistEntry:(id)arg1;
+ (id)genreFromPlistEntry:(id)arg1;
+ (id)sortTitleFromPlistEntry:(id)arg1;
+ (id)titleFromPlistEntry:(id)arg1;
+ (id)sortAuthorFromPlistEntry:(id)arg1;
+ (id)authorFromPlistEntry:(id)arg1;
@property(retain, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)removeDeletedPaths:(id)arg1;
- (void)addDeletedPaths:(id)arg1;
- (BOOL)bumpModificationDate;
- (void)rewriteSidecarWithDeletes:(id)arg1;
- (BOOL)isPathInDirectory:(id)arg1;
- (id)contents;
- (id)unfilteredSidecarContents;
- (id)unfilteredContents;
- (id)_contents:(id)arg1;
- (id)calculateChecksum;
@property(readonly, nonatomic) NSString *sidecarPath;
- (id)initWithDirectory:(id)arg1 fileName:(id)arg2;

@end

