//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFont.h"

@interface NSFont (MailAdditions)
+ (id)validFontFamilyName:(id)arg1 fixedPitchOnly:(BOOL)arg2;
+ (id)fontWithBaseFont:(id)arg1 overlayFont:(id)arg2;
+ (void)setMessageListFont:(id)arg1;
+ (id)messageListFont;
+ (void)setFixedWidthFont:(id)arg1;
+ (id)fixedWidthFont;
+ (void)setMessageFont:(id)arg1;
+ (id)messageFont;
+ (id)prefsAddressFieldFont;
+ (id)addressFieldFont;
- (BOOL)isEqualNameAndSize:(id)arg1;
@end

