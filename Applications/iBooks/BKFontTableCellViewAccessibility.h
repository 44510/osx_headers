//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "__BKFontTableCellViewAccessibility_super.h"

#import "BKAccessibilityTableViewCell.h"

@class NSString;

@interface BKFontTableCellViewAccessibility : __BKFontTableCellViewAccessibility_super <BKAccessibilityTableViewCell>
{
}

+ (Class)bkaxBaseSafeCategoryClass;
+ (id)bkaxTargetClassName;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)accessibilityIsIgnored;
@property(nonatomic, setter=bkaxSetDelegate:) id <BKAccessibilityTableViewDelegate> bkaxDelegate;

// Remaining properties
@property(getter=isAccessibilityElement) BOOL accessibilityElement; // @dynamic accessibilityElement;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

