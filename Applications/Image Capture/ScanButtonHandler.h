//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSStackView, NSString, NSView, NSWindow;

__attribute__((visibility("hidden")))
@interface ScanButtonHandler : NSObject
{
    NSMutableDictionary *_buttonMappingPreference;
    NSMutableDictionary *_userSelection;
    NSMutableDictionary *_buttonInfo;
    NSString *_uuid;
    NSWindow *_window;
    NSStackView *_container;
    NSView *_content;
}

- (void)showUI:(id)arg1;
- (void)setupUI;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)dealloc;
- (id)initWithUUID:(id)arg1;

@end

