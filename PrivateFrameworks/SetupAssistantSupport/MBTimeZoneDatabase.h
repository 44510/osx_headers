//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SetupAssistantSupport/TimeZoneDatabase.h>

@interface MBTimeZoneDatabase : TimeZoneDatabase
{
}

- (id)timeZonesDictionary;
- (id)citiesWithGMTOffsetInSeconds:(long long)arg1;
- (id)bestMatchTimeZoneWithCountryCode:(id)arg1 cityName:(id)arg2 matchedCity:(id *)arg3;
- (id)bestMatchTimeZoneWithGMTOffsetInSeconds:(long long)arg1 countryCode:(id)arg2 stateName:(id)arg3 cityName:(id)arg4 matchedCity:(id *)arg5;

@end

