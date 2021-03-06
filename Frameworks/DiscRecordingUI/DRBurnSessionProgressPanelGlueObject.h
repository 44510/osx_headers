//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface DRBurnSessionProgressPanelGlueObject : NSObject <NSWindowDelegate>
{
    struct DRBurnSessionObject *_session;
    struct DRBurnSessionProgressCallbacks _callbacks;
    NSWindow *_parentWindow;
}

- (id).cxx_construct;
- (BOOL)burnProgressPanel:(id)arg1 burnDidFinish:(id)arg2;
- (void)burnProgressPanelDidFinish:(id)arg1;
- (void)burnProgressPanelWillBegin:(id)arg1;
- (void)beginPanelForLayout:(void *)arg1 options:(struct DRBurnSessionProgressDialogOptions *)arg2;
- (void)setCallbacks:(struct DRBurnSessionProgressCallbacks *)arg1;
- (void)setParentWindow:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(struct DRBurnSessionObject *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

