//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AMToolbarButtonCell : NSButtonCell
{
    NSDictionary *_componentImages;
}

+ (id)toolbarImageForTemplateImage:(id)arg1;
+ (double)horizontalAdjustForTemplate:(id)arg1;
+ (struct CGSize)sizeForTemplate:(id)arg1 controlSize:(unsigned long long)arg2;
+ (id)toolbarButtonWithComponents:(id)arg1 templateImage:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)bgImage;
- (void)setComponentImages:(id)arg1;
- (void)dealloc;

@end

