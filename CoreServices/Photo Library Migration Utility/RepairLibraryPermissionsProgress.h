//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RKRepairLibraryPermissionsProgress.h"

@class ProgressController;

@interface RepairLibraryPermissionsProgress : NSObject <RKRepairLibraryPermissionsProgress>
{
    ProgressController *_progressController;
}

@property(retain) ProgressController *progressController; // @synthesize progressController=_progressController;
- (void)setCurrentCount:(unsigned long long)arg1;
- (unsigned long long)currentCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setProgress:(double)arg1;
- (double)progress;
- (void)dealloc;
- (id)initWithProgressController:(id)arg1;

@end

