//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViewBridge/NSViewService.h>

@class NSSet, NSString, NSViewServiceMarshal, NSWindow;

@interface NSRendezvousWindowController : NSViewService
{
    NSWindow *_window;
    NSString *_identifier;
    NSViewServiceMarshal *_parentViewServiceMarshal;
    NSSet *_bridgeKeys;
}

+ (id)controllerForIdentifier:(id)arg1;
+ (id)controllerForWindow:(id)arg1;
+ (id)bridgeKeysForWindowBase:(unsigned char)arg1;
+ (id)bridgeKeys;
+ (void)addBridgeKeys:(id)arg1;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSWindow *window; // @synthesize window=_window;
- (unsigned long long)acceptableStyleMask;
- (unsigned long long)awakeFromRemoteView;
- (unsigned char)inclusiveLayerBackOverride;
- (id)effectiveParentViewServiceMarshal;
- (void)loadView;
- (void)invalidate;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 parentViewServiceMarshal:(id)arg2;
- (void)releaseIvars;

@end

