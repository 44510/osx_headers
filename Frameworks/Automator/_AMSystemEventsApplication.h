//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplication.h"

@class NSString, _AMSystemEventsAppearancePreferencesObject, _AMSystemEventsCDAndDVDPreferencesObject, _AMSystemEventsClassicDomainObject, _AMSystemEventsDesktop, _AMSystemEventsDisk, _AMSystemEventsDockPreferencesObject, _AMSystemEventsExposePreferencesObject, _AMSystemEventsFolder, _AMSystemEventsLocalDomainObject, _AMSystemEventsNetworkDomainObject, _AMSystemEventsNetworkPreferencesObject, _AMSystemEventsSecurityPreferencesObject, _AMSystemEventsSystemDomainObject, _AMSystemEventsUser, _AMSystemEventsUserDomainObject;

@interface _AMSystemEventsApplication : SBApplication
{
}

+ (id)application;
- (id)disconnect:(id)arg1;
- (id)connect:(id)arg1;
- (void)endTransaction;
- (long long)beginTransaction;
- (void)abortTransaction;
- (void)keystroke:(id)arg1 using:(int)arg2;
- (void)keyCode:(long long)arg1 using:(int)arg2;
- (id)clickAt:(id)arg1;
- (void)sleep;
- (void)shutDown;
- (void)restart;
- (void)logOut;
- (void)quitSaving:(int)arg1;
@property(readonly, copy) NSString *version;
@property(readonly, copy) NSString *name;
@property(readonly) BOOL frontmost;
- (id)windows;
- (id)documents;
- (id)codesForPropertyNames;
- (id)classNamesForCodes;
@property(readonly, copy) _AMSystemEventsFolder *workflowsFolder;
@property(readonly, copy) _AMSystemEventsFolder *utilitiesFolder;
@property(readonly, copy) _AMSystemEventsUserDomainObject *userDomain;
@property BOOL UIElementsEnabled;
@property(readonly, copy) _AMSystemEventsFolder *trash;
@property(readonly, copy) _AMSystemEventsFolder *temporaryItemsFolder;
@property(readonly, copy) _AMSystemEventsSystemDomainObject *systemDomain;
@property(readonly, copy) _AMSystemEventsDisk *startupDisk;
@property(readonly, copy) _AMSystemEventsFolder *speakableItemsFolder;
@property(readonly, copy) _AMSystemEventsFolder *sitesFolder;
@property(readonly, copy) _AMSystemEventsFolder *sharedDocumentsFolder;
@property(copy) _AMSystemEventsSecurityPreferencesObject *securityPreferences;
@property(readonly, copy) _AMSystemEventsFolder *scriptsFolder;
@property(readonly, copy) _AMSystemEventsFolder *scriptingAdditionsFolder;
@property(readonly) BOOL scriptMenuEnabled;
@property long long quitDelay;
@property(readonly, copy) _AMSystemEventsFolder *publicFolder;
@property(readonly, copy) _AMSystemEventsFolder *preferencesFolder;
@property(readonly, copy) _AMSystemEventsFolder *picturesFolder;
@property(copy) _AMSystemEventsNetworkPreferencesObject *networkPreferences;
@property(readonly, copy) _AMSystemEventsNetworkDomainObject *networkDomain;
@property(readonly, copy) _AMSystemEventsFolder *musicFolder;
@property(readonly, copy) _AMSystemEventsFolder *moviesFolder;
@property(readonly, copy) _AMSystemEventsLocalDomainObject *localDomain;
@property(readonly, copy) _AMSystemEventsFolder *libraryFolder;
@property(readonly, copy) _AMSystemEventsFolder *homeFolder;
@property(readonly, copy) _AMSystemEventsFolder *fontsFolder;
@property BOOL folderActionsEnabled;
@property(readonly, copy) _AMSystemEventsFolder *FolderActionScriptsFolder;
@property(readonly, copy) _AMSystemEventsFolder *favoritesFolder;
@property(copy) _AMSystemEventsExposePreferencesObject *exposePreferences;
@property(readonly, copy) _AMSystemEventsFolder *downloadsFolder;
@property(readonly, copy) _AMSystemEventsFolder *documentsFolder;
@property(copy) _AMSystemEventsDockPreferencesObject *dockPreferences;
@property(readonly, copy) _AMSystemEventsFolder *desktopPicturesFolder;
@property(readonly, copy) _AMSystemEventsFolder *desktopFolder;
@property(readonly, copy) _AMSystemEventsUser *currentUser;
@property(readonly, copy) _AMSystemEventsDesktop *currentDesktop;
@property(readonly, copy) _AMSystemEventsClassicDomainObject *ClassicDomain;
@property(copy) _AMSystemEventsCDAndDVDPreferencesObject *CDAndDVDPreferences;
@property(readonly, copy) _AMSystemEventsFolder *applicationsFolder;
@property(readonly, copy) _AMSystemEventsFolder *applicationSupportFolder;
@property(copy) _AMSystemEventsAppearancePreferencesObject *appearancePreferences;
- (id)XMLFiles;
- (id)XMLDatas;
- (id)users;
- (id)UIElements;
- (id)QuickTimeFiles;
- (id)QuickTimeDatas;
- (id)propertyListItems;
- (id)propertyListFiles;
- (id)processes;
- (id)movieFiles;
- (id)movieDatas;
- (id)loginItems;
- (id)items;
- (id)folderActions;
- (id)folders;
- (id)filePackages;
- (id)files;
- (id)domains;
- (id)diskItems;
- (id)disks;
- (id)desktops;
- (id)deskAccessoryProcesses;
- (id)audioFiles;
- (id)audioDatas;
- (id)applicationProcesses;
- (id)aliases;

@end

