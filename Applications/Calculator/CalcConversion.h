//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CalcConversion : NSObject
{
    NSString *_type;
    NSString *_from;
    NSString *_to;
}

+ (id)conversionWithDictionary:(id)arg1;
+ (id)conversionWithType:(id)arg1 fromUnit:(id)arg2 toUnit:(id)arg3;
@property(readonly) NSString *to; // @synthesize to=_to;
@property(readonly) NSString *from; // @synthesize from=_from;
@property(readonly) NSString *type; // @synthesize type=_type;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOfType:(id)arg1;
@property(readonly) NSString *localizedTo;
@property(readonly) NSString *localizedFrom;
@property(readonly) NSString *localizedTitle;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)initWithType:(id)arg1 fromUnit:(id)arg2 toUnit:(id)arg3;

@end

