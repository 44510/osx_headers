//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGJob.h"

@class MGYouTubeUnpublishOperation, NSError, NSString, NSURL;

@interface MGYouTubeUnpublishJob : MGJob
{
    MGYouTubeUnpublishOperation *_unpublishOperation;
    BOOL _progressIndeterminate;
    NSError *_error;
    NSString *_runningStatusString;
    NSString *_name;
    NSURL *_resultURL;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSURL *resultURL; // @synthesize resultURL=_resultURL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *runningStatusString; // @synthesize runningStatusString=_runningStatusString;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)operations;
- (id)finishedStatusString;
- (void)dealloc;
- (id)initWithUserID:(id)arg1 videoID:(id)arg2 authorizationToken:(id)arg3 resultURL:(id)arg4;

@end
