//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OABFill : NSObject
{
}

+ (id)readFillFromFillPropertiesManager:(id)arg1 colorPalette:(id)arg2;
+ (void)readImageFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3;
+ (void)readGradientFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3;
+ (void)addStopsFromArray:(const struct OABGradientStop *)arg1 stopCount:(int)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 fillPropertiesManager:(id)arg7;

@end

