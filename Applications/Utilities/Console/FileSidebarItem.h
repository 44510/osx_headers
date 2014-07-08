//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SidebarItem.h"

@class NSDate;

@interface FileSidebarItem : SidebarItem
{
    unsigned long long _stringEncoding;
    BOOL _isCompressed;
    BOOL _isProblemReport;
    BOOL _isASLDatabase;
    BOOL _exists;
    unsigned long long _uncompressedSize;
    struct stat _savedStats;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    unsigned long long _fileSize;
}

+ (id)fileSidebarItemWithURL:(id)arg1;
+ (id)fileSidebarItemWithPath:(id)arg1;
+ (id)ASLFileExtensions;
+ (id)compressedFileExtensions;
+ (id)problemReportExtensions;
+ (id)gzLogFileImage;
+ (id)bz2LogFileImage;
+ (id)logFileImage;
+ (id)problemReportImage;
@property unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (void)fileSystemNodeChanged:(id)arg1;
- (void)updateAttributesWithURL:(id)arg1;
- (id)fileHandleForReading;
- (void)setStringEncoding:(unsigned long long)arg1;
- (unsigned long long)stringEncoding;
- (unsigned long long)uncompressedSize;
- (unsigned long long)size;
- (BOOL)exists;
- (BOOL)isExpectedOnDisk;
- (BOOL)isASLDatabase;
- (BOOL)isCompressed;
- (BOOL)isProblemReport;
- (id)initWithURL:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)convertASLDatabaseToPlainText:(id)arg1;

@end

