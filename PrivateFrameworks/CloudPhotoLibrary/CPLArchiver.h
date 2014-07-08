//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@interface CPLArchiver : NSCoder
{
    id _archive;
    id _archiveCursor;
    id _rootObject;
    BOOL _forDisplay;
}

+ (id)unarchiveObjectWithData:(id)arg1 ofClass:(Class)arg2;
+ (id)fullDescriptionForObject:(id)arg1;
+ (id)displayablePropertyListWithRootObject:(id)arg1;
+ (id)archivedPropertyListWithRootObject:(id)arg1;
+ (id)archivedDataWithRootObject:(id)arg1;
@property(readonly, nonatomic) BOOL forDisplay; // @synthesize forDisplay=_forDisplay;
- (void).cxx_destruct;
- (struct CGRect)decodeRectForKey:(id)arg1;
- (struct CGSize)decodeSizeForKey:(id)arg1;
- (struct CGPoint)decodePointForKey:(id)arg1;
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (id)decodePropertyListForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (long long)decodeIntegerForKey:(id)arg1;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (struct _NSZone *)objectZone;
- (void)setObjectZone:(struct _NSZone *)arg1;
- (id)decodePropertyList;
- (void)encodePropertyList:(id)arg1;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)decodeObject;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (id)initWithArchive:(id)arg1 rootClass:(Class)arg2;
- (id)rootObject;
- (id)initWithRootObject:(id)arg1 forDisplay:(BOOL)arg2;
- (id)archivedPropertyList;
- (BOOL)allowsKeyedCoding;

@end

