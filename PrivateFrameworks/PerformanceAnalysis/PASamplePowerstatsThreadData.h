//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PerformanceAnalysis/PASampleThreadData.h>

@interface PASamplePowerstatsThreadData : PASampleThreadData
{
    unsigned int _powerstatsFlags;
}

- (unsigned int)powerstatsFlags;
- (id)initWithStackshotThread:(id)arg1 andTimeInsensitiveTaskData:(id)arg2 andLeafFrame:(id)arg3;
- (BOOL)hasValidPowerstatsFlags;

@end

