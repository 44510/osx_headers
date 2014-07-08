//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDFAnnotationSquare.h"

#import "PVPDFAKAnnotationAdaptor.h"

@class AKAnnotation, AKController, NSString;

@interface PVPDFAnnotationSquare : PDFAnnotationSquare <PVPDFAKAnnotationAdaptor>
{
    AKAnnotation *_akAnnotation;
    AKController *_akAnnotationController;
}

+ (id)newAKAnnotationWithPDFAnnotation:(id)arg1 fromSourceDictionary:(struct CGPDFDictionary *)arg2;
@property AKController *akAnnotationController; // @synthesize akAnnotationController=_akAnnotationController;
@property(retain) AKAnnotation *akAnnotation; // @synthesize akAnnotation=_akAnnotation;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)drawWithBox:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithAKAnnotation:(id)arg1 ofController:(id)arg2;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

