//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class NSTextField;

@interface PersonTableHeaderRowView : NSTableRowView
{
    NSTextField *_label;
}

@property(nonatomic) __weak NSTextField *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

