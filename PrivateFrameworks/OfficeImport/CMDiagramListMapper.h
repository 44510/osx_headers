//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramListMapper : CMDiagramShapeMapper
{
    float mMaxLineCount;
}

- (float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3;
- (void)setDefaultFonSize;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)textSize;
- (void)mapListItemAt:(id)arg1 index:(unsigned long long)arg2 withState:(id)arg3;
- (id)suggestedBoundsForHListItemWithIndex:(unsigned long long)arg1;

@end

