//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject
{
    id <ACDDataclassOwnersManagerProtocol> _remoteDOM;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)_connectToRemoteDataclassOwnersManager;
- (BOOL)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3;
- (id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2;
- (id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2;
- (id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2;
- (id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1;
- (id)_remoteDOM;

@end

