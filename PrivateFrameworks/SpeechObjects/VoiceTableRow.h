//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SOVoiceObject;

@interface VoiceTableRow : NSObject
{
    NSString *_title;
    unsigned long long _tableIndex;
    BOOL _selected;
    BOOL _groupRow;
    SOVoiceObject *_voiceObject;
}

+ (id)arrangedRowsFromVoiceObjects:(id)arg1 useLanguageCodeOnlyToSelectVoices:(BOOL)arg2 showIndividualQualities:(BOOL)arg3 showFullGroupNames:(BOOL)arg4 showCurrentLocaleAtTop:(BOOL)arg5;
@property(readonly, retain) SOVoiceObject *voiceObject; // @synthesize voiceObject=_voiceObject;
@property(readonly, retain) NSString *title; // @synthesize title=_title;
@property unsigned long long tableIndex; // @synthesize tableIndex=_tableIndex;
@property(getter=isGroupRow) BOOL groupRow; // @synthesize groupRow=_groupRow;
- (id)description;
- (void)setSelectedUsingLanguageCodeOnlyToSelectVoices:(BOOL)arg1;
@property(getter=isSelected) BOOL selected;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 voiceObject:(id)arg2;

@end

