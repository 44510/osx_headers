//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRequest.h>

@class LiFilter, LiRidList, NSArray;

@interface LiImmediateFilterModelRequest : LiRequest
{
    LiFilter *_filter;
    NSArray *_loadProperties;
    CDUnknownBlockType _bucketProcessor;
    LiRidList *_resultModelIdList;
}

@property(retain, nonatomic) LiRidList *resultModelIdList; // @synthesize resultModelIdList=_resultModelIdList;
@property(copy, nonatomic) CDUnknownBlockType bucketProcessor; // @synthesize bucketProcessor=_bucketProcessor;
@property(retain, nonatomic) NSArray *loadProperties; // @synthesize loadProperties=_loadProperties;
@property(retain, nonatomic) LiFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)initWithFilter:(id)arg1 loadProperties:(id)arg2;

@end

