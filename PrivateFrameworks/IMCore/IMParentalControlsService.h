//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@interface IMParentalControlsService : NSObject
{
    BOOL _disableService;
    BOOL _forceWhiteList;
    NSSet *_whitelist;
    NSString *_name;
}

@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSSet *whitelist; // @synthesize whitelist=_whitelist;
@property BOOL forceWhiteList; // @synthesize forceWhiteList=_forceWhiteList;
@property BOOL disableService; // @synthesize disableService=_disableService;
- (void)dealloc;

@end

