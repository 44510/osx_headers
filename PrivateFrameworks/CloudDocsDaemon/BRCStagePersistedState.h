//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class BRCDatabaseManager, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface BRCStagePersistedState : NSObject <NSSecureCoding>
{
    long long _latestGCStartTime;
    BRCDatabaseManager *_dbManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInDBManager:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setLatestGCStartTime:(long long)arg1;
- (long long)timeSinceLatestGCStartTime;
- (id)init;

@end
