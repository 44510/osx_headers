//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMALRock.h>

@class XMSystemProfile;

@interface XMSystemProfileRock : SMALRock
{
    XMSystemProfile *_profile;
}

+ (id)rockID;
+ (id)rockWithPayload:(id)arg1;
@property(retain) XMSystemProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)description;
- (BOOL)success;
- (id)result;
- (BOOL)expectsAResult;
- (BOOL)setResult:(id)arg1;
- (id)requestPayload;
- (id)_initWithProfile:(id)arg1;

@end

