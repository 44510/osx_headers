//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableIndexSet, NSString, NSURL, TTActiveTextStorage, TTLogicalScreenAttributedString, TTLogicalScreenString, TTProfile, TTScrollbackTextStorage;

@interface TTLogicalScreen : NSObject
{
    TTProfile *_profile;
    struct CGSize logicalSize;
    struct _NSRange _scrollRange;
    CDStruct_9b71c0a5 _cursorPosition;
    TTScrollbackTextStorage *_scrollbackStorage;
    TTActiveTextStorage *_activeStorage;
    BOOL _isInverted;
    BOOL _isCursorVisible;
    BOOL _bracketedPasteMode;
    BOOL _isEastAsianAmbiguousWide;
    BOOL _isAlternateScreenActive;
    TTActiveTextStorage *_savedActiveStorage;
    CDStruct_9b71c0a5 _savedCursorPosition;
    NSString *_windowTitle;
    NSString *_tabTitle;
    NSURL *_representedURL;
    NSURL *_workingDirectoryURL;
    NSString *_savedWindowTitle;
    NSString *_savedTabTitle;
    NSURL *_savedRepresentedURL;
    NSURL *_savedWorkingDirectoryURL;
    BOOL _isResizing;
    unsigned long long _resizeDepth;
    unsigned long long _savedRowCount;
    unsigned long long _savedCursorOffset;
    NSMutableIndexSet *_doubleHighTopLines;
    NSMutableIndexSet *_doubleHighBottomLines;
    NSMutableIndexSet *_doubleWideLines;
    CDStruct_bff1fa32 *_unicharEndOfLineOffsetCache;
    unsigned long long _unicharOffsetCacheCursorOffset;
    unsigned long long _unicharOffsetCacheCursorLine;
    CDStruct_bff1fa32 *_unicharOffsetCacheUTF8Buffer;
    CDStruct_bff1fa32 *_unicharOffsetCacheUTF16Buffer;
    CDStruct_bff1fa32 *_unicharOffsetCacheRunBuffer;
    unsigned long long _unicharOffsetCacheGenerationNumber;
    TTLogicalScreenString *_unicharOffsetCacheString;
    TTLogicalScreenAttributedString *_attributedString;
    NSMutableIndexSet *_dirtyLines;
    BOOL _isBlitSafe;
}

+ (BOOL)automaticallyNotifiesObserversOfWorkingDirectoryURL;
+ (BOOL)automaticallyNotifiesObserversOfRepresentedURL;
+ (BOOL)automaticallyNotifiesObserversOfTabTitle;
+ (BOOL)automaticallyNotifiesObserversOfWindowTitle;
+ (BOOL)automaticallyNotifiesObserversOfContentSize;
@property(nonatomic) BOOL isEastAsianAmbiguousWide; // @synthesize isEastAsianAmbiguousWide=_isEastAsianAmbiguousWide;
@property(retain, nonatomic) NSURL *workingDirectoryURL; // @synthesize workingDirectoryURL=_workingDirectoryURL;
@property(retain, nonatomic) NSURL *representedURL; // @synthesize representedURL=_representedURL;
@property(retain, nonatomic) NSString *tabTitle; // @synthesize tabTitle=_tabTitle;
@property(retain, nonatomic) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property BOOL bracketedPasteMode; // @synthesize bracketedPasteMode=_bracketedPasteMode;
@property struct CGSize logicalSize; // @synthesize logicalSize;
- (void)pullLinesFromScrollback:(unsigned long long)arg1 toActiveStorage:(id)arg2 scanningForEmptyLines:(unsigned long long)arg3;
- (void)clearScrollbackStorage;
- (void)clearScrollback;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isBlitSafe;
- (void)setBlitSafe:(BOOL)arg1;
- (unsigned long long)logicalWidthForCharacter:(int)arg1;
- (unsigned long long)displayWidthForCharacter:(int)arg1;
- (void)getLine:(unsigned long long)arg1 UTF8Characters:(CDStruct_bff1fa32 *)arg2 runs:(CDStruct_bff1fa32 *)arg3;
- (void)setScrollRange:(struct _NSRange)arg1;
- (struct _NSRange)scrollRange;
- (BOOL)autoWrap;
- (void)setAutoWrap:(BOOL)arg1;
@property(readonly) NSURL *mainScreenWorkingDirectoryURL;
@property(readonly) NSURL *mainScreenRepresentedURL;
@property(readonly) NSString *mainScreenTabTitle;
@property(readonly) NSString *mainScreenWindowTitle;
- (void)setCursorVisible:(BOOL)arg1;
- (BOOL)isCursorVisible;
- (void)setInverted:(BOOL)arg1;
- (BOOL)isInverted;
- (void)activateAlternateScreen:(BOOL)arg1 clearing:(BOOL)arg2;
- (BOOL)isAlternateScreenActive;
- (void)truncateScrollbackFromBeginningToLineLength:(unsigned long long)arg1;
- (void)shiftLineRange:(struct _NSRange)arg1 inDirection:(unsigned long long)arg2 byAmount:(unsigned long long)arg3 withANSIBackgroundColor:(unsigned long long)arg4;
- (void)shiftLineRange:(struct _NSRange)arg1 inDirection:(unsigned long long)arg2 byAmount:(unsigned long long)arg3;
- (void)deleteUTF8CharactersInLineRange:(struct _NSRange)arg1 withANSIBackgroundColor:(unsigned long long)arg2;
- (void)deleteUTF8CharactersInLineRange:(struct _NSRange)arg1;
- (void)deleteAndReverseWrapUTF8Characters:(unsigned long long)arg1 atPosition:(CDStruct_4bcfbbae)arg2;
- (void)deleteUTF8Characters:(unsigned long long)arg1 atPosition:(CDStruct_4bcfbbae)arg2 withANSIBackgroundColor:(unsigned long long)arg3;
- (void)deleteUTF8Characters:(unsigned long long)arg1 atPosition:(CDStruct_4bcfbbae)arg2;
- (CDStruct_4bcfbbae)overwriteUTF8Characters:(const char *)arg1 length:(unsigned long long)arg2 withAttributes:(CDStruct_45ade667)arg3 atPosition:(CDStruct_4bcfbbae)arg4;
- (CDStruct_4bcfbbae)insertUTF8Characters:(const char *)arg1 length:(unsigned long long)arg2 withAttributes:(CDStruct_45ade667)arg3 atPosition:(CDStruct_4bcfbbae)arg4;
- (void)setCursorLineSize:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1 forLine:(unsigned long long)arg2;
- (unsigned long long)cursorLineSize;
- (unsigned long long)sizeForLine:(unsigned long long)arg1;
- (struct _NSRange)lineRangeForLine:(unsigned long long)arg1;
- (unsigned long long)logicalWidthForRow:(unsigned long long)arg1;
- (void)setCursorRowWrappedToNextRow:(BOOL)arg1;
- (BOOL)isCursorRowWrapped;
- (void)setCursorRowWrapped:(BOOL)arg1;
- (void)setCursorColumn:(unsigned long long)arg1;
- (unsigned long long)cursorColumn;
- (void)setCursorLine:(unsigned long long)arg1;
- (unsigned long long)cursorLine;
- (CDStruct_4bcfbbae)displayCursorPosition;
- (void)setCursorPosition:(CDStruct_4bcfbbae)arg1;
- (CDStruct_4bcfbbae)cursorPosition;
- (struct CGSize)contentSize;
- (void)setRowCount:(unsigned long long)arg1 columnCount:(unsigned long long)arg2;
- (void)endResizeOperation;
- (void)beginResizeOperation;
- (unsigned long long)scrollbackLineCount;
- (unsigned long long)lineCount;
- (void)setColumnCount:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (BOOL)validateRowCount:(id *)arg1 error:(id *)arg2;
- (void)setRowCount:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (void)rewrapLines;
- (id)scrollbackStorage;
- (void)setProfile:(id)arg1;
- (id)profile;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 columnCount:(unsigned long long)arg2 rowCount:(unsigned long long)arg3;
- (void)eraseUTF8Characters:(unsigned long long)arg1 withAttributes:(CDStruct_45ade667)arg2 atPosition:(CDStruct_4bcfbbae)arg3;
- (void)insertSampleText;
- (void)truncateUnicharOffsetCacheAtLine:(unsigned long long)arg1;
- (id)stringForUnicharRange:(struct _NSRange)arg1;
- (struct _NSRange)unicharRangeForLine:(unsigned long long)arg1;
- (CDStruct_4bcfbbae)displayPositionForUnicharOffset:(unsigned long long)arg1;
- (unsigned long long)unicharOffsetForDisplayPosition:(CDStruct_4bcfbbae)arg1;
- (unsigned long long)activeStorageUnicharLength;
- (unsigned long long)unicharLength;
- (id)attributedString;
- (id)string;
- (CDStruct_4bcfbbae)displayPositionForReverseUnicharOffset:(unsigned long long)arg1;
- (unsigned long long)reverseUnicharOffsetForDisplayPosition:(CDStruct_4bcfbbae)arg1;
- (unsigned long long)unicharOffsetForLine:(unsigned long long)arg1;
- (void)expandUnicharOffsetCacheToLine:(unsigned long long)arg1;
- (unsigned long long)unicharOffsetCacheGenerationNumber;
- (void)deallocUnicharAccess;
- (void)initUnicharAccess;
- (void)clearDirtyLines;
- (id)dirtyLines;
- (void)markLinesInRangeAsDirty:(struct _NSRange)arg1;
- (void)markRowAsDirty:(unsigned long long)arg1;
- (void)markLineAsDirty:(unsigned long long)arg1;
- (void)deallocDirtyTracking;
- (void)initDirtyTracking;

@end

