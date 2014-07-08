//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSWindow;

@interface ABBookWindowState : NSObject
{
    NSString *_autosavePrefix;
    NSString *_autosaveName;
    NSWindow *_window;
    NSArray *_stateSavingObjects;
}

@property(copy, nonatomic) NSString *autosaveName; // @synthesize autosaveName=_autosaveName;
- (id)autosaveNameByAppendingComponent:(id)arg1;
- (void)setAutosaveNameOnObject:(id)arg1;
- (void)setAutosaveNames;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 autosavePrefix:(id)arg2 stateSavingObjects:(id)arg3;

@end

