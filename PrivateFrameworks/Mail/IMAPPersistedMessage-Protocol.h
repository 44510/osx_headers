//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCChanging.h"

@class NSData, NSManagedObjectID, NSString;

@protocol IMAPPersistedMessage <MCChanging>
@property(readonly, nonatomic) BOOL persistentIDType;
- (void)appendData:(NSData *)arg1 part:(NSString *)arg2;
- (void)setData:(NSData *)arg1 isPartial:(BOOL)arg2;
- (void)setRemoteID:(NSString *)arg1;
- (NSString *)remoteID;

@optional
- (NSManagedObjectID *)managedObjectID;
- (long long)libraryID;
@end

