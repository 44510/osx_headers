//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HVHelpURLHandler.h"

#import "HPDQueryDelegate.h"

@class NSString;

@interface HVAnchorURLHandler : HVHelpURLHandler <HPDQueryDelegate>
{
    BOOL _isLoadless;
}

- (BOOL)isLoadless;
- (void)helpQueryDidFinishSearching:(id)arg1;
- (void)helpQuery:(id)arg1 didEncounterError:(id)arg2;
- (void)helpQuery:(id)arg1 didReturnResults:(id)arg2;
- (id)nextURL;
- (id)process;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

