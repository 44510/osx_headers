//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RDUndoRedoChange : NSObject
{
    unsigned short _undoRedoFlags;
}

+ (void)performUndo:(id)arg1;
+ (void)performUndo:(id)arg1 invocationTarget:(id)arg2 undoManager:(id)arg3;
+ (void)performUndo:(id)arg1 invocationTarget:(id)arg2;
+ (id)_undoManager;
@property unsigned short undoRedoFlags; // @synthesize undoRedoFlags=_undoRedoFlags;
- (id)actionName;
- (void)redo;
- (void)undo;
- (void)clearUndoRedoFlag:(unsigned short)arg1;
- (void)setUndoRedoFlag:(unsigned short)arg1;
- (BOOL)isFlagSet:(unsigned short)arg1;

@end

