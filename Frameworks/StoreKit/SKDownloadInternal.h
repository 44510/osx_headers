//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSNumber, NSString, NSURL;

@interface SKDownloadInternal : NSObject
{
    NSString *_assetID;
    NSString *_productID;
    long long _state;
    float _progress;
    NSError *_error;
    NSURL *_contentURL;
    double _timeRemaining;
    NSNumber *_contentLength;
    NSString *_contentVersion;
}

@property(retain) NSString *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(retain) NSNumber *contentLength; // @synthesize contentLength=_contentLength;
@property(retain) NSString *productID; // @synthesize productID=_productID;
@property double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(retain) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(retain) NSError *error; // @synthesize error=_error;
@property float progress; // @synthesize progress=_progress;
@property long long state; // @synthesize state=_state;
@property(retain) NSString *asset; // @synthesize asset=_assetID;
- (void)dealloc;

@end

