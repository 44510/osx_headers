//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseSubscriptionRequestType.h>

@class NSString;

@interface EWSPushSubscriptionRequestType : EWSBaseSubscriptionRequestType
{
    long long _StatusFrequency;
    NSString *_URL;
    BOOL _StatusFrequencyIsSpecified;
}

+ (id)definition;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(nonatomic) BOOL StatusFrequencyIsSpecified; // @synthesize StatusFrequencyIsSpecified=_StatusFrequencyIsSpecified;
@property(nonatomic) long long StatusFrequency; // @synthesize StatusFrequency=_StatusFrequency;
- (void)dealloc;

@end

