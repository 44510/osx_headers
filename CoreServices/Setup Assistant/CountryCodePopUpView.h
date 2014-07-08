//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSBox, NSLayoutConstraint, NSTextField;

@interface CountryCodePopUpView : NSView
{
    NSTextField *_regionSeperator;
    NSTextField *_countryCode;
    NSTextField *_countryName;
    NSTextField *_dash;
    NSBox *_separatorLine;
    NSLayoutConstraint *_topDistanceConstraint;
    NSLayoutConstraint *_topDistanceUpperConstraint;
}

@property NSLayoutConstraint *topDistanceUpperConstraint; // @synthesize topDistanceUpperConstraint=_topDistanceUpperConstraint;
@property NSLayoutConstraint *topDistanceConstraint; // @synthesize topDistanceConstraint=_topDistanceConstraint;
@property NSBox *separatorLine; // @synthesize separatorLine=_separatorLine;
@property NSTextField *dash; // @synthesize dash=_dash;
@property NSTextField *countryName; // @synthesize countryName=_countryName;
@property NSTextField *countryCode; // @synthesize countryCode=_countryCode;
@property NSTextField *regionSeperator; // @synthesize regionSeperator=_regionSeperator;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly) BOOL isSeparatorItem;

@end

