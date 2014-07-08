//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GSAdditionStoring.h"
#import "GSAdditionStoringPrivate.h"

@class NSURL;

@interface GSTemporaryStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring>
{
    NSURL *_libraryURL;
    NSURL *_documentURL;
    NSURL *_stagingURL;
    int _lockFd;
}

@property(retain) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(readonly, nonatomic) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAdditions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_enumerateItemsAtURL:(id)arg1;
- (struct NSEnumerator *)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
- (id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id *)arg3;
- (id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id *)arg3;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (BOOL)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(BOOL)arg2 creationInfo:(id)arg3 error:(id *)arg4;
- (void)cleanupStagingURL:(id)arg1;
- (id)URLforReplacingItemWithError:(id *)arg1;
- (id)stagingURLforCreatingAdditionWithError:(id *)arg1;
- (BOOL)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (BOOL)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (BOOL)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id *)arg3;
- (id)getAdditionDictionary:(id)arg1 error:(id *)arg2;
- (id)_URLForNameSpace:(id)arg1 createIfNeeded:(BOOL)arg2 allowMissing:(BOOL)arg3 error:(id *)arg4;
- (void)_unprotectPath:(id)arg1;
- (void)_protectPath:(id)arg1;
- (void)_unlock;
- (BOOL)_readLock:(id *)arg1;
- (BOOL)_writeLock:(id *)arg1;
- (BOOL)__lockWithFlags:(int)arg1 error:(id *)arg2;
- (id)description;
@property(readonly, nonatomic) id <NSCopying><NSSecureCoding> persistentIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithLibraryURL:(id)arg1 forItemAtURL:(id)arg2 error:(id *)arg3;
- (id)init;

@end

