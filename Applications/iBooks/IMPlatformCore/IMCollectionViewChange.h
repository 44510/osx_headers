//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMCollectionReusableView, IMCollectionViewLayoutAttributes, NSString;

@interface IMCollectionViewChange : NSObject
{
    int _type;
    int _representedElementCategory;
    IMCollectionReusableView *_view;
    IMCollectionViewLayoutAttributes *_sourceAttributes;
    IMCollectionViewLayoutAttributes *_targetAttributes;
    NSString *_representedElementKind;
}

+ (id)decorationViewChangeWithType:(int)arg1 kind:(id)arg2;
+ (id)supplementaryViewChangeWithType:(int)arg1 kind:(id)arg2;
+ (id)cellChangeWithType:(int)arg1;
@property(retain, nonatomic) NSString *representedElementKind; // @synthesize representedElementKind=_representedElementKind;
@property(nonatomic) int representedElementCategory; // @synthesize representedElementCategory=_representedElementCategory;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) IMCollectionViewLayoutAttributes *targetAttributes; // @synthesize targetAttributes=_targetAttributes;
@property(retain, nonatomic) IMCollectionViewLayoutAttributes *sourceAttributes; // @synthesize sourceAttributes=_sourceAttributes;
@property(retain, nonatomic) IMCollectionReusableView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)description;

@end

