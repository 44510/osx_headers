//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CopyAndPaste : NSObject
{
    NSMutableArray *_items;
    _Bool _cut;
}

+ (id)sharedInstance;
- (id)items;
- (void)pasteItemsToKeychain:(id)arg1;
- (void)pasteItemsToKeychainRef:(struct OpaqueSecKeychainRef *)arg1;
- (void)_didEndCertificate:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)clipboardHasItems;
- (void)removeDeletedItemFromClipboard:(id)arg1;
- (void)copyItems:(id)arg1 cut:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

