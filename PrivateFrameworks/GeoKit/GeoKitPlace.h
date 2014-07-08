//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSNumber, NSSet, NSString;

@interface GeoKitPlace : NSManagedObject
{
}

+ (id)populationSortDescriptor;
+ (id)arrayWithPopulationSortDescriptor;
- (BOOL)isEqualToPlace:(id)arg1;
- (id)displayName;
- (id)_displayNameWithSelector:(SEL)arg1;
- (struct CGPoint)longLatPoint;
- (id)localizedNamesDumpDictionary;

// Remaining properties
@property(retain, nonatomic) NSNumber *embargo; // @dynamic embargo;
@property(retain, nonatomic) NSNumber *geonameid; // @dynamic geonameid;
@property(retain, nonatomic) NSNumber *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSSet *localizedNames; // @dynamic localizedNames;
@property(retain, nonatomic) NSNumber *longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *population; // @dynamic population;

@end

