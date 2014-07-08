//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Inspector, NSTextField, NSView;

@interface InspectorGadget : NSObject
{
    BOOL _usesFullWidth;
    Inspector *_inspector;
    NSView *_view;
    NSTextField *_labelField;
    unsigned long long _autoresizingMask;
    struct CGSize _paddingSize;
}

+ (id)labelFont;
+ (id)controlFont;
@property unsigned long long autoresizingMask; // @synthesize autoresizingMask=_autoresizingMask;
@property struct CGSize paddingSize; // @synthesize paddingSize=_paddingSize;
@property BOOL usesFullWidth; // @synthesize usesFullWidth=_usesFullWidth;
@property(retain) NSTextField *labelField; // @synthesize labelField=_labelField;
@property(retain) NSView *view; // @synthesize view=_view;
@property __weak Inspector *inspector; // @synthesize inspector=_inspector;
- (void).cxx_destruct;
- (void)setAutoresizingMasksEnabled:(BOOL)arg1;
- (void)setupAccessibility;
- (struct CGPoint)labelOffset;
- (void)syncFields;
- (void)inspectorDidClose;
- (void)sizeToFit;
- (void)updateFromReminder;
- (id)undoManager;
- (BOOL)respectWidth;
- (BOOL)isVisible;
- (id)reminder;
- (id)initWithLabel:(id)arg1;

@end
