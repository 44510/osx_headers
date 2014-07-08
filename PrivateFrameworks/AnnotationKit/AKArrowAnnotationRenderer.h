//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKArrowAnnotationRenderer : AKAnnotationRenderer
{
}

+ (struct CGPath *)_newLinePathForArrow:(id)arg1 fromBezierParameter:(double)arg2 toBezierParameter:(double)arg3 pageControllerForPixelAlignmentOrNil:(id)arg4;
+ (void)_arrowHeadLineIntersection:(id)arg1 outStartIntersection:(struct CGPoint *)arg2 outBezierStartParameter:(double *)arg3 outEndIntersection:(struct CGPoint *)arg4 outBezierEndParameter:(double *)arg5;
+ (struct CGPoint)_cubicBezierPointForParameter:(double)arg1 start:(struct CGPoint)arg2 controlPt1:(struct CGPoint)arg3 controlPt2:(struct CGPoint)arg4 end:(struct CGPoint)arg5;
+ (double)_oneDimensionalCubicBezierValueForParameter:(double)arg1 start:(double)arg2 controlPt1:(double)arg3 controlPt2:(double)arg4 end:(double)arg5;
+ (void)_controlPointsForArrow:(id)arg1 outControlPoint1:(struct CGPoint *)arg2 outControlPoint2:(struct CGPoint *)arg3;
+ (void)_arrowHeadPathsForArrow:(id)arg1 outStartArrowHead:(struct CGPath *)arg2 outBezierStartParameter:(double *)arg3 outEndArrowHead:(struct CGPath *)arg4 outBezierEndParameter:(double *)arg5;
+ (unsigned long long)_drawableArrowHeads:(id)arg1;
+ (void)_drawPathForArrow:(id)arg1 inContext:(struct CGContext *)arg2 inPath:(struct CGPath *)arg3 pageControllerForPixelAlignmentOrNil:(id)arg4 minimumGrabbableBorderThickness:(double)arg5;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;

@end

