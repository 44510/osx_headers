//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@interface NSCoder (CPExtensions)
- (Class)decodeClassForKey:(id)arg1;
- (void)decodeArrayOfNReal:(double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (struct _NComplex)decodeNComplexForKey:(id)arg1;
- (double)decodeNRealForKey:(id)arg1;
- (struct _GPoint3D)decodeGPoint3D;
- (struct _GRange)decodeGRangeForKey:(id)arg1;
- (unsigned long long)decodeUnsignedIntForKey:(id)arg1;
- (unsigned long long)decodeUnsignedInt;
- (void)encodeClass:(Class)arg1 forKey:(id)arg2;
- (void)encodeArrayOfNReal:(double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeNComplex:(struct _NComplex)arg1 forKey:(id)arg2;
- (void)encodeNReal:(double)arg1 forKey:(id)arg2;
- (void)encodeGPoint3D:(struct _GPoint3D)arg1;
- (void)encodeGRange:(struct _GRange)arg1 forKey:(id)arg2;
- (void)encodeUnsignedInt:(unsigned long long)arg1 forKey:(id)arg2;
- (void)encodeUnsignedInt:(unsigned long long)arg1;
@end

