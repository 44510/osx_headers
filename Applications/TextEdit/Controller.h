//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DocumentPropertiesPanelController, LinePanelController, Preferences;

@interface Controller : NSObject
{
    Preferences *preferencesController;
    DocumentPropertiesPanelController *propertiesController;
    LinePanelController *lineController;
}

+ (void)initialize;
@property LinePanelController *lineController; // @synthesize lineController;
@property DocumentPropertiesPanelController *propertiesController; // @synthesize propertiesController;
@property Preferences *preferencesController; // @synthesize preferencesController;
- (void)openSelection:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)openFile:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)doOneTest:(id)arg1;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (void)endTest:(CDStruct_edd05c48 *)arg1;

@end

