//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

@interface NSOutputStream (NSOutputStream)
+ (id)outputStreamWithURL:(id)arg1 append:(BOOL)arg2;
+ (id)outputStreamToFileAtPath:(id)arg1 append:(BOOL)arg2;
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
+ (id)outputStreamToMemory;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_cfTypeID;
- (BOOL)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
@end

