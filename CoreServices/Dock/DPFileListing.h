//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface DPFileListing : NSObject
{
    NSArray *_files;
    NSMutableArray *_requests;
}

- (void).cxx_destruct;
- (id)_listingWithRandomization:(BOOL)arg1;
- (void)setFiles:(id)arg1;
- (void)fetchFiles:(BOOL)arg1;
- (void)files:(BOOL)arg1 random:(BOOL)arg2 result:(CDUnknownBlockType)arg3;
- (id)init;

@end
