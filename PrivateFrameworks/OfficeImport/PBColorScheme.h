//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PBColorScheme : NSObject
{
}

+ (void)readFromColorScheme:(struct PptColorSchemeAtom *)arg1 toColorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;
+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 atIndex:(int)arg3 inScheme:(id)arg4;
+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 colorTransform:(CDUnknownFunctionPointerType)arg3 atIndex:(int)arg4 inScheme:(id)arg5;

@end

