//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABCardView;

__attribute__((visibility("hidden")))
@interface AKCardViewDataSourceFactory : NSObject
{
    ABCardView *_cardView;
}

+ (id)contactWithPerson:(id)arg1 unified:(BOOL)arg2 error:(id *)arg3;
- (id)dataSourceWithContact:(id)arg1 addressBook:(id)arg2 delegate:(id)arg3;
- (id)dataSourceWithPerson:(id)arg1 unified:(BOOL)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)initWithCardView:(id)arg1;

@end

