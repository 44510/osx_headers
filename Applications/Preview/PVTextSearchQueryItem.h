//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PVMediaContainerBase;

@interface PVTextSearchQueryItem : NSObject
{
    PVMediaContainerBase *_container;
    double _relevanceScore;
    unsigned long long _pageIndex;
    NSString *_sectionPath;
}

@property(copy) NSString *sectionPath; // @synthesize sectionPath=_sectionPath;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property double relevanceScore; // @synthesize relevanceScore=_relevanceScore;
@property(retain) PVMediaContainerBase *container; // @synthesize container=_container;
- (void)dealloc;
- (id)init;

@end

