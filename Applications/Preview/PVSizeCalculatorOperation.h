//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class PVSizeCalculatorImageRep;

@interface PVSizeCalculatorOperation : NSOperation
{
    PVSizeCalculatorImageRep *_imageRep;
    long long _outputSize;
}

- (long long)outputSize;
- (id)imageRep;
- (void)main;
- (void)dealloc;
- (id)initWithImageRep:(id)arg1;

@end

