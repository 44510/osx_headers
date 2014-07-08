//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSTextView;

@interface BKSLAWindowController : NSWindowController
{
    NSTextView *mSLATextView;
    BOOL mAgreedToSLA;
}

@property(readonly, nonatomic) BOOL agreedToSLA; // @synthesize agreedToSLA=mAgreedToSLA;
@property(retain, nonatomic) NSTextView *slaTextView; // @synthesize slaTextView=mSLATextView;
- (void).cxx_destruct;
- (void)saveSLA:(id)arg1;
- (void)disagreedToSLA:(id)arg1;
- (void)agreedToSLA:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end
