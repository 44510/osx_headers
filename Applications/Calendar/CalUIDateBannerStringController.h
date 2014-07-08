//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary;

@interface CalUIDateBannerStringController : NSObject
{
    NSHashTable *_subscribers;
    NSMutableDictionary *_requests;
    long long _currentFormatIdx;
}

@property long long currentFormatIdx; // @synthesize currentFormatIdx=_currentFormatIdx;
@property(retain) NSMutableDictionary *requests; // @synthesize requests=_requests;
@property(retain) NSHashTable *subscribers; // @synthesize subscribers=_subscribers;
- (void).cxx_destruct;
- (void)removeSubscriber:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (void)removeRequstForFormat:(long long)arg1;
- (void)addRequestForFormat:(long long)arg1;
- (void)_updateSubscribers;
- (id)init;

@end

