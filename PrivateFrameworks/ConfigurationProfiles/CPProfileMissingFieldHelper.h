//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPProfileMissingFieldHelperProtocol.h"

@class NSString;

@interface CPProfileMissingFieldHelper : NSObject <CPProfileMissingFieldHelperProtocol>
{
    id <CPProfileMissingFieldHelperProtocol> fImpl;
}

+ (id)helperForPayload:(id)arg1 forProfile:(id)arg2 intoResults:(id)arg3;
- (void)addMissingField:(id)arg1 forKey:(id)arg2 isRequired:(BOOL)arg3 useSecureEntry:(BOOL)arg4;
- (void)startSection:(id)arg1;
- (void)setPayloadHeader:(id)arg1;
- (void)setPayloadIconImagePath:(id)arg1 title:(id)arg2;
- (_Bool)isKeyMissing:(id)arg1;
- (void)dealloc;
- (id)initWithImpl:(id)arg1;
- (id)initForPayload:(id)arg1 forProfile:(id)arg2 intoResults:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

