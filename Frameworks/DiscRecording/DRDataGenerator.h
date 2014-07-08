//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DRContentGenerator.h"

@class NSFileHandle, NSString;

__attribute__((visibility("hidden")))
@interface DRDataGenerator : NSObject <DRContentGenerator>
{
    NSString *path;
    NSFileHandle *fd;
    unsigned int length;
}

- (BOOL)completed;
- (unsigned int)produceIntoBuffer:(char *)arg1 length:(unsigned int)arg2 blockSize:(unsigned int)arg3;
- (void)finalize;
- (void)dealloc;
- (id)initWithGeneratorInfo:(id)arg1;

@end

