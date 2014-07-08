//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HiCloudViewController.h"

@class CloudConfigurationManager, NSArray, NSArrayController, NSString;

@interface CloudConfigurationWelcomeController : HiCloudViewController
{
    BOOL _isTransitioning;
    BOOL _alreadyShowedSkippedError;
    NSArray *_choices;
    NSArrayController *_choicesController;
}

@property BOOL alreadyShowedSkippedError; // @synthesize alreadyShowedSkippedError=_alreadyShowedSkippedError;
@property BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property NSArrayController *choicesController; // @synthesize choicesController=_choicesController;
@property(retain) NSArray *choices; // @synthesize choices=_choices;
@property(readonly, retain) NSString *skipLabel; // @dynamic skipLabel;
@property(readonly, retain) NSString *acceptLabel; // @dynamic acceptLabel;
@property(readonly, retain) NSString *adminCapabilitiesDescription; // @dynamic adminCapabilitiesDescription;
@property(readonly, retain) NSString *orgContactDescription; // @dynamic orgContactDescription;
@property(readonly, retain) NSString *mandatoryDescription; // @dynamic mandatoryDescription;
@property(readonly, retain) NSString *orgEmail; // @dynamic orgEmail;
@property(readonly, retain) NSString *orgPhone; // @dynamic orgPhone;
@property(readonly, retain) NSString *orgName; // @dynamic orgName;
- (void)willBecomeVisible;
- (id)previousViewIdentifier;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (id)nextViewIdentifier;
- (BOOL)shouldSkipPane;
- (BOOL)loadProfile:(id)arg1;
@property(readonly, retain) CloudConfigurationManager *manager;
- (void)dealloc;
- (id)init;

@end

