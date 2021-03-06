//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSound.h"

@interface NSSound (MailAdditions)
+ (id)soundsAtPaths:(id)arg1;
+ (id)appendSoundsToPaths:(id)arg1;
+ (id)containerLibrarySoundsDirs;
+ (id)tildeLibrarySoundsDirs;
+ (id)networkLibrarySoundsDirs;
+ (id)librarySoundsDirs;
+ (id)systemLibrarySoundsDirs;
+ (id)validPathToSound:(id)arg1;
+ (void)addSoundPathToPlayList:(id)arg1 playImmediately:(BOOL)arg2;
+ (void)addSoundToPlayList:(id)arg1 playImmediately:(BOOL)arg2;
+ (void)_addSoundOrPathToPlayList:(id)arg1 playImmediately:(BOOL)arg2;
+ (void)_setupPlayList;
+ (void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2;
+ (void)_playSound;
+ (void)_playNextSound;
- (BOOL)_playAsMailSound;
@end

