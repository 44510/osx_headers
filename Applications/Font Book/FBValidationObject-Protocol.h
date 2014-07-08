//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSImage, NSNumber, NSString;

@protocol FBValidationObject
- (NSImage *)statusImage;
- (NSString *)helpText;
- (NSArray *)children;
- (long long)numberOfChildren;
- (NSNumber *)error;
- (NSNumber *)warn;
- (NSNumber *)pass;
- (NSImage *)image;
- (NSString *)name;
@end

