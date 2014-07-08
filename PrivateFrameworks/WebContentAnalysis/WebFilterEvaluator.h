//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSURL;

@interface WebFilterEvaluator : NSObject
{
    unsigned long long _filterState;
    NSURL *_url;
    NSMutableData *_buffer;
}

+ (id)createWithResponse:(id)arg1;
+ (BOOL)isManagedSession;
- (BOOL)wasBlocked;
- (int)filterState;
- (id)dataComplete;
- (id)addData:(id)arg1;
- (void)dealloc;
- (id)initWithResponse:(id)arg1;
- (id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2;

@end

