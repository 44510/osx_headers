//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVPlace.h"

@class GEORPProblemStatus;

__attribute__((visibility("hidden")))
@interface NVRPPlace : NVPlace
{
    BOOL _canOpenPopover;
    GEORPProblemStatus *_status;
}

@property(nonatomic) BOOL canOpenPopover; // @synthesize canOpenPopover=_canOpenPopover;
@property(retain, nonatomic) GEORPProblemStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end
