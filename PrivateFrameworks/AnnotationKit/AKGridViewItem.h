//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AKUserInterfaceItem.h"

@class NSImage, NSString;

@interface AKGridViewItem : NSObject <AKUserInterfaceItem>
{
    BOOL _enabled;
    long long _tag;
    NSImage *_image;
}

@property BOOL enabled; // @synthesize enabled=_enabled;
@property(retain) NSImage *image; // @synthesize image=_image;
@property long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

