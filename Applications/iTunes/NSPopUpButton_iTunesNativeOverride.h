//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@interface NSPopUpButton_iTunesNativeOverride : NSPopUpButton
{
    struct weak_ptr<ITView> mAssociatedITView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)keyDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2 associatedITView:(shared_ptr_8092bbf7)arg3;
- (shared_ptr_8092bbf7)associatedITView;

@end

