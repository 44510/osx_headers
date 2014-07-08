//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAccessibilityProxy.h"

@class NSUICollectionView, _NSCollectionViewItemKey;

@interface _NSCollectionViewElementAccessibilityProxy : NSAccessibilityProxy
{
    NSUICollectionView *_collectionView;
    _NSCollectionViewItemKey *_elementKey;
    unsigned long long _arrayIndex;
}

+ (CDUnknownBlockType)indexPathComparator;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsSelectedAttributeSettable;
- (id)accessibilitySelectedAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (id)accessibilitySizeAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)layoutAttributes;
- (BOOL)isSelected;
- (BOOL)isSelectable;
- (id)indexPath;
- (unsigned long long)arrayIndex;
- (id)collectionView;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCollectionView:(id)arg1 elementKey:(id)arg2 arrayIndex:(unsigned long long)arg3;

@end

