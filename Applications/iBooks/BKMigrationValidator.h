//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOpenSavePanelDelegate.h"

@class NSString;

@interface BKMigrationValidator : NSObject <NSOpenSavePanelDelegate>
{
    unsigned long long _migratedLibrarySize;
}

@property(nonatomic) unsigned long long migratedLibrarySize; // @synthesize migratedLibrarySize=_migratedLibrarySize;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

