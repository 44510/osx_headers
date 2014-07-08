//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber;

@interface CoreWiFiWPSNetwork : NSObject
{
    NSData *EAPIdentity;
    NSData *EAPType;
    NSNumber *enabled8021X;
    NSNumber *keyProvidedAutomatically;
    NSData *MACAddress;
    NSData *networkKey;
    NSNumber *networkKeyIndex;
}

@property(retain, nonatomic) NSNumber *networkKeyIndex; // @synthesize networkKeyIndex;
@property(retain, nonatomic) NSData *networkKey; // @synthesize networkKey;
@property(retain, nonatomic) NSData *MACAddress; // @synthesize MACAddress;
@property(retain, nonatomic) NSNumber *keyProvidedAutomatically; // @synthesize keyProvidedAutomatically;
@property(retain, nonatomic) NSNumber *enabled8021X; // @synthesize enabled8021X;
@property(retain, nonatomic) NSData *EAPType; // @synthesize EAPType;
@property(retain, nonatomic) NSData *EAPIdentity; // @synthesize EAPIdentity;
- (id)description;
- (void)dealloc;
- (id)init;

@end

