//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICDeviceDelegate.h"

@class ICCameraDevice, ICCameraItem, ICDevice, NSArray, NSData, NSError;

@protocol ICCameraDeviceDelegate <ICDeviceDelegate>

@optional
- (void)deviceDidBecomeReadyWithCompleteContentCatalog:(ICDevice *)arg1;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceivePTPEvent:(NSData *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveMetadataForItem:(ICCameraItem *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveThumbnailForItem:(ICCameraItem *)arg2;
- (void)cameraDeviceDidChangeCapability:(ICCameraDevice *)arg1;
- (void)cameraDevice:(ICCameraDevice *)arg1 didCompleteDeleteFilesWithError:(NSError *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didRenameItems:(NSArray *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didRemoveItems:(NSArray *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didRemoveItem:(ICCameraItem *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didAddItems:(NSArray *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didAddItem:(ICCameraItem *)arg2;
@end

