//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreChineseEngine/CIMBaseEngine.h>

@class CIMCandidate, NSCharacterSet, NSDictionary, NSMutableString, NSString;

@interface CIMShapeBasedEngine : CIMBaseEngine
{
    struct __Mecabra *_mecabraEngine;
    int _mecabraInputMethodType;
    unsigned long long _mecabraCreationOptions;
    unsigned long long _analysisOptions;
    unsigned long long _maxLengthOfInline;
    NSCharacterSet *_inputCharacterSet;
    NSString *_keyboardLayoutName;
    NSDictionary *_keyMappings;
    BOOL _commitDirectlyWhenExactMatch;
    BOOL _canTypeNonMappedCharacters;
    BOOL _currentCharacterIsNumber;
    BOOL _lastCharacterWasNumber;
    BOOL _useDynamicPrompt;
    BOOL _showInputCode;
    NSMutableString *_inlineText;
    NSString *_shownInlineText;
    BOOL _leftSingleQuotationMarkInserted;
    BOOL _leftDoubleQuotationMarkInserted;
    BOOL _punctuationWindowIsTabbed;
    CIMCandidate *_selectedMecabraCandidate;
}

@property(retain, nonatomic) CIMCandidate *selectedMecabraCandidate; // @synthesize selectedMecabraCandidate=_selectedMecabraCandidate;
@property(nonatomic) BOOL punctuationWindowIsTabbed; // @synthesize punctuationWindowIsTabbed=_punctuationWindowIsTabbed;
@property(nonatomic) BOOL leftDoubleQuotationMarkInserted; // @synthesize leftDoubleQuotationMarkInserted=_leftDoubleQuotationMarkInserted;
@property(nonatomic) BOOL leftSingleQuotationMarkInserted; // @synthesize leftSingleQuotationMarkInserted=_leftSingleQuotationMarkInserted;
@property(nonatomic) NSMutableString *inlineText; // @synthesize inlineText=_inlineText;
@property(nonatomic) BOOL showInputCode; // @synthesize showInputCode=_showInputCode;
@property(nonatomic) BOOL useDynamicPrompt; // @synthesize useDynamicPrompt=_useDynamicPrompt;
@property(nonatomic) BOOL lastCharacterWasNumber; // @synthesize lastCharacterWasNumber=_lastCharacterWasNumber;
@property(nonatomic) BOOL currentCharacterIsNumber; // @synthesize currentCharacterIsNumber=_currentCharacterIsNumber;
@property(readonly, nonatomic) NSDictionary *keyMappings; // @synthesize keyMappings=_keyMappings;
@property(nonatomic) struct __Mecabra *mecabraEngine; // @synthesize mecabraEngine=_mecabraEngine;
- (BOOL)inputModeShowsDynamicCandidates;
- (id)inputString;
- (void)adapt;
- (BOOL)candidateShouldShowInputCode:(id)arg1;
- (BOOL)candidateIsPhonetic:(id)arg1;
- (id)readingStringFromReading:(id)arg1;
- (BOOL)sendsSelectionKeyEventsToCandidateWindow;
- (id)candidatesForSortingMethod:(id)arg1;
- (id)getCharacterCodeForCharacter:(id)arg1;
@property(readonly, nonatomic) BOOL updateMarkedTextOnSelectionChange;
- (BOOL)inlineBeginsWithWildcard;
@property(readonly, nonatomic) BOOL inlineContainsWildcard;
@property(readonly, nonatomic) NSCharacterSet *wildcardCharacterSet;
@property(readonly, nonatomic) BOOL canTypeNonMappedCharacters; // @synthesize canTypeNonMappedCharacters=_canTypeNonMappedCharacters;
@property(readonly, nonatomic) BOOL commitDirectlyWhenExactMatch; // @synthesize commitDirectlyWhenExactMatch=_commitDirectlyWhenExactMatch;
- (id)punctuationListForKey:(unsigned short)arg1;
@property(readonly, nonatomic) NSString *keyboardLayoutName; // @synthesize keyboardLayoutName=_keyboardLayoutName;
@property(readonly, nonatomic) NSCharacterSet *inputCharacterSet; // @synthesize inputCharacterSet=_inputCharacterSet;
@property(readonly, nonatomic) unsigned long long maxLengthOfInline; // @synthesize maxLengthOfInline=_maxLengthOfInline;
@property(readonly, nonatomic) unsigned long long analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(readonly, nonatomic) unsigned long long mecabraCreationOptions; // @synthesize mecabraCreationOptions=_mecabraCreationOptions;
@property(readonly, nonatomic) int mecabraInputMethodType; // @synthesize mecabraInputMethodType=_mecabraInputMethodType;
- (double)numberOfVisibleCandidatesAtOutsetForOrientation:(unsigned long long)arg1;
- (int)candidateWindowTypeForOrientation:(unsigned long long)arg1;
- (BOOL)didHandleCandidateSelectionChanged:(id)arg1;
- (BOOL)didHandleCandidateSelected:(id)arg1;
- (void)reset;
- (void)endSession;
- (BOOL)inlineEmpty;
@property(readonly, nonatomic) NSString *shownInlineText; // @synthesize shownInlineText=_shownInlineText;
- (id)composedText;
- (void)updateMarkedText;
- (void)showPunctationCandidates;
- (BOOL)handleCharacter:(unsigned short)arg1;
- (BOOL)handleEnd;
- (BOOL)handleHome;
- (BOOL)handleForwardDelete;
- (BOOL)handleTab;
- (BOOL)moveDown;
- (BOOL)moveUp;
- (BOOL)moveRight;
- (BOOL)moveLeft;
- (BOOL)handleSpace;
- (BOOL)matchExactCandidate;
- (BOOL)handleEscape;
- (BOOL)handleDelete;
- (BOOL)handleReturn;
- (BOOL)handleKeypadCharacter:(unsigned short)arg1;
- (BOOL)handleNumberKey:(unsigned short)arg1;
- (BOOL)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)arg1;
- (BOOL)handleEvent:(id)arg1 client:(id)arg2;
- (void)showAssociatedWords:(id)arg1;
- (BOOL)validateInlineText;
- (BOOL)handleSpaceForSpecialWindowState;
- (BOOL)handleSpaceForNormalInlineState;
- (BOOL)handleSpaceForNormalInlineStateWithDynamicPrompt;
- (BOOL)handleSpaceForNormalInlineStateWithNonDynamicPrompt;
- (id)candidateFromPreviousCandidateByAppending:(id)arg1;
- (id)candidateWithString:(id)arg1;
- (BOOL)shouldFadeLongReadings;
- (id)candidateSurfaceAtIndex:(unsigned long long)arg1;
- (void)updateCandidates;
- (id)enumeratedCandidates;
- (BOOL)consumeEventIfInlineNotEmptyOrCandidateWindowOpened;
- (BOOL)consumeEventIfInlineNotEmpty;
- (void)commitInlineForSpecialWindow;
- (void)commitInline;
- (void)commitCandidate;
- (id)selectedCandidate;
- (void)setCandidates:(id)arg1;
- (void)showCandidateWindowIfNeeded;
- (void)updateSettings;
- (void)checkSettings:(id)arg1 withClient:(id)arg2;
- (void)initializeAll:(id)arg1 withClient:(id)arg2 withController:(id)arg3;
- (void)dealloc;

@end

