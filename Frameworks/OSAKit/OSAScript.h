//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, NSString, NSURL, OSALanguage, OSALanguageInstance, OSAScriptPrivate;

@interface OSAScript : NSObject <NSCopying>
{
    OSAScriptPrivate *_private;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    void *_reserved6;
}

+ (id)scriptDataDescriptorWithContentsOfURL:(id)arg1;
+ (unsigned int)languageSubTypeForScriptDataDescriptor:(id)arg1;
+ (id)defaultTextAttributes;
+ (void)sourceStylesChanged;
+ (id)scriptWithDataDescriptor:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id *)arg5;
+ (id)scriptWithCompiledData:(id)arg1 error:(id *)arg2;
+ (id)scriptWithSource:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4;
+ (id)scriptWithSource:(id)arg1 language:(id)arg2;
+ (id)scriptWithSource:(id)arg1;
+ (id)scriptWithContentsOfURL:(id)arg1 languageInstance:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id *)arg4;
+ (id)scriptWithContentsOfURL:(id)arg1 language:(id)arg2 error:(id *)arg3;
+ (id)scriptWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (void)initialize;
- (id)compiledDataForType:(id)arg1 usingStorageOptions:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)richTextFromDescriptor:(id)arg1;
@property(readonly, copy) NSAttributedString *richTextSource;
- (id)executeHandlerWithName:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)executeAndReturnDisplayValue:(id *)arg1 error:(id *)arg2;
- (id)executeAppleEvent:(id)arg1 error:(id *)arg2;
- (id)executeAndReturnError:(id *)arg1;
- (BOOL)compileAndReturnError:(id *)arg1;
- (void)setScriptLocation;
@property(retain) OSALanguageInstance *languageInstance;
@property(retain) OSALanguage *language;
- (void)setIsExecuting:(BOOL)arg1;
- (BOOL)isExecuting;
@property(readonly, copy) NSURL *url;
@property(readonly, getter=isCompiled) BOOL compiled;
@property(readonly, copy) NSString *source;
- (unsigned int)_compiledScriptID;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScriptDataDescriptor:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithCompiledData:(id)arg1 fromURL:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithCompiledData:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 languageInstance:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 language:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithSource:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4;
- (id)initWithSource:(id)arg1 language:(id)arg2;
- (id)initWithSource:(id)arg1;
- (id)init;
- (void)setDefaultTarget:(id)arg1;
- (id)defaultTarget;
- (struct ComponentInstanceRecord *)_defaultComponentInstance;
- (struct ComponentInstanceRecord *)_sharedComponentInstance;
- (struct ComponentInstanceRecord *)_componentInstance;
- (BOOL)hasOpenHandler;
- (long long)lineNumberForRange:(struct _NSRange)arg1;
- (unsigned int)compiledScriptID;
- (id)sourceAndReturnError:(id *)arg1;
- (void)setURL:(id)arg1;
- (void)setDate:(id)arg1;
- (id)date;
- (id)name;
- (id)_initWithContentsOfURL:(id)arg1 languageInstance:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id *)arg4;
- (id)_initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)_initWithContentsOfFile:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id *)arg5;
- (id)_initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)_initWithDataDescriptor:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id *)arg5;
- (id)_initWithData:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id *)arg5;
- (id)_initWithData:(id)arg1 error:(id *)arg2;
- (id)_initWithScriptIDNoCopy:(unsigned int)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4;
- (id)_initWithScriptIDNoCopy:(unsigned int)arg1;
- (id)_infoForOSAError:(int)arg1;

@end

