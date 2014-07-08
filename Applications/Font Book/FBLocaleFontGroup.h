//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGroup.h"

@class NSArray, NSLock, NSString;

@interface FBLocaleFontGroup : FBGroup
{
    NSArray *_languages;
    NSString *_displayName;
    NSLock *_lock;
}

- (id)key;
- (id)faces;
- (BOOL)isEnabled;
- (id)displayName;
- (void)removeContainers:(id)arg1;
- (void)addContainers:(id)arg1;
- (void)refreshWithGroup:(id)arg1;
- (id)addFaces:(id)arg1;
- (unsigned int)flags;
- (id)helpText;
- (id)alternateImage;
- (id)image;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)_refreshWithFaces:(id)arg1;
- (void)_localeChanged:(id)arg1;

@end
