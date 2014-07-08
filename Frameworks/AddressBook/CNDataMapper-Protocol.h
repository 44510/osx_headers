//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAccount, CNContact, CNContactIdentifier, CNGroupIdentifier, CNMutableContact, NSArray, NSData, NSPredicate, NSString;

@protocol CNDataMapper <NSObject>
- (void)executeSaveTransactionWithBlock:(void (^)(id <CNDataMapperSaveTransaction>))arg1;
- (NSString *)fetchDistributionListIdentifierWithProperty:(NSString *)arg1 contactIdentifier:(CNContactIdentifier *)arg2 groupIdentifier:(CNGroupIdentifier *)arg3;
- (void)fetchGroupsMatchingPredicate:(NSPredicate *)arg1 withObserver:(id <CNObserver>)arg2;
- (NSArray *)fetchContactsMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)fetchIdentifiersForMeCards:(id *)arg1;
- (CNContactIdentifier *)fetchIdentifierForMeCard:(id *)arg1;
- (NSArray *)fetchContactsWithIdentifiers:(NSArray *)arg1 error:(id *)arg2;

@optional
- (BOOL)setImageData:(NSData *)arg1 onContact:(CNMutableContact *)arg2 error:(id *)arg3;
- (id <ABFuture>)photoForContacts:(NSArray *)arg1;
- (id <ABFuture>)photoForContact:(CNContact *)arg1;
- (BOOL)isContactReadOnly:(CNContact *)arg1;
- (NSArray *)accountsForContactsWithIdentifiers:(NSArray *)arg1;
- (ABAccount *)accountForContactWithIdentifier:(CNContactIdentifier *)arg1;
- (unsigned long long)fetchCountOfContactsWithLinkIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)fetchContactsWithLinkIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)fetchContactsWithIdentifiers:(NSArray *)arg1 unify:(BOOL)arg2 error:(id *)arg3;
@end
