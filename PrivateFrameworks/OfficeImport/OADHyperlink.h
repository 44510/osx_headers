//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface OADHyperlink : NSObject
{
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
    BOOL mDoEndSound;
    BOOL mIsVisited;
    BOOL mDoAddToHistory;
}

@property(nonatomic) BOOL doAddToHistory; // @synthesize doAddToHistory=mDoAddToHistory;
@property(nonatomic) BOOL isVisited; // @synthesize isVisited=mIsVisited;
@property(nonatomic) BOOL doEndSound; // @synthesize doEndSound=mDoEndSound;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setInvalidUrl:(id)arg1;
- (id)invalidUrl;
- (void)setTooltip:(id)arg1;
- (id)tooltip;
- (void)setAction:(id)arg1;
- (id)action;
- (void)setTargetFrame:(id)arg1;
- (id)targetFrame;
- (void)setTargetMode:(int)arg1;
- (int)targetMode;
- (void)setTargetLocation:(id)arg1;
- (id)targetLocation;
- (void)dealloc;
- (id)init;

@end

