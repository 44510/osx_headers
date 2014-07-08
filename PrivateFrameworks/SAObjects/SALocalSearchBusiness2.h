//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSDictionary, NSString, NSURL, SALocalSearchOperationHours, SALocation;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>
{
}

+ (id)business2WithDictionary:(id)arg1 context:(id)arg2;
+ (id)business2;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSArray *reviewList;
@property(copy, nonatomic) NSArray *photoThumbnail;
@property(copy, nonatomic) NSArray *photoList;
@property(copy, nonatomic) NSArray *photoFullSize;
@property(copy, nonatomic) NSString *phoneNumber;
@property(retain, nonatomic) SALocalSearchOperationHours *operationHours;
@property(copy, nonatomic) NSArray *offerLists;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSDictionary *identifierMap;
@property(copy, nonatomic) NSString *extSessionGuid;
@property(copy, nonatomic) NSString *description;
@property(copy, nonatomic) NSArray *categories;
@property(copy, nonatomic) NSURL *businessUrl;
@property(retain, nonatomic) SALocation *address;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

