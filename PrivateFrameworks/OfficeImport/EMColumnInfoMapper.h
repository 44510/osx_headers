//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDColumnInfo;

__attribute__((visibility("hidden")))
@interface EMColumnInfoMapper : CMMapper
{
    EDColumnInfo *edColumnInfo;
    double columnWidth;
    unsigned long long columnSpan;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithDefaultWidth:(double)arg1 span:(unsigned long long)arg2 parent:(id)arg3;
- (id)initWithEDColumnInfo:(id)arg1 maxSpan:(unsigned long long)arg2 parent:(id)arg3;
- (double)columnWidth;

@end

