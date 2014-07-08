//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook, ABPerson, NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface SGTABPersonGeniusHelper : NSObject
{
    ABAddressBook *addressBook;
    NSMutableDictionary *normalizedToResult;
    NSMutableDictionary *nameToResult;
    NSMutableDictionary *addressToResult;
    NSMutableSet *moreThan3Recents;
    NSMutableSet *lessThan3Recents;
    NSString *meDisplayName;
    ABPerson *meCard;
    NSSet *attributeNames;
    NSString *inputString;
    BOOL coreRecentsAvailable;
    BOOL inputStringIsAMail;
    BOOL includeScreenames;
    BOOL meCardAccountsFetched;
    void *evaluator;
}

+ (BOOL)_loadCoreRecentsFramework;
+ (id)_userMailAccounts;
+ (BOOL)_loadInternetAccountsFramework;
+ (id)_equivalentEmailsForEmail:(id)arg1;
@property BOOL includeScreenames; // @synthesize includeScreenames;
@property(readonly) ABAddressBook *addressBook; // @synthesize addressBook;
- (int)recentTypeForSuggestion:(id)arg1;
- (id)normalizedValueForAddress:(id)arg1 attributeValues:(id *)arg2 representedObject:(id *)arg3;
- (id)normalizedValueForFullname:(id)arg1 address:(id)arg2 attributeValues:(id *)arg3 representedObject:(id *)arg4;
- (id)normalizedValue:(id)arg1 forAttributeWithName:(id)arg2 otherAttributes:(id)arg3 attributeValues:(id *)arg4 representedObject:(id *)arg5;
- (id)resultMatchingName:(id)arg1 address:(id)arg2 shouldUseAddressForSearch:(char *)arg3;
- (id)resultMatchingAddress:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)additionalSuggestions;
- (id)me;
- (id)personWithEmail:(id)arg1;
- (id)_personWithValue:(id)arg1 forProperty:(id)arg2 key:(id)arg3;
- (id)personWithName:(id)arg1;
- (id)conjoinedElementForProperties:(id)arg1 value:(id)arg2 withComparison:(long long)arg3;
- (long long)junctionForComparison:(long long)arg1 value:(id)arg2;
- (id)attributesForEmail;
- (id)attributesForFullname;
- (id)nameProperties;
- (id)wordsFromString:(id)arg1;
- (BOOL)attributeNamesContainsSubject;
@property(copy) NSArray *attributeNames;
- (id)inputString;
- (void)setInputString:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

