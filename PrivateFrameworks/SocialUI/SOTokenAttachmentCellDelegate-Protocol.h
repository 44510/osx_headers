//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView, SOTokenAttachmentCell;

@protocol SOTokenAttachmentCellDelegate <NSObject>
- (BOOL)tokenAttachmentCellShouldShowDedicingBackground:(SOTokenAttachmentCell *)arg1;
- (BOOL)tokenAttachmentCellHasErrorState:(SOTokenAttachmentCell *)arg1;
- (BOOL)tokenAttachmentCell:(SOTokenAttachmentCell *)arg1 doubleClickedInRect:(struct CGRect)arg2 ofView:(NSView *)arg3;
@end

