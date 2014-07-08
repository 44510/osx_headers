//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

#import "CoreDAVTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSMutableArray, NSMutableSet, NSSet, NSString, NSURL;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate>
{
    BOOL _serverSupportsExpandPropertyReport;
    NSURL *_principalURL;
    NSMutableArray *_readPrincipalURLs;
    NSMutableArray *_writePrincipalURLs;
    NSMutableSet *_writeDetails;
    NSMutableSet *_readDetails;
}

@property(retain, nonatomic) NSMutableSet *readDetails; // @synthesize readDetails=_readDetails;
@property(retain, nonatomic) NSMutableSet *writeDetails; // @synthesize writeDetails=_writeDetails;
@property(retain, nonatomic) NSMutableArray *writePrincipalURLs; // @synthesize writePrincipalURLs=_writePrincipalURLs;
@property(retain, nonatomic) NSMutableArray *readPrincipalURLs; // @synthesize readPrincipalURLs=_readPrincipalURLs;
@property(retain, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property(nonatomic) BOOL serverSupportsExpandPropertyReport; // @synthesize serverSupportsExpandPropertyReport=_serverSupportsExpandPropertyReport;
@property(readonly, retain, nonatomic) NSSet *readWritePrincipalDetails;
@property(readonly, retain, nonatomic) NSSet *readOnlyPrincipalDetails;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)_popFromArray:(id)arg1;
- (void)_getPrincipalDetailsForURL:(id)arg1;
- (void)_processDetailsFromMultiStatus:(id)arg1 allowWrite:(BOOL)arg2;
- (id)_mappingsForPrincipalDetails;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

