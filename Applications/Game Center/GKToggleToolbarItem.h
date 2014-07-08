//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSToolbarItem.h"

@class NSButton, NSImage;

@interface GKToggleToolbarItem : NSToolbarItem
{
    NSButton *_button;
    NSImage *_mainImage;
    NSImage *_altImage;
}

@property(retain) NSImage *altImage; // @synthesize altImage=_altImage;
@property(retain) NSImage *mainImage; // @synthesize mainImage=_mainImage;
@property NSButton *button; // @synthesize button=_button;
- (struct CGSize)minSize;
@property(getter=isSelected) BOOL selected;
- (void)awakeFromNib;

@end

