//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLSeamlessOpenerDelegate.h"

@class NSString;

@interface TSeamlessOpenerDelegate : NSObject <QLSeamlessOpenerDelegate>
{
    struct shared_ptr<TSeamlessOpenerSpawnOrigin> _spawnOrigin;
}

+ (id)openerDelegateWithSpawnOrigin:(shared_ptr_3b64c573)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)seamlessOpener:(id)arg1 failedToOpenItems:(id)arg2 withError:(id)arg3;
- (int)seamlessOpener:(id)arg1 supportForPreviewItem:(id)arg2;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (id)seamlessOpener:(id)arg1 sourcePreviewViewForPreviewItem:(id)arg2;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

