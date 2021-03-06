//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MCActivityAggregate, NSButton, NSProgressIndicator, NSTextField;

@interface ActivityAggregateView : NSView
{
    MCActivityAggregate *_activityAggregate;
    NSTextField *_nameTextField;
    NSTextField *_statusTextField;
    NSButton *_stopButton;
    NSProgressIndicator *_progressIndicator;
}

@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) NSTextField *statusTextField; // @synthesize statusTextField=_statusTextField;
@property(retain, nonatomic) NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateNameTextField;
@property(retain, nonatomic) MCActivityAggregate *activityAggregate;
- (void)dealloc;
- (void)_activityAggregateViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

