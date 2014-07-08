//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSManagedObject;

@interface IMFetchedResultsObject : NSObject
{
    NSManagedObject *_object;
    NSIndexPath *_originalIndexPath;
    NSIndexPath *_updatedIndexPath;
    unsigned long long _changeType;
}

@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) NSIndexPath *updatedIndexPath; // @synthesize updatedIndexPath=_updatedIndexPath;
@property(retain, nonatomic) NSIndexPath *originalIndexPath; // @synthesize originalIndexPath=_originalIndexPath;
@property(retain, nonatomic) NSManagedObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)initWithManagedObject:(id)arg1 originalIndexPath:(id)arg2 changeType:(unsigned long long)arg3 updatedIndexPath:(id)arg4;
- (id)init;

@end

