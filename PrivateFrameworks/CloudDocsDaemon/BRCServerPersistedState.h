//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "PQLBindable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable>
{
    long long _nextRank;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long nextRank; // @synthesize nextRank=_nextRank;
- (void)saveToDB:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithState:(id)arg1;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

