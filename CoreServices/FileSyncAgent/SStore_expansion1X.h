//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ManagedObject_expansion.h"

@class NSDictionary;

@interface SStore_expansion1X : ManagedObject_expansion
{
    NSDictionary *_storeSyncHistory;
}

+ (unsigned short)currentVersion;
@property(retain, nonatomic) NSDictionary *storeSyncHistory; // @synthesize storeSyncHistory=_storeSyncHistory;
- (void)encodeToStream:(id)arg1;
- (void)dealloc;
- (id)initWithStream:(id)arg1;

@end

