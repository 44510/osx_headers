//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FolderTreeNode.h"

@class NSArrayController, NSSet;

@interface SmartFolderTreeNode : FolderTreeNode
{
    NSArrayController *_backingController;
    NSSet *_backingContent;
    double _topMargin;
}

+ (id)keyPathsForValuesAffectingNotes;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) NSSet *backingContent; // @synthesize backingContent=_backingContent;
@property(retain, nonatomic) NSArrayController *backingController; // @synthesize backingController=_backingController;
- (void).cxx_destruct;
- (void)_defaultAccountDidChange:(id)arg1;
- (double)preferredCellHeight;
- (id)persistentIdentifier;
- (id)notes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_filterBackingNotes;
- (void)_objectsChanged:(id)arg1;
- (void)setIsForTopLevelItem:(BOOL)arg1;
- (void)dealloc;
- (id)initWithRepresentedObject:(id)arg1;

@end

