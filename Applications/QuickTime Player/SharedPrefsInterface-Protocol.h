//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSURL;

@protocol SharedPrefsInterface
- (void)getBookmarkDataForURL:(NSURL *)arg1 reply:(void (^)(NSData *))arg2;
- (void)getCoreMediaHardwareDecoderDisabled:(void (^)(BOOL))arg1;
- (void)getAVCHDFolderForURL:(NSURL *)arg1 reply:(void (^)(NSData *))arg2;
- (void)getiTunesWatchedFolder:(void (^)(NSData *))arg1;
@end
