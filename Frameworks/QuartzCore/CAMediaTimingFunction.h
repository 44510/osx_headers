//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface CAMediaTimingFunction : NSObject <NSCoding>
{
    struct CAMediaTimingFunctionPrivate *_priv;
}

+ (id)functionWithName:(id)arg1;
+ (id)functionWithControlPoints:(float)arg1:(float)arg2:(float)arg3:(float)arg4;
+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)getControlPointAtIndex:(unsigned long long)arg1 values:(float [2])arg2;
- (void)_getPoints:(double *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithControlPoints:(float)arg1:(float)arg2:(float)arg3:(float)arg4;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CAMLType;
- (float)_solveForInput:(float)arg1;

@end

