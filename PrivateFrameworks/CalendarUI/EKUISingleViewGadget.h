//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIGadget.h>

@class NSArray;

@interface EKUISingleViewGadget : EKUIGadget
{
    NSArray *_constraints;
}

@property(retain) NSArray *constraints; // @synthesize constraints=_constraints;
- (void).cxx_destruct;
- (double)bottomPadding;
- (double)horizontalPadding;
- (void)addSubviewsIfNeeded;
- (void)updateConstraints;
- (id)control;

@end

