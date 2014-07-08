//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class AMPersonalityChooserSelectionImageView, AMPersonalityDescriptionBox, AMWorkflowPersonality, NSArray, NSArrayController, NSScrollView, NSString, NSTextField, NSTextView, NSURL;

@interface AMPersonalityChooserDisplayController : NSWindowController
{
    AMPersonalityChooserSelectionImageView *_selectionImageView;
    NSTextField *_selectionTitleView;
    NSTextView *_selectionDescriptionView;
    AMPersonalityDescriptionBox *_descriptionBox;
    NSArrayController *_personalitiesArrayController;
    NSScrollView *_personalitySelectionView;
    NSURL *_existingURL;
    NSString *_chooserString;
    NSString *_chooseButtonTitle;
    NSString *_closeButtonTitle;
    BOOL _shouldShowOpenButton;
    NSArray *_personalitiesToDisplay;
}

@property(retain) NSArray *personalitiesToDisplay; // @synthesize personalitiesToDisplay=_personalitiesToDisplay;
@property(retain) NSString *chooseButtonTitle; // @synthesize chooseButtonTitle=_chooseButtonTitle;
@property(retain) NSString *closeButtonTitle; // @synthesize closeButtonTitle=_closeButtonTitle;
@property BOOL shouldShowOpenButton; // @synthesize shouldShowOpenButton=_shouldShowOpenButton;
@property(retain) NSString *chooserString; // @synthesize chooserString=_chooserString;
- (void)changeSelectionToPersonality:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) AMWorkflowPersonality *selectedWorkflowPersonality;
- (void)openAnExistingFile:(id)arg1;
- (void)cancel:(id)arg1;
- (void)choose:(id)arg1;
- (id)windowNibName;
- (void)dealloc;
- (void)awakeFromNib;
- (void)updateDescription;
- (id)initWithWindow:(id)arg1;

@end

