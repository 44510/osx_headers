//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CardContentViewController, CardHeaderView, NSScrollView, RemindersScrollViewBorderView, RemindersTableView;

@interface CardContentView : NSView
{
    BOOL _headerHasSubtitle;
    RemindersTableView *_tableView;
    CardHeaderView *_cardHeader;
    NSScrollView *_scrollView;
    CardContentViewController *_controller;
    RemindersScrollViewBorderView *_scrollViewBorderView;
}

@property BOOL headerHasSubtitle; // @synthesize headerHasSubtitle=_headerHasSubtitle;
@property(retain) RemindersScrollViewBorderView *scrollViewBorderView; // @synthesize scrollViewBorderView=_scrollViewBorderView;
@property __weak CardContentViewController *controller; // @synthesize controller=_controller;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) CardHeaderView *cardHeader; // @synthesize cardHeader=_cardHeader;
@property(retain) RemindersTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescription;
- (void)updateHeaderHasSubtitle:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2 type:(int)arg3 primaryWindow:(BOOL)arg4;

@end

