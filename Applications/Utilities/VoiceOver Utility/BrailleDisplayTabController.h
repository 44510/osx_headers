//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, NSTextField;

@interface BrailleDisplayTabController : NSObject
{
    NSTextField *_displayName;
    NSTextField *_statusValue;
    NSTextField *_connectionValue;
    NSTextField *_cellsValue;
    NSTextField *_statusCellsValue;
    NSButton *_setIsPrimaryDisplay;
}

- (void)setNumberOfStatusCells:(id)arg1;
- (void)setNumberOfCells:(id)arg1;
- (void)setConnectionDescription:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIsPrimaryDisplayButtonEnabled:(BOOL)arg1;
- (void)setIsPrimaryDisplay:(BOOL)arg1;
- (void)awakeFromNib;

@end

