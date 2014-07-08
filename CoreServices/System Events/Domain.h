//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Element.h"

@interface Domain : Element
{
    long long _code;
    long long _value;
    unsigned long long _mask;
}

- (id)valueInFoldersWithUniqueID:(id)arg1;
- (id)folders;
- (id)folderWorkflows;
- (id)folderVoices;
- (id)folderUtilities;
- (id)folderUsers;
- (id)folderTrash;
- (id)folderTemporary;
- (id)folderSystemPreferences;
- (id)folderSystem;
- (id)folderStationery;
- (id)folderStartup;
- (id)folderSpeakable;
- (id)folderSites;
- (id)folderShutdown;
- (id)folderSharedLibraries;
- (id)folderSharedDocuments;
- (id)folderScripts;
- (id)folderScriptingAdditions;
- (id)folderPublic;
- (id)folderPrintMonitor;
- (id)folderPrinterDrivers;
- (id)folderPrinterDescriptions;
- (id)folderPreferences;
- (id)folderPictures;
- (id)folderMusic;
- (id)folderMovies;
- (id)folderModemScripts;
- (id)folderLibrary;
- (id)folderLauncher;
- (id)folderKeychain;
- (id)folderInternetPlugIns;
- (id)folderHome;
- (id)folderHelp;
- (id)folderFonts;
- (id)folderFolderActionScripts;
- (id)folderFavorites;
- (id)folderExtensions;
- (id)folderDownloads;
- (id)folderDocuments;
- (id)folderDesktopPictures;
- (id)folderDesktop;
- (id)folderCurrentUser;
- (id)folderControlStripModules;
- (id)folderControlPanels;
- (id)folderApplications;
- (id)folderApplicationSupport;
- (id)folderAppleMenu;
- (id)folderForSearchPathDirectory:(unsigned long long)arg1;
- (id)findFolder:(unsigned int)arg1;
- (void)dealloc;
- (id)initDomainWithCode:(long long)arg1;

@end

