//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIMCandidate, CIMStrokeEngine, NSArray, NSMutableArray, NSMutableString, NSOperationQueue, NSString;

@interface CIMMecabraEngine : NSObject
{
    BOOL _adjustsWordFrequency;
    BOOL _autocorrectionEnabled;
    BOOL _shuangpinModeEnabled;
    BOOL _fuzzyPinyinEnabled;
    BOOL _addSpacesForLatinWords;
    BOOL _URLPunctuationEntered;
    unsigned long long _numFullStops;
    NSArray *_fuzzyPinyinPairs;
    BOOL _showCompletionCandidates;
    NSArray *_additionalDictionaryPaths;
    NSArray *_userWordKeyPairs;
    NSArray *_addressBookEntries;
    unsigned long long _scriptType;
    NSArray *_candidates;
    NSArray *_emojiCandidates;
    BOOL _hasExtensionEmojiCandidates;
    CIMCandidate *_selectedCandidate;
    CIMCandidate *_inlineTextCandidate;
    NSArray *_candidatesForStructuralPinyin;
    NSMutableString *_inputText;
    NSMutableString *_composedText;
    unsigned long long _composedTextCursorPosition;
    struct _NSRange _convertedTextRange;
    NSString *_composedTextForCommitting;
    BOOL _hasStrokeCandidates;
    BOOL _shouldAutomaticallyCommitSelectedCandidate;
    BOOL _supportsPunctuation;
    BOOL _canApplyToneFilter;
    struct __Mecabra *_pinyinEngine;
    CIMStrokeEngine *_strokeEngine;
    BOOL _arePunctuationCandidates;
    unsigned long long _inputTextCursorPosition;
    BOOL _filterCandidatesUsingInputTextCursorPosition;
    unsigned long long _inputTextConvertedEndPosition;
    NSString *_unconvertedInputText;
    NSMutableArray *_committedCandidates;
    NSString *_committedCandidatesText;
    unsigned long long _currentAnalysisOptions;
    unsigned long long _previousAnalysisOptions;
    unsigned long long _toneFilter;
    BOOL _lastActionWasCandidateCommit;
    NSString *_previousInputText;
    unsigned long long _numberOfTypos;
    NSOperationQueue *_operationQueue;
    NSArray *_candidateContext;
    NSString *_stringContext;
    NSString *_composedShuangpinString;
    NSString *_applicationContext;
}

+ (id)pinyinSyllables;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSString *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(copy, nonatomic) NSString *composedShuangpinString; // @synthesize composedShuangpinString=_composedShuangpinString;
@property(retain, nonatomic) NSString *stringContext; // @synthesize stringContext=_stringContext;
@property(retain, nonatomic) NSArray *candidateContext; // @synthesize candidateContext=_candidateContext;
@property(nonatomic) unsigned long long numFullStops; // @synthesize numFullStops=_numFullStops;
@property(nonatomic) BOOL URLPunctuationEntered; // @synthesize URLPunctuationEntered=_URLPunctuationEntered;
@property(nonatomic) unsigned long long numberOfTypos; // @synthesize numberOfTypos=_numberOfTypos;
@property(copy, nonatomic) NSString *previousInputText; // @synthesize previousInputText=_previousInputText;
@property(nonatomic) BOOL lastActionWasCandidateCommit; // @synthesize lastActionWasCandidateCommit=_lastActionWasCandidateCommit;
@property(nonatomic) unsigned long long toneFilter; // @synthesize toneFilter=_toneFilter;
@property(nonatomic) unsigned long long previousAnalysisOptions; // @synthesize previousAnalysisOptions=_previousAnalysisOptions;
@property(nonatomic) unsigned long long currentAnalysisOptions; // @synthesize currentAnalysisOptions=_currentAnalysisOptions;
@property(retain, nonatomic) NSMutableArray *committedCandidates; // @synthesize committedCandidates=_committedCandidates;
@property(nonatomic) unsigned long long inputTextConvertedEndPosition; // @synthesize inputTextConvertedEndPosition=_inputTextConvertedEndPosition;
@property(nonatomic) BOOL filterCandidatesUsingInputTextCursorPosition; // @synthesize filterCandidatesUsingInputTextCursorPosition=_filterCandidatesUsingInputTextCursorPosition;
@property(nonatomic) unsigned long long inputTextCursorPosition; // @synthesize inputTextCursorPosition=_inputTextCursorPosition;
@property(nonatomic) BOOL arePunctuationCandidates; // @synthesize arePunctuationCandidates=_arePunctuationCandidates;
@property(retain, nonatomic) CIMStrokeEngine *strokeEngine; // @synthesize strokeEngine=_strokeEngine;
@property(nonatomic) BOOL hasStrokeCandidates; // @synthesize hasStrokeCandidates=_hasStrokeCandidates;
@property(retain, nonatomic) NSMutableString *composedText; // @synthesize composedText=_composedText;
@property(retain, nonatomic) NSMutableString *inputText; // @synthesize inputText=_inputText;
@property(retain, nonatomic) CIMCandidate *selectedCandidate; // @synthesize selectedCandidate=_selectedCandidate;
@property(nonatomic) BOOL hasExtensionEmojiCandidates; // @synthesize hasExtensionEmojiCandidates=_hasExtensionEmojiCandidates;
@property(retain, nonatomic) NSArray *emojiCandidates; // @synthesize emojiCandidates=_emojiCandidates;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(readonly, nonatomic) unsigned long long scriptType; // @synthesize scriptType=_scriptType;
@property(retain, nonatomic) NSArray *addressBookEntries; // @synthesize addressBookEntries=_addressBookEntries;
@property(retain, nonatomic) NSArray *userWordKeyPairs; // @synthesize userWordKeyPairs=_userWordKeyPairs;
@property(copy, nonatomic) NSArray *additionalDictionaryPaths; // @synthesize additionalDictionaryPaths=_additionalDictionaryPaths;
@property(nonatomic) BOOL showCompletionCandidates; // @synthesize showCompletionCandidates=_showCompletionCandidates;
@property(copy, nonatomic) NSArray *fuzzyPinyinPairs; // @synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs;
@property(nonatomic) BOOL addSpacesForLatinWords; // @synthesize addSpacesForLatinWords=_addSpacesForLatinWords;
@property(nonatomic) BOOL fuzzyPinyinEnabled; // @synthesize fuzzyPinyinEnabled=_fuzzyPinyinEnabled;
@property(nonatomic) BOOL shuangpinModeEnabled; // @synthesize shuangpinModeEnabled=_shuangpinModeEnabled;
@property(nonatomic) BOOL autocorrectionEnabled; // @synthesize autocorrectionEnabled=_autocorrectionEnabled;
@property(nonatomic) BOOL adjustsWordFrequency; // @synthesize adjustsWordFrequency=_adjustsWordFrequency;
- (id).cxx_construct;
- (void)adaptCandidateContext:(id)arg1 stringContext:(id)arg2;
@property(readonly, nonatomic) BOOL isApplyingToneFilter;
@property(readonly, nonatomic) BOOL canApplyToneFilter; // @synthesize canApplyToneFilter=_canApplyToneFilter;
@property(readonly, nonatomic) BOOL supportsPunctuation; // @synthesize supportsPunctuation=_supportsPunctuation;
@property(readonly, nonatomic) BOOL shouldAutomaticallyCommitSelectedCandidate; // @synthesize shouldAutomaticallyCommitSelectedCandidate=_shouldAutomaticallyCommitSelectedCandidate;
@property(readonly, nonatomic) NSString *composedTextForCommitting; // @synthesize composedTextForCommitting=_composedTextForCommitting;
@property(readonly, nonatomic) struct _NSRange convertedTextRange; // @synthesize convertedTextRange=_convertedTextRange;
@property(readonly, nonatomic) NSString *committedCandidatesText;
- (id)unconvertedInputTextForAnalysis;
@property(readonly, nonatomic) NSString *unconvertedInputText; // @synthesize unconvertedInputText=_unconvertedInputText;
@property(readonly, nonatomic) unsigned long long composedTextCursorPosition; // @synthesize composedTextCursorPosition=_composedTextCursorPosition;
@property(readonly, nonatomic) NSArray *candidatesForStructuralPinyin; // @synthesize candidatesForStructuralPinyin=_candidatesForStructuralPinyin;
@property(readonly, nonatomic) CIMCandidate *inlineTextCandidate; // @synthesize inlineTextCandidate=_inlineTextCandidate;
@property(readonly, nonatomic) struct __Mecabra *pinyinEngine; // @synthesize pinyinEngine=_pinyinEngine;
@property(readonly, nonatomic) int inputMethodType;
@property(readonly, retain, nonatomic) NSString *inputModeName;
- (void)deleteEntryFromLearningDictionaryForCandidate:(id)arg1;
- (void)reset;
- (void)selectNextTone;
- (void)selectPreviousTone;
- (BOOL)commitCandidate:(id)arg1;
- (BOOL)moveCursorToEnd;
- (BOOL)moveCursorToHome;
- (BOOL)moveCursorRightByOneSyllable;
- (BOOL)moveCursorRight;
- (BOOL)moveCursorLeftByOneSyllable;
- (BOOL)moveCursorLeft;
- (BOOL)forwardDeleteFromInput;
- (BOOL)deleteLastSyllableFromInput;
- (BOOL)deleteFromInput;
- (BOOL)deleteCharactersFromInput:(unsigned long long)arg1 forwardDelete:(BOOL)arg2;
- (BOOL)addInput:(id)arg1;
- (void)updateUserDictionary:(id)arg1;
- (void)updateWordListAndExpertDictionary:(id)arg1;
- (void)updateContacts:(id)arg1;
- (void)analyzeInput;
- (id)filteredCandidatesFromCandidates:(id)arg1 usingTone:(unsigned long long)arg2;
- (id)tonesForCharacters:(id)arg1;
- (void)updateComposedText;
- (id)segmentedPinyinStringFromString:(id)arg1 mecabraCandidate:(id)arg2;
- (id)pinyinStringByReplacingOccurrencesOfV:(id)arg1;
- (id)stringByApplyingToneMarkToFirstSyllableOfString:(id)arg1;
- (void)updateInputTextConvertedEndPosition;
- (void)resetToneFilter;
- (void)resetAnalysisOptions;
- (unsigned long long)defaultAnalysisOptions;
- (void)dealloc;
- (id)initWithScriptType:(unsigned long long)arg1;

@end

