//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSData, NSDictionary, NSFileWrapper, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableString, NSString, NSURL;

@interface NSHTMLWriter : NSObject
{
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSData *_htmlData;
    NSMutableString *_bodyStr;
    NSFileWrapper *_fileWrapper;
    NSMutableDictionary *_subresources;
    NSData *_webArchiveData;
    NSMutableArray *_paraStyleStrings;
    NSMutableArray *_paraStyleArrays;
    NSMutableIndexSet *_paraStyleIndexes;
    NSMutableIndexSet *_listItemStyleIndexes;
    NSMutableArray *_charStyleStrings;
    NSMutableArray *_charStyleArrays;
    NSMutableArray *_fontStrings;
    NSMutableArray *_tableStyleStrings;
    NSMutableArray *_tableCellStyleStrings;
    NSMutableArray *_blockStyleStrings;
    NSMutableArray *_olistStyleStrings;
    NSMutableArray *_ulistStyleStrings;
    NSMutableDictionary *_fontNames;
    long long _level;
    long long _prefixSpaces;
    NSString *_textEncodingName;
    unsigned long long _characterEncoding;
    NSURL *_outputBaseURL;
    id _resourceHandler;
    unsigned int _excludedElements1;
    unsigned int _excludedElements2;
    struct {
        unsigned int interchangeNewline:1;
        unsigned int noDefaultFonts:1;
        unsigned int tabsToSpaces:1;
        unsigned int coalesceTabSpans:1;
        unsigned int usedTabSpan:1;
        unsigned int encodingIsUnicode:1;
        unsigned int pad:26;
    } _flags;
}

+ (id)fontNameForFont:(id)arg1;
- (id)documentFragmentForDocument:(id)arg1;
- (void)readDocumentFragment:(id)arg1;
- (id)webArchiveData;
- (void)_createWebArchiveData;
- (id)webArchive;
- (id)subresources;
- (id)HTMLFileWrapper;
- (id)HTMLData;
- (void)_generateHTML;
- (void)_prepareString:(id)arg1 forConversionToEncoding:(unsigned long long)arg2;
- (BOOL)_isStrictByParsingExcludedElements;
- (void)_appendAttachment:(id)arg1 atIndex:(unsigned long long)arg2 toString:(id)arg3;
- (BOOL)_closeListsForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3;
- (void)_openListsForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3 isStrict:(BOOL)arg4;
- (unsigned long long)_listClassForList:(id)arg1;
- (BOOL)_closeBlocksForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3;
- (void)_openBlocksForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3;
- (unsigned long long)_blockClassForBlock:(id)arg1;
- (void)_closeFlags:(unsigned long long)arg1 openFlags:(unsigned long long)arg2 inString:(id)arg3;
- (void)_writeDocumentPropertiesToString:(id)arg1;
- (void)_writeDocumentProperty:(id)arg1 value:(id)arg2 toString:(id)arg3;
- (unsigned long long)_paragraphClassforParagraphStyle:(id)arg1 range:(struct _NSRange)arg2 isEmpty:(BOOL)arg3 isCompletelyEmpty:(BOOL)arg4 headerString:(id *)arg5 alignmentString:(id *)arg6 directionString:(id *)arg7;
- (id)_defaultValueForAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)_spanClassForAttributes:(id)arg1 inParagraphClass:(unsigned long long)arg2 spanClass:(unsigned long long)arg3 flags:(unsigned long long *)arg4;
- (id)_prefixDown;
- (id)_prefixUp;
- (id)_prefix;
- (void)setDocumentAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (Class)_webArchiveClass;

@end

