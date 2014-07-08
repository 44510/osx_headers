//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKRecordValue.h"
#import "NSSecureCoding.h"

@class CKRecord, CKSQLite, NSArray, NSData, NSString, NSURL;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue>
{
    struct _OpaquePCSShareProtection *_recordPCS;
    BOOL _wasCached;
    BOOL _open;
    BOOL _transaction;
    NSArray *_assets;
    CKRecord *_record;
    NSString *_recordKey;
    NSURL *_fileURL;
    NSString *_applicationBundleID;
    NSURL *_openFileURL;
    long long _packageID;
    CKSQLite *_sqlite;
    unsigned long long _nextItemIndex;
    NSString *_UUID;
}

+ (BOOL)supportsSecureCoding;
+ (id)_packagesPathForBundleID:(id)arg1;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) unsigned long long nextItemIndex; // @synthesize nextItemIndex=_nextItemIndex;
@property(nonatomic, getter=inTransaction) BOOL transaction; // @synthesize transaction=_transaction;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property(retain, nonatomic) CKSQLite *sqlite; // @synthesize sqlite=_sqlite;
@property(nonatomic) long long packageID; // @synthesize packageID=_packageID;
@property(retain, nonatomic) NSURL *openFileURL; // @synthesize openFileURL=_openFileURL;
@property(nonatomic) BOOL wasCached; // @synthesize wasCached=_wasCached;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(nonatomic) __weak CKRecord *record; // @synthesize record=_record;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(nonatomic) struct _OpaquePCSShareProtection *recordPCS; // @synthesize recordPCS=_recordPCS;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSData *signature;
- (void)endTransaction;
- (void)beginTransaction;
- (void)addSection:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (void)updateItemAtIndex:(long long)arg1 withFileURL:(id)arg2;
- (void)updateItemAtIndex:(long long)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned long long)arg5;
- (void)addItem:(id)arg1;
- (id)itemEnumeratorForSectionAtIndex:(unsigned long long)arg1;
- (id)itemEnumerator;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)_itemOrNilAtIndex:(unsigned long long)arg1;
- (id)_itemWithColumnsByName:(id)arg1;
- (unsigned long long)itemCount;
- (void)_openIfNecessary;
- (void)close;
- (void)open;
- (long long)decReferenceCount;
- (long long)incReferenceCount;
- (void)_setReferenceCount:(long long)arg1;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)_initWithPath:(id)arg1 UUID:(id)arg2;
- (id)_packageDatabasePathWithUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

