//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProKit/ProPSDThemeStore.h>

#import "NSCoding.h"

__attribute__((visibility("hidden")))
@interface ProSystemThemeStore : ProPSDThemeStore <NSCoding>
{
}

- (struct _prothemecursor)themeCursorWithID:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (union _themeatom_union)decodeThemeAtomWithCoder:(id)arg1;
- (void)encodeThemeAtom:(union _themeatom_union)arg1 withCoder:(id)arg2;
- (unsigned int)sliceNumberForAtom:(union _themeatom_union)arg1 atIndex:(unsigned int)arg2;
- (id)pathForThemeAssetWithAtom:(union _themeatom_union)arg1;
- (union _themeatom_union)atomForAssetNamed:(id)arg1;
- (id)nameForAssetWithAtom:(union _themeatom_union)arg1;

@end

