//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSActionCell.h"

@class PeopleList;

@interface NameTableCell : NSActionCell
{
    PeopleList *_peopleList;
    BOOL _oneLine;
    BOOL _disabled;
    BOOL _usesLegacyScroller;
    int _imageIndex;
    struct CGRect _trackingRect;
    struct CGRect _cellTrackingFrame;
    BOOL _urlMouseDown;
    BOOL _urlMouseOver;
    BOOL _showVCIcons;
    BOOL _showArrow;
    BOOL _showColorHint;
}

+ (id)_lineBreakAttributes;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)_redisplay:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)urlRectForFrame:(struct CGRect)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_layoutInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2 urlRect:(struct CGRect *)arg3 layoutOnly:(BOOL)arg4;
- (id)peopleListItem;
- (id)imHandle;
- (struct CGRect)rectOfStatusImageWithFrame:(struct CGRect)arg1 inView:(id)arg2 forStatus:(unsigned long long)arg3;
- (struct CGRect)rectOfStatusImageWithFrame:(struct CGRect)arg1 inView:(id)arg2 usingStatusImageReference:(id)arg3;
- (struct CGRect)vcRectForFrame:(struct CGRect)arg1 multiway:(BOOL)arg2;
- (struct CGSize)vcImageSizeMultiway:(BOOL)arg1;
- (int)imageState;
- (BOOL)imageIsMultiway;
- (BOOL)imageIsVideo;
- (void)setImageState:(int)arg1;
- (void)setImageIsVideo:(BOOL)arg1 multiway:(BOOL)arg2 state:(int)arg3;
- (BOOL)hasImage;
- (void)setNoImage;
- (void)_setImageState:(int)arg1;
- (void)_setImageIsVideo:(BOOL)arg1 multiway:(BOOL)arg2 state:(int)arg3;
- (void)_setNoImage;
- (id)_currentVCImage;
- (void)setUsesLegacyScroller:(BOOL)arg1;
- (BOOL)isDisabled;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)oneLine;
- (void)setOneLine:(BOOL)arg1;
- (BOOL)showVCIcon;
- (void)setShowVCIcon:(BOOL)arg1;
- (BOOL)showsArrow;
- (void)setShowsArrow:(BOOL)arg1;
- (BOOL)showsColorHint;
- (void)setShowsColorHint:(BOOL)arg1;
- (BOOL)_tracking;
- (void)_openURL;
- (BOOL)_validStatusURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPeopleList:(id)arg1;
- (id)accessibilityValueAttribute;
- (id)accessibilityTitleAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)arg1;

@end

