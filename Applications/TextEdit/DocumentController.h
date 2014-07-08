//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocumentController.h"

@class NSLock, NSMutableArray, NSMutableDictionary;

@interface DocumentController : NSDocumentController
{
    NSMutableDictionary *customOpenSettings;
    NSMutableArray *deferredDocuments;
    NSLock *transientDocumentLock;
    NSLock *displayDocumentLock;
}

+ (id)encodingAccessory:(unsigned long long)arg1 includeDefaultEntry:(BOOL)arg2 encodingPopUp:(id *)arg3 checkBox:(id *)arg4;
- (id)defaultType;
- (BOOL)lastSelectedIgnoreRichForURL:(id)arg1;
- (BOOL)lastSelectedIgnoreHTMLForURL:(id)arg1;
- (unsigned long long)lastSelectedEncodingForURL:(id)arg1;
- (void)beginOpenPanel:(id)arg1 forTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addDocument:(id)arg1;
- (id)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 error:(id *)arg3;
- (void)replaceTransientDocument:(id)arg1;
- (void)displayDocument:(id)arg1;
- (id)transientDocumentToReplace;
- (id)openUntitledDocumentAndDisplay:(BOOL)arg1 error:(id *)arg2;
- (id)openDocumentWithContentsOfPasteboard:(id)arg1 display:(BOOL)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)awakeFromNib;

@end
