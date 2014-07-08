//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLayouting.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary;

@interface GAttributeSet : NSObject <NSCopying, NSCoding, GLayouting>
{
    NSMutableDictionary *mDictionary;
}

+ (BOOL)attributeKeyNeedsRedraw:(id)arg1;
+ (id)attributeSetWithDictionary:(id)arg1;
+ (id)attributeSet;
- (void)takeLayoutFrom:(id)arg1;
- (void)addLayoutTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)multipleValueForKey:(id)arg1;
- (id)attribute:(id)arg1;
- (void)removeAttribute:(id)arg1;
- (void)replaceAttributes:(id)arg1;
- (void)addAttributes:(id)arg1;
- (void)mergeAttributes:(id)arg1 except:(id)arg2;
- (void)mergeAttributes:(id)arg1;
- (void)mergeAttribute:(id)arg1 with:(id)arg2;
- (void)setAttribute:(id)arg1 to:(id)arg2;
- (id)dictionary;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

