//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray;

@interface EWSGetStreamingEventsResponseMessageType : EWSResponseMessageType
{
    NSArray *_Notifications;
    NSArray *_ErrorSubscriptionIds;
    BOOL _ConnectionStatus;
}

+ (id)definition;
@property(nonatomic) BOOL ConnectionStatus; // @synthesize ConnectionStatus=_ConnectionStatus;
@property(copy, nonatomic) NSArray *ErrorSubscriptionIds; // @synthesize ErrorSubscriptionIds=_ErrorSubscriptionIds;
@property(copy, nonatomic) NSArray *Notifications; // @synthesize Notifications=_Notifications;
- (void)dealloc;

@end

