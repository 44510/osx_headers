//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PVImageEditOperation.h"

@interface PVImageEditOperationFlip : PVImageEditOperation
{
    unsigned long long _mode;
}

@property unsigned long long mode; // @synthesize mode=_mode;
- (id)filterChainForSourceImage:(id)arg1;
- (void)concatOperation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(unsigned long long)arg1;

@end

