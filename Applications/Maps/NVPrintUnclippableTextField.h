//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface NVPrintUnclippableTextField : NSTextField
{
    NSAttributedString *_longStringValue;
    NSAttributedString *_shortStringValue;
}

@property(retain, nonatomic) NSAttributedString *shortStringValue; // @synthesize shortStringValue=_shortStringValue;
@property(retain, nonatomic) NSAttributedString *longStringValue; // @synthesize longStringValue=_longStringValue;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;

@end

