//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCDOwnedObject.h>

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface ABCDDateComponents : ABCDOwnedObject
{
}

@property(retain, nonatomic) NSManagedObject *owner;
- (id)components;
- (void)setComponents:(id)arg1;
- (BOOL)abHasAddressBookRelatedContent;

// Remaining properties
@property(copy) NSString *calendarIdentifier; // @dynamic calendarIdentifier;
@property(retain, nonatomic) NSManagedObject *contact; // @dynamic contact;
@property long long day; // @dynamic day;
@property long long era; // @dynamic era;
@property BOOL isLeapMonth; // @dynamic isLeapMonth;
@property long long month; // @dynamic month;
@property long long year; // @dynamic year;

@end

