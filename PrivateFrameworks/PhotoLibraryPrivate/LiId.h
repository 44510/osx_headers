//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LiEncoding.h"

@class NSString;

@interface LiId : NSObject <LiEncoding>
{
    long long _idNumber;
}

+ (id)idForNumber:(long long)arg1;
@property(nonatomic) long long idNumber; // @synthesize idNumber=_idNumber;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToId:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithIdNumber:(long long)arg1;
- (void)setNextID:(long long)arg1;
- (long long)nextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

