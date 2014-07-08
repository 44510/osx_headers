//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUserNotification.h"

@class NSImage;

@interface NSUserNotification (NCHelpers)
+ (id)keyPathsForValuesAffectingScaledContentImage;
+ (id)keyPathsForValuesAffectingIdentityImage;
@property(readonly, nonatomic) NSImage *systemAppImage;
- (void)setAlternateActionIndex:(unsigned long long)arg1;
- (void)clearScaledContentImage;
@property(readonly, nonatomic) NSImage *scaledContentImage;
- (void)clearIdentityImage;
@property(readonly, nonatomic) NSImage *identityImage;
@end

