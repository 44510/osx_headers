//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface CAConstraint : NSObject <NSCoding>
{
    NSString *_srcId;
    unsigned int _srcAttr:16;
    unsigned int _attr:16;
    double _scale;
    double _offset;
}

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3;
+ (id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 offset:(double)arg4;
+ (id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 scale:(double)arg4 offset:(double)arg5;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)description;
@property(readonly) double offset;
@property(readonly) double scale;
@property(readonly) int attribute;
@property(readonly) int sourceAttribute;
@property(readonly) NSString *sourceName;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 scale:(double)arg4 offset:(double)arg5;

@end

