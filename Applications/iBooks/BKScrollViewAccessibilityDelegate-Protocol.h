//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKScrollViewAccessibility;

@protocol BKScrollViewAccessibilityDelegate <NSObject>
- (struct _NSRange)bkaxScrollViewVisiblePageRange:(BKScrollViewAccessibility *)arg1;
- (void)bkaxScrollView:(BKScrollViewAccessibility *)arg1 handleScrollToRect:(struct CGRect)arg2;
@end

