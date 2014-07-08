//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSOperationQueue;

@interface MFRemoteAttachmentManager : NSObject
{
    NSMutableSet *_attachments;
    NSOperationQueue *_downloadQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (id)_attachmentForURL:(id)arg1 filename:(id)arg2 mimeType:(id)arg3 filesize:(long long)arg4 downloadDirectory:(id)arg5 isImageArchive:(BOOL)arg6 isAutoArchive:(BOOL)arg7;
- (id)remoteAttachmentsByURLForMessage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

