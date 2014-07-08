//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Element.h"

@class Folder, NSMutableArray;

@interface FolderAction : Element
{
    NSMutableArray *_scripts;
    Folder *_folder;
    NSMutableArray *_priorContents;
    CDUnknownFunctionPointerType _FNSubscriptionUPP;
    struct OpaqueFNSubscriptionRef *_FNSubscriptionRef;
}

- (id)deleteVerb:(id)arg1;
- (void)setPriorContents:(id)arg1;
- (id)priorContents;
- (id)currentContents;
- (unsigned long long)scriptIndexForName:(id)arg1;
- (id)scriptForName:(id)arg1;
- (void)replaceInScripts:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeFromScriptsAtIndex:(unsigned int)arg1;
- (void)insertInScripts:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertInScripts:(id)arg1;
- (id)valueInScriptsWithName:(id)arg1;
- (id)scripts;
- (unsigned int)countScripts;
- (unsigned int)countOfScripts;
- (void)setName:(id)arg1;
- (id)name;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)disk;
- (id)volume;
- (void)setPath:(id)arg1;
- (id)path;
- (void)propogateBookmark;
- (void)setBookmark:(id)arg1;
- (id)bookmark;
- (id)folder;
- (void)setAttributes:(id)arg1;
- (void)dealloc;
- (id)init;

@end

