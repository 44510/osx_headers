//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class FBCollection, NSString;

@interface FBRenameCollectionOperation : NSOperation
{
    FBCollection *_collection;
    NSString *_theNewName;
}

@property(copy) NSString *theNewName; // @synthesize theNewName=_theNewName;
@property(retain) FBCollection *collection; // @synthesize collection=_collection;
- (void)main;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 newName:(id)arg2;

@end
