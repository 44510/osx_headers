//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PVPDFPageElement;

@interface PVBookmark : NSObject
{
    NSString *_UUID;
    NSString *_pageSummary;
    PVPDFPageElement *_pageElement;
}

@property(retain, nonatomic) PVPDFPageElement *pageElement; // @synthesize pageElement=_pageElement;
@property(retain, nonatomic) NSString *pageSummary; // @synthesize pageSummary=_pageSummary;
@property(readonly) NSString *UUID; // @synthesize UUID=_UUID;
- (oneway void)release;
- (id)retain;
@property(readonly) unsigned long long pageNumber;
@property(readonly) unsigned long long pageIndex;
@property(readonly) NSString *pageLabel;
- (id)description;
- (void)dealloc;
- (id)initWithPDFPageElement:(id)arg1 UUID:(id)arg2;

@end

