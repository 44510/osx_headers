//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateSetValue : CAStateElement
{
    NSString *_keyPath;
    id _value;
}

@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (void)apply:(id)arg1;
- (BOOL)matches:(id)arg1;
@property(retain, nonatomic) id value;

@end

