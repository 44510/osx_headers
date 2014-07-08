//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBObject.h"

@class NSArray, NSDate, NSString;

@interface _AMiTunes8PrintSettings : SBObject
{
}

- (void)playOnce:(BOOL)arg1;
- (void)open;
- (BOOL)exists;
- (id)duplicateTo:(id)arg1;
- (void)delete;
- (void)close;
- (void)printPrintDialog:(BOOL)arg1 withProperties:(id)arg2 kind:(int)arg3 theme:(id)arg4;
@property(readonly, copy) NSString *targetPrinter;
@property(readonly, copy) NSString *faxNumber;
@property(readonly, copy) NSArray *printerFeatures;
@property(readonly, copy) NSDate *requestedPrintTime;
@property(readonly) int errorHandling;
@property(readonly) long long pagesDown;
@property(readonly) long long pagesAcross;
@property(readonly) long long endingPage;
@property(readonly) long long startingPage;
@property(readonly) BOOL collating;
@property(readonly) long long copies;

@end

