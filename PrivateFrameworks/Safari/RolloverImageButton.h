//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/RolloverTrackingButton.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface RolloverImageButton : RolloverTrackingButton
{
    NSImage *_rolloverImage;
}

@property(retain, nonatomic) NSImage *rolloverImage; // @synthesize rolloverImage=_rolloverImage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldUseRolloverAppearance;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setAttributes;

@end

