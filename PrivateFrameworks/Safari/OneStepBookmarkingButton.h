//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/OneStepBookmarkingBasicButton.h>

@class NSTrackingArea;

__attribute__((visibility("hidden")))
@interface OneStepBookmarkingButton : OneStepBookmarkingBasicButton
{
    BOOL _useCheckmarkIcon;
    int _mouseLocation;
    NSTrackingArea *_trackingArea;
}

+ (Class)cellClass;
@property(nonatomic) BOOL useCheckmarkIcon; // @synthesize useCheckmarkIcon=_useCheckmarkIcon;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) int mouseLocation; // @synthesize mouseLocation=_mouseLocation;
- (void).cxx_destruct;
- (void)showBookmarkingCompletedUI;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)_removeTrackingArea;
- (void)_addTrackingArea;
- (void)_updateIcon;
- (void)_flashCheckmarkIcon;
- (void)_fadeCheckmarkToPlusIcon;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

