//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOGeocodeRequest, NSString;

@interface CLGeocoderInternal : NSObject
{
    CDUnknownBlockType _geocodeCompletionHandler;
    GEOGeocodeRequest *_request;
    struct dispatch_queue_s *_queue;
    struct dispatch_semaphore_s *_ccSema;
    NSString *_cachedCountryCode;
}

@end

