//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AKController;

@interface AKToolbarViewController : NSViewController
{
    AKController *_controller;
}

+ (unsigned long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)imageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)titleForToolbarButtonItemOfType:(unsigned long long)arg1;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)_toolbarButtonItemOfType:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)revalidateItems;
- (void)teardown;
- (id)initWithController:(id)arg1;

@end

