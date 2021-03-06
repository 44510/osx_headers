//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IPKQuantizedTextLayer.h"

@class IP_Ellipsizer, NSDictionary, NSString;

@interface IPEllipsizingTextLayer : IPKQuantizedTextLayer
{
    IP_Ellipsizer *_ellipsizer;
    NSDictionary *_textAttributes;
    NSString *_fullString;
    double _lastWidth;
}

@property(retain, nonatomic) NSString *fullString; // @synthesize fullString=_fullString;
@property(retain, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(retain, nonatomic) IP_Ellipsizer *ellipsizer; // @synthesize ellipsizer=_ellipsizer;
- (void)setFrame:(struct CGRect)arg1;
- (void)_refreshEllipsizing;
- (double)textWidth;
- (void)dealloc;
- (id)init;

@end

