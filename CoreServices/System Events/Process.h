//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIElement.h"

@interface Process : UIElement
{
    struct __LSASN *_LSASNRef;
    struct ProcessSerialNumber _psn;
    struct __CFDictionary *_applicationInfo;
}

- (void *)getValueForAttribute:(struct __CFString *)arg1;
- (const struct ProcessSerialNumber *)psnPtr;
- (id)architecture;
- (id)bundleIdentifier;
- (BOOL)classic;
- (unsigned long long)partitionSpaceUsed;
- (unsigned long long)totalPartitionSize;
- (BOOL)hasScriptingTerminology;
- (BOOL)acceptsRemoteEvents;
- (BOOL)acceptsHighLevelEvents;
- (id)creatorType;
- (id)fileType;
- (id)file;
- (id)posixPath;
- (void)setFrontmost:(BOOL)arg1;
- (BOOL)frontmost;
- (void)setVisible:(BOOL)arg1;
- (BOOL)visible;
- (BOOL)backgroundOnly;
- (id)shortName;
- (id)privateShortName;
- (id)displayedName;
- (long long)unixID;
- (id)uniqueID;
- (int)getIntFromInfo:(struct __CFString *)arg1;
- (id)click:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(id)arg1 andSiblings:(id)arg2 andLSASNRef:(struct __LSASN *)arg3;
- (void *)applicationInfoForKey:(struct __CFString *)arg1;

@end

