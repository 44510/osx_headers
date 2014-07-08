//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AMTextDetector : NSObject
{
    NSArray *_typeDictionaries;
}

+ (id)sharedTextDetector;
- (void)dealloc;
- (id)init;
- (id)matchesInString:(id)arg1 withType:(id)arg2 error:(id *)arg3;
- (id)supportedTypeIdentifiers;
- (id)localizedNameForTypeIdentifier:(id)arg1;
- (id)_typeDictionaryForIdentifier:(id)arg1;
- (void)_buildTypeDictionaries;
- (CDUnknownBlockType)_emailAddressHandler;

@end

