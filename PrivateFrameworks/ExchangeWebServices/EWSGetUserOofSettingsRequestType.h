//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSEmailAddress;

@interface EWSGetUserOofSettingsRequestType : EWSBaseRequestType
{
    EWSEmailAddress *_Mailbox;
}

+ (id)definition;
@property(retain, nonatomic) EWSEmailAddress *Mailbox; // @synthesize Mailbox=_Mailbox;
- (void)dealloc;

@end

