//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSWindow;

@interface KeychainValidation : NSObject
{
    NSWindow *_window;
}

+ (id)sharedValidator;
- (void)validateVPNSharedSecretItems;
- (void)vpnItemsAlertDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)validate:(id)arg1;
- (void)dealloc;

@end

