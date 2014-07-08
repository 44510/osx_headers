//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@interface MessageViewerLazyPopUpButton : NSPopUpButton
{
    BOOL _didLazyLoadMenu;
    long long _menuToUse;
}

@property(nonatomic) BOOL didLazyLoadMenu; // @synthesize didLazyLoadMenu=_didLazyLoadMenu;
@property(nonatomic) long long menuToUse; // @synthesize menuToUse=_menuToUse;
- (void)initializeMenu;
- (void)setMenu:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

