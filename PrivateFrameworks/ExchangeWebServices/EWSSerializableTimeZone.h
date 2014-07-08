//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSSerializableTimeZoneTime;

@interface EWSSerializableTimeZone : NSObject
{
    long long _Bias;
    EWSSerializableTimeZoneTime *_StandardTime;
    EWSSerializableTimeZoneTime *_DaylightTime;
}

+ (id)definition;
@property(retain, nonatomic) EWSSerializableTimeZoneTime *DaylightTime; // @synthesize DaylightTime=_DaylightTime;
@property(retain, nonatomic) EWSSerializableTimeZoneTime *StandardTime; // @synthesize StandardTime=_StandardTime;
@property(nonatomic) long long Bias; // @synthesize Bias=_Bias;
- (void)dealloc;
- (id)StandardTimeZoneName;
- (BOOL)isEqualToSerializableTimeZone:(id)arg1;

@end

