//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PAMemRange;

@interface PARangeContainer : NSObject
{
    PAMemRange *range;
}

@property(retain) PAMemRange *range; // @synthesize range;
- (long long)compareRange:(id)arg1 equalWhenContained:(BOOL)arg2 equalWhenIntersects:(BOOL)arg3;

@end

