//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreChineseEngine/CIMShapeBasedEngine.h>

@interface CIMWubixingEngine : CIMShapeBasedEngine
{
}

- (BOOL)candidateShouldShowInputCode:(id)arg1;
- (BOOL)didHandleCandidateSelectionChanged:(id)arg1;
- (BOOL)handleReturn;
- (BOOL)handleSpaceForNormalInlineStateWithDynamicPrompt;
- (void)commitPinyinInline;
- (id)getCharacterCodeForCharacter:(id)arg1;
- (id)wildcardCharacterSet;
- (BOOL)commitDirectlyWhenExactMatch;
- (unsigned long long)maxLengthOfInline;
- (id)keyboardLayoutName;
- (id)inputCharacterSet;
- (int)mecabraInputMethodType;
- (unsigned long long)analysisOptions;
- (void)updateSettings;
- (id)helpAnchorName;
- (id)shownInlineText;
@property(readonly, nonatomic) BOOL inPinyinMode;

@end

