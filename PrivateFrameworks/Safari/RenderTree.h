//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSOutlineView;

__attribute__((visibility("hidden")))
@interface RenderTree : NSWindowController
{
    NSOutlineView *outlineView;
    id <NSOutlineViewDataSource> dataSource;
    id _lifetimeExtender;
}

@property(retain, nonatomic) id lifetimeExtender; // @synthesize lifetimeExtender=_lifetimeExtender;
- (void).cxx_destruct;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)_createTreeFromWKView:(id)arg1;
- (id)initWithWKView:(id)arg1;

@end

