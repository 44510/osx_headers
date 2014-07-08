//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiUpdater.h>

@class LiClientConnection;

@interface LiClientUpdater : LiUpdater
{
    LiClientConnection *_connection;
}

@property __weak LiClientConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)updateProperties:(id)arg1 forModelId:(unsigned long long)arg2 forClient:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateProperties:(id)arg1 withValues:(id)arg2 forModelIds:(id)arg3 forClient:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateProperties:(id)arg1 withValues:(id)arg2 forModelId:(unsigned long long)arg3 forClient:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateProperties:(id)arg1 withValues:(id)arg2 forModel:(id)arg3 forClient:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateProperty:(id)arg1 withValue:(id)arg2 forModelIds:(id)arg3 forClient:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateProperty:(id)arg1 withValue:(id)arg2 forModel:(id)arg3 forClient:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateProperty:(id)arg1 withValue:(id)arg2 forModelId:(unsigned long long)arg3 forClient:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithTable:(id)arg1 connection:(id)arg2;

@end

