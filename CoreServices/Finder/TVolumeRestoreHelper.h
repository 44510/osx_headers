//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVolumeRestoreHelper : NSObject
{
    _Bool _eraseInProgress;
    _Bool _eraseSuccessful;
}

+ (id)xattrStringValueForKey:(id)arg1 url:(id)arg2;
- (_Bool)doesSnapshotPathSupportBooting:(id)arg1;
- (id)copyBoardIDString;
- (_Bool)isSnapshotPathAVolume:(id)arg1;
- (_Bool)isAtLeastMountainLion:(id)arg1;
- (_Bool)isSystemVolume:(id)arg1;

@end

