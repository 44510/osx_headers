//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSNumber, NSString;

@interface ICCameraProperties : NSObject
{
    NSString *_mountPoint;
    unsigned long long _contentCatalogPercentCompleted;
    BOOL _batteryLevelAvailable;
    unsigned long long _batteryLevel;
    BOOL _hasTemporaryStore;
    BOOL _isLocked;
    NSMutableArray *_contents;
    NSMutableArray *_mediaFiles;
    int _mediaFilesLock;
    double _timeOffset;
    unsigned long long _estimatedCountOfMediafiles;
    BOOL _contentReceived;
    int _notificationQueueLock;
    BOOL _notificationQueueSuspended;
    struct dispatch_queue_s *_notificationQueue;
    struct dispatch_group_s *_notificationGroup;
    struct dispatch_group_s *_getThumbnailGroup;
    struct dispatch_group_s *_getMetadataGroup;
    struct dispatch_group_s *_getImageGroup;
    struct dispatch_group_s *_deleteImageGroup;
    struct dispatch_queue_s *_getThumbnailQueue;
    int _getThumbnailQueueLock;
    BOOL _getThumbnailQueueSuspended;
    struct dispatch_queue_s *_getMetadataQueue;
    int _getMetadataQueueLock;
    BOOL _getMetadataQueueSuspended;
    struct dispatch_queue_s *_getImageQueue;
    int _getImageQueueLock;
    BOOL _getImageQueueSuspended;
    struct dispatch_queue_s *_deleteImageQueue;
    int _deleteImageQueueLock;
    BOOL _deleteImageQueueSuspended;
    BOOL _isAccessRestrictedAppleDevice;
    NSNumber *_largestIndexedObjectID;
    BOOL _largestIndexedObjectExceeded;
    BOOL _tetheredCaptureEnabled;
    int _deallocPhaseLock;
    BOOL _deallocPhase;
    NSDictionary *_mobdevProperties;
}

@property(retain) NSDictionary *mobdevProperties; // @synthesize mobdevProperties=_mobdevProperties;
@property BOOL tetheredCaptureEnabled; // @synthesize tetheredCaptureEnabled=_tetheredCaptureEnabled;
@property BOOL largestIndexedObjectExceeded; // @synthesize largestIndexedObjectExceeded=_largestIndexedObjectExceeded;
@property(retain) NSNumber *largestIndexedObjectID; // @synthesize largestIndexedObjectID=_largestIndexedObjectID;
@property BOOL isAccessRestrictedAppleDevice; // @synthesize isAccessRestrictedAppleDevice=_isAccessRestrictedAppleDevice;
@property BOOL deleteImageQueueSuspended; // @synthesize deleteImageQueueSuspended=_deleteImageQueueSuspended;
@property int deleteImageQueueLock; // @synthesize deleteImageQueueLock=_deleteImageQueueLock;
@property struct dispatch_queue_s *deleteImageQueue; // @synthesize deleteImageQueue=_deleteImageQueue;
@property BOOL getImageQueueSuspended; // @synthesize getImageQueueSuspended=_getImageQueueSuspended;
@property int getImageQueueLock; // @synthesize getImageQueueLock=_getImageQueueLock;
@property struct dispatch_queue_s *getImageQueue; // @synthesize getImageQueue=_getImageQueue;
@property BOOL getMetadataQueueSuspended; // @synthesize getMetadataQueueSuspended=_getMetadataQueueSuspended;
@property int getMetadataQueueLock; // @synthesize getMetadataQueueLock=_getMetadataQueueLock;
@property struct dispatch_queue_s *getMetadataQueue; // @synthesize getMetadataQueue=_getMetadataQueue;
@property BOOL getThumbnailQueueSuspended; // @synthesize getThumbnailQueueSuspended=_getThumbnailQueueSuspended;
@property int getThumbnailQueueLock; // @synthesize getThumbnailQueueLock=_getThumbnailQueueLock;
@property struct dispatch_queue_s *getThumbnailQueue; // @synthesize getThumbnailQueue=_getThumbnailQueue;
@property struct dispatch_group_s *deleteImageGroup; // @synthesize deleteImageGroup=_deleteImageGroup;
@property struct dispatch_group_s *getImageGroup; // @synthesize getImageGroup=_getImageGroup;
@property struct dispatch_group_s *getMetadataGroup; // @synthesize getMetadataGroup=_getMetadataGroup;
@property struct dispatch_group_s *getThumbnailGroup; // @synthesize getThumbnailGroup=_getThumbnailGroup;
@property struct dispatch_group_s *notificationGroup; // @synthesize notificationGroup=_notificationGroup;
@property struct dispatch_queue_s *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property BOOL notificationQueueSuspended; // @synthesize notificationQueueSuspended=_notificationQueueSuspended;
@property int notificationQueueLock; // @synthesize notificationQueueLock=_notificationQueueLock;
@property BOOL contentReceived; // @synthesize contentReceived=_contentReceived;
@property unsigned long long estimatedCountOfMediafiles; // @synthesize estimatedCountOfMediafiles=_estimatedCountOfMediafiles;
@property double timeOffset; // @synthesize timeOffset=_timeOffset;
@property int mediaFilesLock; // @synthesize mediaFilesLock=_mediaFilesLock;
@property(retain) NSMutableArray *mediaFiles; // @synthesize mediaFiles=_mediaFiles;
@property(retain) NSMutableArray *contents; // @synthesize contents=_contents;
@property BOOL isLocked; // @synthesize isLocked=_isLocked;
@property BOOL hasTemporaryStore; // @synthesize hasTemporaryStore=_hasTemporaryStore;
@property unsigned long long batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property BOOL batteryLevelAvailable; // @synthesize batteryLevelAvailable=_batteryLevelAvailable;
@property unsigned long long contentCatalogPercentCompleted; // @synthesize contentCatalogPercentCompleted=_contentCatalogPercentCompleted;
@property(retain) NSString *mountPoint; // @synthesize mountPoint=_mountPoint;
- (void)unlockDeleteImageQueue;
- (void)lockDeleteImageQueue;
- (void)unlockImageQueue;
- (void)lockImageQueue;
- (void)unlockMetadataQueue;
- (void)lockMetadataQueue;
- (void)unlockThumbnailQueue;
- (void)lockThumbnailQueue;
- (void)unlockNotificationQueue;
- (void)lockNotificationQueue;
- (void)unlockMediaFiles;
- (void)lockMediaFiles;
- (void)setDeallocPhase:(BOOL)arg1;
- (BOOL)deallocPhase;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

