//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUnarchiver.h"

@interface CPPseudoKeyedUnarchiver : NSUnarchiver
{
}

- (struct CGRect)decodeRectForKey:(id)arg1;
- (struct CGSize)decodeSizeForKey:(id)arg1;
- (struct CGPoint)decodePointForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (BOOL)decodeBoolForKey:(id)arg1;

@end

