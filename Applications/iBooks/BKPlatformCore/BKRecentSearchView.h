//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BKPlatformCore/BKMacSearchTableCellView.h>

@class NSTextField;

@interface BKRecentSearchView : BKMacSearchTableCellView
{
    NSTextField *_titleField;
    NSTextField *_matchField;
}

+ (double)heightForTitle:(id)arg1 matchString:(id)arg2 width:(double)arg3;
@property(retain) NSTextField *matchField; // @synthesize matchField=_matchField;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void).cxx_destruct;
- (id)textFields;

@end

