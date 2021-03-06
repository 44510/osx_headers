//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface CALAbstractView : NSObject
{
    BOOL _active;
    int _clients;
    NSString *_name;
    NSMutableDictionary *_occurrences;
    BOOL _postDetailledNotifications;
}

- (void)dealloc;
- (void)setPostDetailledNotifications:(BOOL)arg1;
- (BOOL)postDetailledNotifications;
- (void)setName:(id)arg1;
- (id)name;
- (id)occurrences;
- (id)occurrencesIndex;
- (id)description;
- (BOOL)isActive;
- (id)init;
- (void)fireContentChangeNotificationWithAddedOccurrences:(id)arg1 removedOccurrences:(id)arg2 modifiedOccurrencesOld:(id)arg3 modifiedOccurrencesNew:(id)arg4;
- (void)fireContentChangeNotification;
- (void)setResults:(id)arg1;
- (void)updateResults:(id)arg1 fromEntities:(id)arg2;
- (void)setStorageFromArray:(id)arg1;
- (id)removeEntitiesFromResults:(id)arg1;
- (BOOL)noClients;
- (void)decrementClientCount;
- (void)incrementClientCount;
- (void)setActive:(BOOL)arg1;
- (void)reset:(id)arg1;

@end

