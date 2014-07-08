//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, NSDictionary, NSLock, NSMutableArray, NSNumber, NSString, NSTimer, XSLocalizedStringsCache;

@interface XSGraphDataSet : NSObject <NSCoding>
{
    NSDictionary *_variableResolutions;
    NSString *_identifier;
    NSString *_name;
    NSString *_description;
    NSString *_unitLabel;
    double _valueMultiplier;
    XSGraphDataSet *_baselineDataSet;
    BOOL _baselineDataSetOverlaps;
    long long _baselineDataSetAlignmentOffset;
    unsigned long long _baselineDataSetAlignmentMaxIndex;
    NSDate *_startDate;
    NSDate *_endDate;
    NSMutableArray *_dates;
    NSMutableArray *_values;
    NSNumber *_maximumPossibleValue;
    NSString *_aslSender;
    NSString *_aslMessageKey;
    XSLocalizedStringsCache *_defaultLocalizedStringsCache;
    XSLocalizedStringsCache *_localizedStringsCache;
    NSDictionary *_userInfo;
    NSMutableArray *_usageMarks;
    NSLock *_usageMarksLock;
    NSTimer *_garbageCollectionSweepTimer;
    NSLock *_lock;
}

+ (CDUnknownBlockType)comparator;
@property(retain) XSLocalizedStringsCache *defaultLocalizedStringsCache; // @synthesize defaultLocalizedStringsCache=_defaultLocalizedStringsCache;
@property(retain) XSLocalizedStringsCache *localizedStringsCache; // @synthesize localizedStringsCache=_localizedStringsCache;
@property(retain) XSGraphDataSet *baselineDataSet; // @synthesize baselineDataSet=_baselineDataSet;
@property(retain) NSTimer *garbageCollectionSweepTimer; // @synthesize garbageCollectionSweepTimer=_garbageCollectionSweepTimer;
@property(retain) NSLock *usageMarksLock; // @synthesize usageMarksLock=_usageMarksLock;
@property(retain) NSMutableArray *usageMarks; // @synthesize usageMarks=_usageMarks;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property double valueMultiplier; // @synthesize valueMultiplier=_valueMultiplier;
@property(retain) NSString *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(copy) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) NSNumber *maximumPossibleValue; // @synthesize maximumPossibleValue=_maximumPossibleValue;
@property(retain) NSArray *values; // @synthesize values=_values;
@property(retain) NSArray *dates; // @synthesize dates=_dates;
@property(retain) NSString *description; // @synthesize description=_description;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *aslMessageKey; // @synthesize aslMessageKey=_aslMessageKey;
@property(retain) NSString *aslSender; // @synthesize aslSender=_aslSender;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSDictionary *variableResolutions; // @synthesize variableResolutions=_variableResolutions;
- (id)localizedStringForString:(id)arg1;
- (id)localizedStringsCacheFromBundleAtPath:(id)arg1 table:(id)arg2;
- (void)sweepForUnusedData:(id)arg1;
- (void)markValuesAsActiveBetween:(id)arg1 and:(id)arg2;
- (void)optimizeBaselineDataSet;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)dateAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDataPoints;
- (id)dataSetForValuesBetween:(id)arg1 and:(id)arg2;
- (void)setValuesForDatesWithDataSet:(id)arg1;
- (void)removeValuesBetween:(id)arg1 and:(id)arg2;
- (void)setValue:(id)arg1 forDate:(id)arg2;
- (unsigned long long)indexOfDataPointOnOrAfterDate:(id)arg1;
- (unsigned long long)indexOfDataPointOnOrBeforeDate:(id)arg1;
- (id)valueForDate:(id)arg1;
- (id)scaledValue:(id)arg1;
- (id)unitLabelForValue:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)loadMetadata;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 variableResolutions:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

