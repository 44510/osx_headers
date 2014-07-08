//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALMainController, NSMutableSet;

@interface CalUIEventEditingManager : NSObject
{
    CALMainController *_mainController;
    NSMutableSet *_everDeletedEventIDs;
}

@property(retain) NSMutableSet *everDeletedEventIDs; // @synthesize everDeletedEventIDs=_everDeletedEventIDs;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (BOOL)eventIsDeleted:(id)arg1;
- (id)firstUndeletableEvent:(id)arg1;
- (void)deleteCommandForEvents:(id)arg1;
- (void)deleteCommand:(id)arg1;
- (id)duplicateCommand:(id)arg1;
- (void)pasteCommand:(id)arg1;
- (void)copyCommand:(id)arg1;
- (void)cutCommand:(id)arg1;
- (id)selectedEvents;
- (id)initWithMainController:(id)arg1;

@end

