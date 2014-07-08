//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface OSISystemProfiler : NSObject
{
    BOOL _isSSD;
    unsigned long long _extractorSpeed;
    unsigned long long _deletionSpeed;
    double _migrationTime;
    NSDictionary *_userMachineDictionary;
}

+ (id)sharedProfiler;
@property BOOL isSSD; // @synthesize isSSD=_isSSD;
@property(retain) NSDictionary *userMachineDictionary; // @synthesize userMachineDictionary=_userMachineDictionary;
@property double migrationTime; // @synthesize migrationTime=_migrationTime;
@property unsigned long long deletionSpeed; // @synthesize deletionSpeed=_deletionSpeed;
@property unsigned long long extractorSpeed; // @synthesize extractorSpeed=_extractorSpeed;
- (void)dumpFinalStats;
- (void)populateStats;
- (id)modelName;
- (void)setTarget:(id)arg1;
- (id)initWithDisk:(id)arg1;

@end

