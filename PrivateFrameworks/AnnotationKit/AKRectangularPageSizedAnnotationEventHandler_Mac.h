//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKRectangularAnnotationEventHandler_Mac.h>

@interface AKRectangularPageSizedAnnotationEventHandler_Mac : AKRectangularAnnotationEventHandler_Mac
{
}

- (struct CGRect)_validateAnnotationRectForDrag:(struct CGRect)arg1;
- (struct CGRect)_validateAnnotationRectForResize:(struct CGRect)arg1;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3;

@end

