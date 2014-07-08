//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenField.h"

@class NSTrackingArea, NSWindow;

@interface SOTokenField : NSTokenField
{
    NSTrackingArea *_tokenFieldTrackingArea;
    BOOL _needsRefresh;
    NSWindow *_axChild;
}

@property(nonatomic) BOOL needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(nonatomic) NSWindow *axChild; // @synthesize axChild=_axChild;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessibilityChildren;
- (void)_commonSOTokenFieldInit;
- (void)tokenFieldNeedsRefresh;

@end

