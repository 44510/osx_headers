//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSStoryboard : NSObject
{
    id _privateStoryboardData;
}

+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;
- (id)instantiateInitialController;
- (id)instantiateControllerWithIdentifier:(id)arg1;
- (id)nibForControllerWithIdentifier:(id)arg1;
- (id)nibForStoryboardNibNamed:(id)arg1;
- (id)_bundle;
- (void)_instantiateMainMenu:(id)arg1;
- (id)identifierForStringsFile;
- (BOOL)containsNibNamed:(id)arg1;
- (id)name;
- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4 mainMenu:(id)arg5;

@end

