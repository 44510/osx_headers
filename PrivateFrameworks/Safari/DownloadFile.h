//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface DownloadFile : NSObject
{
    NSString *_initialDownloadPath;
    int _type;
    NSData *_bookmarkData;
    BOOL _isAliasOrSymlink;
    BOOL _isSubFile;
    BOOL _isTrashed;
    NSDictionary *_securityAssessment;
    NSArray *_temporaryFiles;
}

+ (id)filesForUnarchivedFileAtPath:(id)arg1;
@property(copy, nonatomic) NSData *bookmarkData; // @synthesize bookmarkData=_bookmarkData;
- (void).cxx_destruct;
- (id)securityAssessment;
- (id)description;
- (BOOL)isMovableOrRemovable;
- (void)setIsTrashed:(BOOL)arg1;
- (BOOL)isTrashed;
- (void)setIsSubFile:(BOOL)arg1;
- (BOOL)isSubFile;
- (void)setTypeWithEncoding:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (BOOL)isXIP;
- (BOOL)isGZIP;
- (BOOL)isBOM;
- (BOOL)isArchive;
- (id)path;
- (id)aliasedOrOriginalPath;
- (id)initWithBookmarkData:(id)arg1 pathString:(id)arg2;
- (id)initWithPath:(id)arg1;
- (void)setPath:(id)arg1;
- (void)_setInitialDownloadPath:(id)arg1;
- (BOOL)_isXIP;
- (BOOL)_isGZIP;
- (BOOL)_isBOM;
- (BOOL)_isMIMEType:(id)arg1;
- (id)_MIMETypeFromExtension;

@end

