//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSPasteboard;

@interface TClipView : NSView
{
    NSPasteboard *_pasteboard;
    _Bool _canSelectAndCopy;
}

+ (struct __CFString *)displayableUTIForPasteboard:(id)arg1;
@property _Bool canSelectAndCopy; // @synthesize canSelectAndCopy=_canSelectAndCopy;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly) struct CGSize optimalSize;
- (void)update;
@property(retain) NSPasteboard *pasteboard;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

