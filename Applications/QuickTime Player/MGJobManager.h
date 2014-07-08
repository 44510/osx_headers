//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSOperationQueue;

@interface MGJobManager : NSObject
{
    NSMutableArray *_jobControllers;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedJobManager;
+ (id)mappingDictionary;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)hasRunningJobs;
- (void)removeJobController:(id)arg1;
- (void)addJobController:(id)arg1;
- (id)localizedJobNameForIdentifier:(id)arg1;
- (Class)jobControllerClassForIdentifier:(id)arg1;
- (void)dealloc;
- (void)saveJobControllers;
@property(readonly, nonatomic) NSArray *jobControllers;
- (id)init;

@end

