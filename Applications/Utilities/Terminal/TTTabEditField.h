//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class TTTabView, TTTabViewItem;

@interface TTTabEditField : NSTextField
{
    TTTabView *tabView;
    TTTabViewItem *tabItem;
}

@property(retain) TTTabViewItem *tabItem; // @synthesize tabItem;
@property(retain) TTTabView *tabView; // @synthesize tabView;
- (void)textDidEndEditing:(id)arg1;
- (void)dealloc;

@end

