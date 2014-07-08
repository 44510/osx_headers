//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSDocument, NSFileVersion, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSDocumentRevisionsLoadingOperation : NSOperation
{
    NSFileVersion *version;
    NSMutableArray *documentConsumers;
    CDUnknownBlockType finalCompletionBlock;
    NSDocument *document;
    BOOL documentLoadingComplete;
    BOOL hasWaiter;
}

@property(retain) NSDocument *document; // @synthesize document;
- (void)waitUntilFinished;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addDocumentConsumer:(CDUnknownBlockType)arg1;
- (void)main;
- (void)_documentLoadingDidComplete;
- (void)dealloc;
- (id)initWithVersion:(id)arg1;

@end

