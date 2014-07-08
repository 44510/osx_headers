//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LiEncoding.h"

@class NSString;

@interface LiProgress : NSObject <LiEncoding>
{
    long long _totalUnitCount;
    long long _completedUnitCount;
}

+ (id)progressWithCount:(long long)arg1 completed:(long long)arg2;
@property(readonly, nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(readonly, nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)initWithCount:(long long)arg1 completed:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

