//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSAddition.h"

@interface GSAddition (BRCAdditions)
+ (BOOL)brc_parseAdditionFilename:(id)arg1 mangledContainerID:(id *)arg2 itemID:(id *)arg3 etag:(id *)arg4;
+ (id)additionURLForName:(id)arg1 storagePrefix:(id)arg2 inConflictNamespace:(BOOL)arg3;
- (BOOL)brc_removeConflictLoserWithError:(id *)arg1;
- (BOOL)brc_parseMangledContainerID:(id *)arg1 itemID:(id *)arg2 etag:(id *)arg3;
@end

