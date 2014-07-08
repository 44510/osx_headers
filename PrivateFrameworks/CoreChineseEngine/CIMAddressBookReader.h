//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CIMAddressBookReader : NSObject
{
    NSString *_inputMode;
    NSMutableArray *_cachedEntries;
}

+ (id)sharedAddressBookReader;
@property(retain) NSMutableArray *cachedEntries; // @synthesize cachedEntries=_cachedEntries;
@property(copy) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (void)addressBookChanged;
- (id)addressBookNamePhoneticPairsFromInputMode:(id)arg1;
- (id)transliterate:(id)arg1 inputMode:(id)arg2;
- (void)dealloc;
- (id)init;

@end

