//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSArray, NSImageView, NSTextField, NSWindow;

@interface AUAboutBoxController : NSWindowController
{
    NSTextField *_AUAboutBoxAUNameString;
    NSTextField *_AUAboutBoxVersionString;
    NSTextField *_AUAboutBoxCopyRightString;
    NSImageView *_AUAboutBoxIconAUImage;
    NSWindow *_aboutBoxWindow;
    NSArray *topLevelObjects;
}

@property(retain, nonatomic) NSArray *topLevelObjects; // @synthesize topLevelObjects;
- (void)displayAboutBox;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

@end

