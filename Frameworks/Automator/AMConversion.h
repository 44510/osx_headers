//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSError, NSString;

@interface AMConversion : NSObject <NSCopying>
{
    NSString *_inputType;
    NSString *_outputType;
    NSError *_error;
    NSArray *_preferredPath;
    NSArray *_pathTaken;
    NSArray *_paths;
}

+ (id)conversionWithInputType:(id)arg1 outputType:(id)arg2 paths:(id)arg3 error:(id)arg4;
- (id)description;
@property(retain) NSArray *paths;
- (id)sortedPathsForPaths:(id)arg1;
@property(retain) NSArray *pathTaken;
- (unsigned long long)preferredPathCount;
@property(retain) NSArray *preferredPath;
@property(retain) NSError *error;
@property(retain) NSString *outputType;
@property(retain) NSString *inputType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

