//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseEncryptionPasswordViewController.h"

@class TTextField;

@interface TDecryptionPasswordViewController : TBaseEncryptionPasswordViewController
{
    TTextField *_mainTextFld;
    TTextField *_instructionsFld;
}

- (void)okButtonPressed:(id)arg1;
- (void)setVolumeNode:(const struct TFENode *)arg1;
- (void)viewLoaded;

@end

