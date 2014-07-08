//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@interface CAMIDIEndpointMenu : NSPopUpButton
{
    BOOL mInited;
    int mType;
    int mOptions;
    int mSelectedUniqueID;
}

- (BOOL)selectUniqueID:(int)arg1;
- (int)selectedUniqueID;
- (unsigned int)selectedEndpoint;
- (void)rebuildMenu;
- (void)syncSelectedName;
- (void)buildMenu:(int)arg1 opts:(int)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_init;

@end
