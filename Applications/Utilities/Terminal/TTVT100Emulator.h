//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTEventEncoder.h"
#import "TTOutputDecoder.h"

@class NSMutableIndexSet, NSMutableString, TTLogicalScreen, TTProfile, TTShell, TTTabController;

@interface TTVT100Emulator : NSObject <TTEventEncoder, TTOutputDecoder>
{
    unsigned long long _state;
    TTLogicalScreen *_logicalScreen;
    TTShell *_shell;
    TTProfile *_profile;
    TTTabController *_controller;
    unsigned long long *_stateTable;
    unsigned long long *_defaultBaseStateTable;
    BOOL _screenSavedWrapState;
    unsigned int _numParams;
    int _params[32];
    NSMutableString *_operatingSystemCommand;
    struct _NSRange _scrollRange;
    BOOL _isScrollRangeActive;
    BOOL _isCursorInMargin;
    CDStruct_af81b1d9 _savedCursorState;
    CDStruct_af81b1d9 _alternateSavedCursorState;
    struct {
        unsigned int linefeedNewline:1;
        unsigned int scrollRegionOrigin:1;
        unsigned int autoWrap:1;
        unsigned int reverseLineWrap:1;
        unsigned int keyboardAction:1;
        unsigned int autoRepeat:1;
        unsigned int applicationKeypad:1;
        unsigned int applicationCursor:1;
        unsigned int localEcho:1;
        unsigned int insertMode:1;
        unsigned int allowDECCOLM:1;
    } _modeFlags;
    CDStruct_45ade667 _currentAttributes;
    struct {
        unsigned char original;
        char *translated;
        unsigned int length;
        unsigned int custom:1;
    } _baseTranslationTable[128];
    char *_baseTranslationString;
    CDStruct_183601bc *_translationTable[5][128];
    unsigned int _currentCharSet;
    unsigned int _savedCharSet;
    unsigned int _selectedCharSet;
    unsigned int _shiftCharSet;
    BOOL _percentCharSet;
    BOOL _defaultTabStops;
    NSMutableIndexSet *_tabStops;
    BOOL _lastPrintedCharacter;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performOperatingSystemCommand;
- (void)resetTabStops;
- (void)loadTranslationVector:(CDStruct_4c79594d *)arg1 intoSet:(unsigned int)arg2;
- (void)setScrollRange:(struct _NSRange)arg1;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)setCursorColumn:(unsigned long long)arg1;
- (unsigned long long)cursorColumn;
- (unsigned int)rowCount;
- (void)setCursorRow:(unsigned long long)arg1;
- (void)advanceCursorRow;
- (unsigned long long)unshiftedCursorRow;
- (unsigned long long)cursorRow;
- (id)encodeEvent:(id)arg1;
- (id)decodeData:(id)arg1;
- (void)restoreCursorState;
- (void)saveCursorState;
- (void)hardReset;
- (void)softReset;
- (void)vt52EmulationMode:(BOOL)arg1;
- (void)setObserversForLogicalScreen:(BOOL)arg1;
- (void)setProfile:(id)arg1;
- (id)profile;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (id)initWithShell:(id)arg1 logicalScreen:(id)arg2 profile:(id)arg3;

@end

