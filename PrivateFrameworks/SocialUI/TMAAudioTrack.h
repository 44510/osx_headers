//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSURL;

@interface TMAAudioTrack : NSObject
{
    NSString *_trackTitle;
    NSNumber *_trackNumber;
    NSString *_artistTitle;
    NSNumber *_duration;
    NSURL *_fileURL;
}

@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *artistTitle; // @synthesize artistTitle=_artistTitle;
@property(retain, nonatomic) NSNumber *trackNumber; // @synthesize trackNumber=_trackNumber;
@property(retain, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
- (void)dealloc;
- (id)initWithTrackTitle:(id)arg1;

@end

