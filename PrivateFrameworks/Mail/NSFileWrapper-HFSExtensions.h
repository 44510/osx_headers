//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileWrapper.h"

@class NSString;

@interface NSFileWrapper (HFSExtensions)
+ (void)loadMessageExtensions;
+ (id)_quarantinePropertiesQueue;
- (BOOL)_Message_updateFromPath:(id)arg1 checkOnly:(BOOL)arg2 exists:(char *)arg3;
- (void)_Message_setPreferredFilename:(id)arg1;
- (id)_Message_initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_Message_writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
@property(retain) NSString *savedPath;
- (id)remoteAccessMimeType;
@property BOOL shouldBeViewedInline;
- (BOOL)couldConfuseWindowsClients;
@end

