//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSPrintPanelAccessorizing.h"

@class NSView;

@interface PBPrintViewController : NSViewController <NSPrintPanelAccessorizing>
{
}

@property __weak NSView *printOpView;
- (void)updatePrintOpView;
- (id)localizedSummaryItems;
- (id)keyPathsForValuesAffectingPreview;

@end

