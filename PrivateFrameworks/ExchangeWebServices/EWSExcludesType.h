//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSSearchExpressionType.h>

@class EWSBasePathToElementType, EWSExcludesValueType;

@interface EWSExcludesType : EWSSearchExpressionType
{
    EWSBasePathToElementType *_Path;
    EWSExcludesValueType *_Bitmask;
}

+ (id)definition;
@property(retain, nonatomic) EWSExcludesValueType *Bitmask; // @synthesize Bitmask=_Bitmask;
@property(retain, nonatomic) EWSBasePathToElementType *Path; // @synthesize Path=_Path;
- (id)description;
- (void)dealloc;

@end

