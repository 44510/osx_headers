//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ABCardViewStyleProvider, ABNameFrameView, ABProfilePictureView, NSArray, NSTextField;

__attribute__((visibility("hidden")))
@interface ABCardHeaderView : NSView
{
    ABNameFrameView *_nameFrameView;
    ABProfilePictureView *_profilePictureView;
    NSTextField *_privateMeShareLabel;
    ABCardViewStyleProvider *_styleProvider;
    id <ABCardViewDelegate> _delegate;
    NSArray *_constraints;
}

@property NSTextField *privateMeShareLabel; // @synthesize privateMeShareLabel=_privateMeShareLabel;
@property id <ABCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property ABProfilePictureView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property ABNameFrameView *nameFrameView; // @synthesize nameFrameView=_nameFrameView;
- (void)ab_layout;
- (void)showShareLabel:(BOOL)arg1;
- (void)applyShareLabelStyle;
- (void)applyStyle;
- (id)metrics;
- (id)privacyLabelConstraints;
- (id)subviewLayoutConstraints;
- (id)minimumSizeConstraints;
- (id)alignNameAndProfilePhotoConstraints;
- (void)updateConstraints;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

