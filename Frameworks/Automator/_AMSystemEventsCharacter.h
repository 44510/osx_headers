//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/_AMSystemEventsItem.h>

@class NSColor, NSString;

@interface _AMSystemEventsCharacter : _AMSystemEventsItem
{
}

@property long long size;
@property(copy) NSString *font;
@property(copy) NSColor *color;
- (id)words;
- (id)paragraphs;
- (id)characters;
- (id)attributeRuns;
- (id)attachments;

@end

