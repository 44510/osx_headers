//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseFolderIdType.h>

@class EWSEmailAddressType, NSString;

@interface EWSDistinguishedFolderIdType : EWSBaseFolderIdType
{
    long long _Id;
    NSString *_ChangeKey;
    EWSEmailAddressType *_Mailbox;
}

+ (id)definition;
@property(retain, nonatomic) EWSEmailAddressType *Mailbox; // @synthesize Mailbox=_Mailbox;
@property(copy, nonatomic) NSString *ChangeKey; // @synthesize ChangeKey=_ChangeKey;
@property(nonatomic) long long Id; // @synthesize Id=_Id;
- (id)description;
- (void)dealloc;

@end

