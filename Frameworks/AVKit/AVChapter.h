//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSImage, NSString;

@interface AVChapter : NSObject <NSCopying>
{
    NSImage *_image;
    CDUnknownBlockType _imageBlock;
    double _startTime;
    double _duration;
    unsigned long long _number;
    NSString *_title;
}

+ (id)chapterAtTime:(double)arg1 inChapters:(id)arg2;
+ (id)playbackChapterWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(CDUnknownBlockType)arg5;
+ (void)initialize;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly) unsigned long long number; // @synthesize number=_number;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(CDUnknownBlockType)arg5;

@end

