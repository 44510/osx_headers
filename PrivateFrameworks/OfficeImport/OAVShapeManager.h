//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, OAVReadState, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAVShapeManager : NSObject
{
    struct _xmlNode *mShape;
    unsigned short mType;
    OCPPackagePart *mPackagePart;
    NSDictionary *mShapeStyle;
    NSDictionary *mTextBoxStyle;
    OAVReadState *mOAVState;
}

- (struct OAVTextBoxInsets)textInsets;
- (BOOL)fitShapeToText;
- (id)textRotation;
- (id)textAltLayoutFlow;
- (id)textLayoutFlow;
- (BOOL)autoInsets;
- (id)textAnchor;
- (id)textWrapStyle;
- (struct CGPoint)shadowOffsets;
- (float)shadowAlpha;
- (id)shadowColor;
- (id)shadowType;
- (BOOL)isShadowed;
- (BOOL)isShadowOK;
- (id)strokeEndArrowLength;
- (id)strokeEndArrowWidth;
- (id)strokeEndArrowType;
- (id)strokeStartArrowLength;
- (id)strokeStartArrowWidth;
- (id)strokeStartArrowType;
- (id)strokeJoinStyle;
- (id)strokeCapStyle;
- (id)strokeDashStyle;
- (id)strokeCompoundType;
- (float)strokeMiterLimit;
- (float)strokeWidth;
- (float)strokeFgAlpha;
- (id)strokeFillType;
- (id)strokeBgColor;
- (id)strokeFgColor;
- (BOOL)isStroked;
- (BOOL)isStrokeOK;
- (id)imageFillTitle;
- (id)imageFillId;
- (id)fillGradientColors;
- (float)fillFocus;
- (float)fillAngle;
- (float)fillBgAlpha;
- (id)fillBgColor;
- (float)fillFgAlpha;
- (id)fillFgColor;
- (id)fillType;
- (BOOL)isFilled;
- (BOOL)isFillOK;
- (BOOL)isWordArt;
- (BOOL)isImage;
- (id)movieRelId;
- (id)imageRelId;
- (id)points;
- (BOOL)isPolyline;
- (id)textBodyRects;
- (id)limo;
- (id)path;
- (id)oavState;
- (id)packagePart;
- (struct _xmlNode *)shape;
- (unsigned short)type;
- (void)dealloc;
- (id)initWithShape:(struct _xmlNode *)arg1 type:(unsigned short)arg2 packagePart:(id)arg3 state:(id)arg4;

@end

