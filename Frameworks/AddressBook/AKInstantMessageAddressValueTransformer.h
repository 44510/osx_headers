//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class CNInstantMessageAddress;

__attribute__((visibility("hidden")))
@interface AKInstantMessageAddressValueTransformer : NSValueTransformer
{
    CNInstantMessageAddress *_lastInstantMessageAddress;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
@property(retain, nonatomic) CNInstantMessageAddress *lastInstantMessageAddress; // @synthesize lastInstantMessageAddress=_lastInstantMessageAddress;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

