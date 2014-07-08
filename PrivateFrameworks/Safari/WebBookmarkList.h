//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/WebBookmark.h>

__attribute__((visibility("hidden")))
@interface WebBookmarkList : WebBookmark
{
}

+ (id)smallImageForBookmarkList;
- (id)_childrenIncludingFolders:(BOOL)arg1;
- (BOOL)isFolderWithRole:(id)arg1;
- (void)setAutomaticallyOpensInTabs:(BOOL)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeChild:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)leafChildren;
- (id)folderAndLeafChildren;
- (unsigned long long)numberOfChildren;
- (int)bookmarkType;
- (void)setHasDefaultSiteOrFolderIcon:(BOOL)arg1;
- (BOOL)hasDefaultSiteOrFolderIcon;
- (id)icon;

@end

