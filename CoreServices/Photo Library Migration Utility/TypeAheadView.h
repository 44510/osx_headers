//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSString;

@interface TypeAheadView : NSView
{
    NSString *_searchString;
    NSString *_countString;
    long long _matchCount;
    long long _totalCount;
    NSString *_matchCountFormatString;
}

@property(retain) NSString *matchCountFormatString; // @synthesize matchCountFormatString=_matchCountFormatString;
- (void)setTotalCount:(long long)arg1;
- (void)setMatchCount:(long long)arg1;
- (void)setCountString:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

