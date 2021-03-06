//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HiCloudManager.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface CountryManager : NSObject <HiCloudManager>
{
    NSArray *countriesForCurrentLanguage;
    NSArray *allKnownCountries;
    NSMutableArray *countriesShownToTheUser;
    NSDictionary *userSelectedCountry;
    NSString *userSelectedLocaleIdentifier;
}

+ (id)keyPathsForValuesAffectingLocationServicesAllowedInSelectedCountry;
+ (void)setSystemLocale:(id)arg1;
+ (void)setSystemCountryWithISOCode:(id)arg1;
+ (id)_getCountriesForLanguage:(id)arg1;
+ (void)_addVariantsToCountriesArray:(const struct __CFArray **)arg1;
+ (struct __CFArray *)MBGetCountryInfoForCountry:(struct __CFString *)arg1;
+ (void)AddDefaultValuesToVariant:(struct __CFDictionary *)arg1 deflt:(id)arg2;
+ (id)_countryCodeArrayToCountryInfoArray:(id)arg1;
+ (id)systemISOCountryCode;
+ (id)currentISOLanguageCode;
@property(retain) NSString *userSelectedLocaleIdentifier; // @synthesize userSelectedLocaleIdentifier;
@property(retain) NSDictionary *userSelectedCountry; // @synthesize userSelectedCountry;
@property(retain) NSArray *allKnownCountries; // @synthesize allKnownCountries;
@property(retain) NSMutableArray *countriesShownToTheUser; // @synthesize countriesShownToTheUser;
@property(retain) NSArray *countriesForCurrentLanguage; // @synthesize countriesForCurrentLanguage;
- (void)showAllCountries:(BOOL)arg1;
- (id)init;
@property(readonly) BOOL diagnosticInfoOptInInSelectedCountry;
@property(readonly) BOOL locationServicesAllowedInSelectedCountry;
- (BOOL)applySettings:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

