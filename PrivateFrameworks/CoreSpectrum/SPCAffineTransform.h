//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface SPCAffineTransform : NSObject <NSCoding, NSCopying>
{
    struct CGAffineTransform _CGTransform;
}

+ (id)identityTransform;
@property(nonatomic) struct CGAffineTransform CGTransform; // @synthesize CGTransform=_CGTransform;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)prependTransform:(id)arg1;
- (id)appendTransform:(id)arg1;
- (id)invert;
- (id)scaleByX:(double)arg1 y:(double)arg2;
- (id)rotateByDegrees:(double)arg1;
- (id)translateByX:(double)arg1 y:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCGAffineTransform:(struct CGAffineTransform)arg1;
- (id)init;

@end

