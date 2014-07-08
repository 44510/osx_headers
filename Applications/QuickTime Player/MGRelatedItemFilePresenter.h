//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFilePresenter.h"

@class NSOperationQueue, NSString, NSURL;

@interface MGRelatedItemFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_originalItemURL;
    NSURL *_relatedItemURL;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)initWithOriginalItemURL:(id)arg1 relatedItemURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

