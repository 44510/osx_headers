//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

@class NSString, TButton, TProgressIndicator, TTextField;

@interface TMeetingRoomStatusViewController : TViewController
{
    TProgressIndicator *_progress;
    TTextField *_mainTextFld;
    TTextField *_subTextFld;
    TButton *_cancelButton;
    struct TNSRef<TLayoutBinder *> _layoutBinder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
@property(nonatomic) struct _NSRange subTextTruncateInRange; // @dynamic subTextTruncateInRange;
@property(retain, nonatomic) NSString *subTextStr; // @dynamic subTextStr;
@property(nonatomic) struct _NSRange mainTextTruncateInRange; // @dynamic mainTextTruncateInRange;
@property(retain, nonatomic) NSString *mainTextStr; // @dynamic mainTextStr;
- (void)dealloc;
- (void)viewLoaded;

@end

