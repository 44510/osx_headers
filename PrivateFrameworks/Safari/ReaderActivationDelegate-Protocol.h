//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol ReaderActivationDelegate <NSObject>
- (void)readerControllerDidDeactivate:(const struct ReaderController *)arg1;
- (void)readerControllerWillDeactivate:(const struct ReaderController *)arg1;
- (void)readerControllerDidActivate:(const struct ReaderController *)arg1;
- (void)readerControllerWillActivate:(const struct ReaderController *)arg1;
- (BOOL)readerControllerShouldUsePrivateBrowsing:(const struct ReaderController *)arg1;
- (BOOL)readerControllerShouldActivateUponDeterminingAvailability:(const struct ReaderController *)arg1;
- (id <ReaderInstallationTarget>)installationTargetForReaderController:(const struct ReaderController *)arg1;
@end
