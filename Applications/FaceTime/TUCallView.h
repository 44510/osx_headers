//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSVisualEffectView.h"

@class ActionTextFieldView, BorderlessButton, FrequencyMeter, InviteView, NSBox, NSClipView, NSImageView, NSLayoutConstraint, NSTextField;

@interface TUCallView : NSVisualEffectView
{
    NSClipView *_clipView;
    ActionTextFieldView *_mainText;
    NSTextField *_durationText;
    NSTextField *_subText;
    ActionTextFieldView *_mainText2;
    ActionTextFieldView *_inCallHoldSubText;
    ActionTextFieldView *_inCallHoldSubText2;
    FrequencyMeter *_frequencyMeter;
    BorderlessButton *_faceTimeButton;
    BorderlessButton *_swapButton;
    BorderlessButton *_mergeButton;
    BorderlessButton *_muteButton;
    BorderlessButton *_endButton;
    BorderlessButton *_cancelButton;
    BorderlessButton *_callBackButton;
    BorderlessButton *_callPromptButton;
    BorderlessButton *_OKButton;
    NSBox *_bottomHorizontalDivider;
    NSBox *_bottomLeftVerticalDivider;
    NSBox *_bottomRightVerticalDivider;
    NSBox *_rightHorizontalDivider;
    NSBox *_rightVerticalDivider;
    NSImageView *_personImageView;
    NSLayoutConstraint *_personImageViewWidth;
    NSLayoutConstraint *_personImageViewLeading;
    NSLayoutConstraint *_mainTextLeading;
    NSLayoutConstraint *_mainTextTrailing;
    NSLayoutConstraint *_mainTextTop;
    NSLayoutConstraint *_mainText2Top;
    NSLayoutConstraint *_frequencyMeterTop;
    NSLayoutConstraint *_frequencyMeterLeft;
    NSLayoutConstraint *_swapLeading;
    NSLayoutConstraint *_swapWidth;
    NSLayoutConstraint *_clipHeight;
    InviteView *_inviteContainerView;
}

@property(retain, nonatomic) InviteView *inviteContainerView; // @synthesize inviteContainerView=_inviteContainerView;
@property(nonatomic) __weak NSLayoutConstraint *clipHeight; // @synthesize clipHeight=_clipHeight;
@property(nonatomic) __weak NSLayoutConstraint *swapWidth; // @synthesize swapWidth=_swapWidth;
@property(nonatomic) __weak NSLayoutConstraint *swapLeading; // @synthesize swapLeading=_swapLeading;
@property(nonatomic) __weak NSLayoutConstraint *frequencyMeterLeft; // @synthesize frequencyMeterLeft=_frequencyMeterLeft;
@property(nonatomic) __weak NSLayoutConstraint *frequencyMeterTop; // @synthesize frequencyMeterTop=_frequencyMeterTop;
@property(nonatomic) __weak NSLayoutConstraint *mainText2Top; // @synthesize mainText2Top=_mainText2Top;
@property(nonatomic) __weak NSLayoutConstraint *mainTextTop; // @synthesize mainTextTop=_mainTextTop;
@property(nonatomic) __weak NSLayoutConstraint *mainTextTrailing; // @synthesize mainTextTrailing=_mainTextTrailing;
@property(nonatomic) __weak NSLayoutConstraint *mainTextLeading; // @synthesize mainTextLeading=_mainTextLeading;
@property(nonatomic) __weak NSLayoutConstraint *personImageViewLeading; // @synthesize personImageViewLeading=_personImageViewLeading;
@property(nonatomic) __weak NSLayoutConstraint *personImageViewWidth; // @synthesize personImageViewWidth=_personImageViewWidth;
@property(nonatomic) __weak NSImageView *personImageView; // @synthesize personImageView=_personImageView;
@property(nonatomic) __weak NSBox *rightVerticalDivider; // @synthesize rightVerticalDivider=_rightVerticalDivider;
@property(nonatomic) __weak NSBox *rightHorizontalDivider; // @synthesize rightHorizontalDivider=_rightHorizontalDivider;
@property(nonatomic) __weak NSBox *bottomRightVerticalDivider; // @synthesize bottomRightVerticalDivider=_bottomRightVerticalDivider;
@property(nonatomic) __weak NSBox *bottomLeftVerticalDivider; // @synthesize bottomLeftVerticalDivider=_bottomLeftVerticalDivider;
@property(nonatomic) __weak NSBox *bottomHorizontalDivider; // @synthesize bottomHorizontalDivider=_bottomHorizontalDivider;
@property(nonatomic) __weak BorderlessButton *OKButton; // @synthesize OKButton=_OKButton;
@property(nonatomic) __weak BorderlessButton *callPromptButton; // @synthesize callPromptButton=_callPromptButton;
@property(nonatomic) __weak BorderlessButton *callBackButton; // @synthesize callBackButton=_callBackButton;
@property(nonatomic) __weak BorderlessButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak BorderlessButton *endButton; // @synthesize endButton=_endButton;
@property(nonatomic) __weak BorderlessButton *muteButton; // @synthesize muteButton=_muteButton;
@property(nonatomic) __weak BorderlessButton *mergeButton; // @synthesize mergeButton=_mergeButton;
@property(nonatomic) __weak BorderlessButton *swapButton; // @synthesize swapButton=_swapButton;
@property(nonatomic) __weak BorderlessButton *faceTimeButton; // @synthesize faceTimeButton=_faceTimeButton;
@property(nonatomic) __weak FrequencyMeter *frequencyMeter; // @synthesize frequencyMeter=_frequencyMeter;
@property(nonatomic) __weak ActionTextFieldView *inCallHoldSubText2; // @synthesize inCallHoldSubText2=_inCallHoldSubText2;
@property(nonatomic) __weak ActionTextFieldView *inCallHoldSubText; // @synthesize inCallHoldSubText=_inCallHoldSubText;
@property(nonatomic) __weak ActionTextFieldView *mainText2; // @synthesize mainText2=_mainText2;
@property(nonatomic) __weak NSTextField *subText; // @synthesize subText=_subText;
@property(nonatomic) __weak NSTextField *durationText; // @synthesize durationText=_durationText;
@property(nonatomic) __weak ActionTextFieldView *mainText; // @synthesize mainText=_mainText;
@property(nonatomic) __weak NSClipView *clipView; // @synthesize clipView=_clipView;
- (void).cxx_destruct;
- (void)clearButtonTargetsAndActions;
- (void)hideAllViews;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_commonInit;

@end

