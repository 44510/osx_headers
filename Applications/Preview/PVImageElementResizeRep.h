//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PVImageElement, PVImageSizer;

@interface PVImageElementResizeRep : NSObject
{
    PVImageSizer *_controller;
    PVImageElement *_imageElement;
    double _originalWidth;
    double _originalHeight;
    double _originalResolution;
    double _width;
    double _height;
    double _resolution;
    long long _fileSize;
    double _widthBeforeDPIEdit;
    double _heightBeforeDPIEdit;
    double _resolutionBeforeDPIEdit;
}

@property(readonly) double resolutionBeforeDPIEdit; // @synthesize resolutionBeforeDPIEdit=_resolutionBeforeDPIEdit;
@property(readonly) double heightBeforeDPIEdit; // @synthesize heightBeforeDPIEdit=_heightBeforeDPIEdit;
@property(readonly) double widthBeforeDPIEdit; // @synthesize widthBeforeDPIEdit=_widthBeforeDPIEdit;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property double resolutionInDPI; // @synthesize resolutionInDPI=_resolution;
@property(nonatomic) double heightInPixels; // @synthesize heightInPixels=_height;
@property(nonatomic) double widthInPixels; // @synthesize widthInPixels=_width;
@property(readonly) double originalResolutionInDPI; // @synthesize originalResolutionInDPI=_originalResolution;
@property(readonly) double originalHeightInPixels; // @synthesize originalHeightInPixels=_originalHeight;
@property(readonly) double originalWidthInPixels; // @synthesize originalWidthInPixels=_originalWidth;
@property PVImageElement *imageElement; // @synthesize imageElement=_imageElement;
@property PVImageSizer *controller; // @synthesize controller=_controller;
- (void)rememberValuesForDPIEdit;
- (void)resetSizeAndResolution;
- (id)description;
- (void)dealloc;
- (id)initWithController:(id)arg1 image:(id)arg2;

@end

