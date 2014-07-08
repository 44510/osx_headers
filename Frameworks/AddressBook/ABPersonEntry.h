//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABTableEntry.h>

@class NSArray, NSDate, NSString, NSURL;

@interface ABPersonEntry : ABTableEntry
{
    NSString *_linkIdentifier;
    NSString *_recordIdentifier;
    NSString *_name;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_organization;
    NSDate *_creationDate;
    struct _NSRange _nameEmphasisRange;
    NSString *_searchString;
    NSString *_sortingFirstName;
    NSString *_sortingLastName;
    NSString *_sectionKey;
    unsigned long long _iconType;
    unsigned long long _nameOrder;
    NSString *_preferredIdentifier;
    NSArray *_pickerPropertyObjects;
    NSArray *_linkedRecordIdentifiers;
    NSURL *_metadataFileUrl;
}

+ (id)personEntryForLinkedContacts:(id)arg1;
+ (id)personEntryForRecord:(id)arg1;
+ (id)personEntryForPerson:(id)arg1;
@property(readonly, copy) NSArray *pickerPropertyObjects; // @synthesize pickerPropertyObjects=_pickerPropertyObjects;
@property(readonly, copy) NSString *sectionKey; // @synthesize sectionKey=_sectionKey;
@property(readonly) struct _NSRange nameEmphasisRange; // @synthesize nameEmphasisRange=_nameEmphasisRange;
@property(readonly, copy) NSURL *metadataFileUrl; // @synthesize metadataFileUrl=_metadataFileUrl;
@property(readonly, copy) NSArray *linkedRecordIdentifiers; // @synthesize linkedRecordIdentifiers=_linkedRecordIdentifiers;
@property(readonly, copy) NSString *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(readonly, copy) NSString *linkIdentifier; // @synthesize linkIdentifier=_linkIdentifier;
@property(readonly, copy) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy) NSString *sortingLastName; // @synthesize sortingLastName=_sortingLastName;
@property(readonly, copy) NSString *sortingFirstName; // @synthesize sortingFirstName=_sortingFirstName;
@property(readonly, copy) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, copy) NSString *organization; // @synthesize organization=_organization;
@property(readonly, copy) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long nameOrder; // @synthesize nameOrder=_nameOrder;
@property(readonly) unsigned long long iconType; // @synthesize iconType=_iconType;
- (long long)subrowIndexForIdentifier:(id)arg1;
- (id)identifierForRecordOwningValueIdentifier:(id)arg1;
@property(readonly, copy) NSArray *backingRecordIdentifiers;
- (BOOL)canSelect;
- (BOOL)canDrag;
@property(readonly, copy) NSString *preferredIdentifier;
@property(readonly) BOOL isGroup;
@property(readonly) BOOL isCompany;
@property(readonly) BOOL isPerson;
- (id)description;
- (void)dealloc;
- (id)initWithLinkedContacts:(id)arg1 withFactory:(id)arg2;
- (id)initWithRecord:(id)arg1 withFactory:(id)arg2;
- (id)initWithPreferredRecord:(id)arg1 allRecords:(id)arg2 withFactory:(id)arg3;

@end

