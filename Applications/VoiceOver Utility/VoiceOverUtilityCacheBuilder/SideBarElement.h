//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSImage, NSString, NSView;

__attribute__((visibility("hidden")))
@interface SideBarElement : NSObject
{
    NSImage *_image;
    NSString *_text;
    NSView *_viewPane;
    NSDictionary *_controllers;
    int _sideBarID;
    long long _profileMask;
    NSString *_imageName;
}

+ (id)_loadNibsForPane:(id)arg1 withNibAndControllerNames:(id)arg2 controllers:(struct __CFDictionary *)arg3;
+ (void)_primeControllersInBackground;
+ (id)_profileMasks;
+ (id)_tabOrderData;
+ (void)initialize;
@property long long profileMask; // @synthesize profileMask=_profileMask;
@property(copy) NSDictionary *controllers; // @synthesize controllers=_controllers;
@property int sideBarID; // @synthesize sideBarID=_sideBarID;
@property(retain) NSString *text; // @synthesize text=_text;
@property(retain) NSImage *image; // @synthesize image=_image;
- (id)controllersArray;
- (id)description;
@property(retain) NSView *viewPane; // @dynamic viewPane;
- (id)controllerForView:(id)arg1;
- (id)textWithImage;
- (id)attributedText;
- (void)dealloc;
- (id)initWithImage:(id)arg1 imageName:(id)arg2 text:(id)arg3 sideBarID:(int)arg4;

@end

