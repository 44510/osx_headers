//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TLSound : NSObject
{
    BOOL _shouldDisposeOfSoundID;
    unsigned int _soundID;
    NSString *_filePath;
}

- (void)_setSoundID:(unsigned int)arg1;
@property(nonatomic, setter=_setShouldDisposeOfSoundID:) BOOL _shouldDisposeOfSoundID; // @synthesize _shouldDisposeOfSoundID;
- (void)_setFilePath:(id)arg1;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned int soundID; // @synthesize soundID=_soundID;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 soundID:(unsigned int)arg2;

@end

