//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ECSBGridDataSourceClient <NSObject>
- (void)setGridValue:(id)arg1 forKey:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (void)gridDataSourceInvalidatedAtRange:(struct _NSRange)arg1;
- (void)gridDataSourceInvalidated;
@end

