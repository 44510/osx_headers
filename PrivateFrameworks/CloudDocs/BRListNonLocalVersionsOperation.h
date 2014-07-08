//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSMutableArray, NSURL;

@interface BRListNonLocalVersionsOperation : NSOperation
{
    NSURL *_documentURL;
    NSMutableArray *_versions;
    NSError *_error;
    id <BRNonLocalVersionSending> _sender;
    id <BRNonLocalVersionReceiving> _receiver;
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSMutableArray *versions; // @synthesize versions=_versions;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (id)description;
- (void)start;
- (void)cancel;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)isConcurrent;
- (void)dealloc;
- (id)initWithDocumentURL:(id)arg1;

@end

