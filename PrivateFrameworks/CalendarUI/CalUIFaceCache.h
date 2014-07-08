//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCache.h"

@class NSMutableSet, NSObject<CalUIFaceClient>;

@interface CalUIFaceCache : NSCache
{
    NSObject<CalUIFaceClient> *_faceDelegate;
    NSMutableSet *_pendingRequests;
}

@property(retain) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property __weak NSObject<CalUIFaceClient> *faceDelegate; // @synthesize faceDelegate=_faceDelegate;
- (void).cxx_destruct;
- (id)faceForManagedMessage:(id)arg1 withSize:(double)arg2;

@end

