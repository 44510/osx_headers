//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSAlert, NSString, ServerPage;

@protocol ServerPageDelegate
- (void)pageDidFinish:(ServerPage *)arg1;
- (void)page:(ServerPage *)arg1 didReceiveAlert:(NSAlert *)arg2;
- (void)page:(ServerPage *)arg1 didUpdateTitle:(NSString *)arg2 leftButton:(NSString *)arg3 rightButton:(NSString *)arg4;
@end

