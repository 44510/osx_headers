//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

@class MGFileInputStream, NSMutableArray, NSString;

@interface MGMultipartInputStream : NSInputStream
{
    NSInputStream *_currentStream;
    unsigned int _streamIndex;
    NSMutableArray *_parts;
    unsigned long long _length;
    NSString *_vendorID;
    NSString *_boundary;
    NSMutableArray *_partStreams;
}

@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) NSMutableArray *partStreams; // @synthesize partStreams=_partStreams;
@property(readonly, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(copy, nonatomic) NSString *vendorID; // @synthesize vendorID=_vendorID;
- (void).cxx_destruct;
@property(readonly, nonatomic) MGFileInputStream *inputStreamWithTemporaryFile;
- (void)dd_readIntoPath:(id)arg1;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (BOOL)hasBytesAvailable;
- (void)close;
- (void)open;
- (void)buildBody;
- (void)addPartWithName:(id)arg1 fileAtPath:(id)arg2;
- (void)addPartWithName:(id)arg1 intValue:(int)arg2;
- (void)addPartWithName:(id)arg1 string:(id)arg2;
- (void)addPartWithName:(id)arg1 data:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithVendorID:(id)arg1;

@end

