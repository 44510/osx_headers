//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiLoader.h>

@class LiClientConnection;

@interface LiClientLoader : LiLoader
{
    LiClientConnection *_connection;
}

@property __weak LiClientConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)loadProperties:(id)arg1 forModelIdList:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadProperties:(id)arg1 forModelId:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dispatchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTable:(id)arg1 connection:(id)arg2;

@end

