//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TInfoWindowViewController.h"

@class TInfoHeaderSizeController, TPropertyIconController, TPropertyModificationDateController, TPropertyNameController;

@interface TInfoWindowSimpleHeaderViewController : TInfoWindowViewController
{
    TPropertyIconController *_iconController;
    TPropertyNameController *_nameController;
    TInfoHeaderSizeController *_sizeController;
    TPropertyModificationDateController *_modDateController;
}

+ (id)controller;
- (unsigned int)scriptingID;
- (unsigned int)notificationOptionsForNodes:(const struct TFENodeVector *)arg1;
- (void)setSubviewsHidden:(_Bool)arg1;
- (void)loadValueControllers;
- (void)viewLoaded;
- (_Bool)expandedDefaultValue;
- (_Bool)expanded;
- (double)disclosedHeight;
- (void)aboutToTearDown;

@end

