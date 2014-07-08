//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TUCallModel : NSObject
{
    BOOL _ambiguous;
    BOOL _swappable;
    BOOL _mergeable;
    BOOL _holdAllowed;
    BOOL _addCallAllowed;
    BOOL _takingCallsPrivateAllowed;
    BOOL _hardPauseAvailable;
    BOOL _endAndAnswerAllowed;
    BOOL _holdAndAnswerAllowed;
    BOOL _sendToVoicemailAllowed;
    int _ambiguityState;
    id <TUCallModelDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isSendToVoicemailAllowed) BOOL sendToVoicemailAllowed; // @synthesize sendToVoicemailAllowed=_sendToVoicemailAllowed;
@property(readonly, nonatomic, getter=isHoldAndAnswerAllowed) BOOL holdAndAnswerAllowed; // @synthesize holdAndAnswerAllowed=_holdAndAnswerAllowed;
@property(readonly, nonatomic, getter=isEndAndAnswerAllowed) BOOL endAndAnswerAllowed; // @synthesize endAndAnswerAllowed=_endAndAnswerAllowed;
@property(readonly, nonatomic, getter=isHardPauseAvailable) BOOL hardPauseAvailable; // @synthesize hardPauseAvailable=_hardPauseAvailable;
@property(readonly, nonatomic, getter=isTakingCallsPrivateAllowed) BOOL takingCallsPrivateAllowed; // @synthesize takingCallsPrivateAllowed=_takingCallsPrivateAllowed;
@property(readonly, nonatomic, getter=isAddCallAllowed) BOOL addCallAllowed; // @synthesize addCallAllowed=_addCallAllowed;
@property(readonly, nonatomic, getter=isHoldAllowed) BOOL holdAllowed; // @synthesize holdAllowed=_holdAllowed;
@property(readonly, nonatomic, getter=isMergeable) BOOL mergeable; // @synthesize mergeable=_mergeable;
@property(readonly, nonatomic, getter=isSwappable) BOOL swappable; // @synthesize swappable=_swappable;
@property(readonly, nonatomic) int ambiguityState; // @synthesize ambiguityState=_ambiguityState;
@property(readonly, nonatomic, getter=isAmbiguous) BOOL ambiguous; // @synthesize ambiguous=_ambiguous;
@property(nonatomic) id <TUCallModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;

@end

