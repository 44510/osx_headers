//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EWSDelegatePermissionsType : NSObject
{
    int _CalendarFolderPermissionLevel;
    int _TasksFolderPermissionLevel;
    int _InboxFolderPermissionLevel;
    int _ContactsFolderPermissionLevel;
    int _NotesFolderPermissionLevel;
    int _JournalFolderPermissionLevel;
}

+ (id)definition;
@property(nonatomic) int JournalFolderPermissionLevel; // @synthesize JournalFolderPermissionLevel=_JournalFolderPermissionLevel;
@property(nonatomic) int NotesFolderPermissionLevel; // @synthesize NotesFolderPermissionLevel=_NotesFolderPermissionLevel;
@property(nonatomic) int ContactsFolderPermissionLevel; // @synthesize ContactsFolderPermissionLevel=_ContactsFolderPermissionLevel;
@property(nonatomic) int InboxFolderPermissionLevel; // @synthesize InboxFolderPermissionLevel=_InboxFolderPermissionLevel;
@property(nonatomic) int TasksFolderPermissionLevel; // @synthesize TasksFolderPermissionLevel=_TasksFolderPermissionLevel;
@property(nonatomic) int CalendarFolderPermissionLevel; // @synthesize CalendarFolderPermissionLevel=_CalendarFolderPermissionLevel;

@end

