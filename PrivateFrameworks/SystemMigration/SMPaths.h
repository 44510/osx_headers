//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, SMSystem_Daemon;

@interface SMPaths : NSObject
{
    SMSystem_Daemon *_system;
}

+ (id)systemPrintersPKGIDs;
@property(retain) SMSystem_Daemon *system; // @synthesize system=_system;
- (void).cxx_destruct;
@property(readonly) NSSet *systemFilesFromReceipts;
@property(readonly) NSSet *systemReceipts;
- (id)initWithSystem:(id)arg1;

@end

