//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUConfigureSession.h"

#import "AUConfigureOtherSheetControllerDelegate.h"
#import "AUPasswordSheetControllerDelegate.h"

@class AUPasswordSheetController, NSString;

@interface AUConfigureRemoteSession : AUConfigureSession <AUConfigureOtherSheetControllerDelegate, AUPasswordSheetControllerDelegate>
{
    AUPasswordSheetController *passwordSheetController;
}

+ (id)configureSession:(id)arg1 withInfo:(id)arg2;
@property(retain, nonatomic) AUPasswordSheetController *passwordSheetController; // @synthesize passwordSheetController;
- (void)configureOtherSheetEndedWithStatus:(int)arg1 resultDict:(id)arg2;
- (void)passwordSheetControllerDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)assistantCallbackKeychainPassword:(id)arg1 forBaseStation:(id)arg2;
- (void)dealloc;
- (void)doConfigureOther;
- (void)doConfigureRemote;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

