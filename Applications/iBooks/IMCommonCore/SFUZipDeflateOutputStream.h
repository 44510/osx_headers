//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFUOutputStream.h"

@class NSString;

@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mOutputStream;
    struct z_stream_s mDeflateStream;
    char *mOutBuffer;
}

- (id)inputStream;
- (BOOL)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
