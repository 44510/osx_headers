//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArrayController, NSMutableDictionary;

@interface MigrationErrorTableDelegate : NSObject
{
    NSMutableDictionary *prototypeCellViews;
    NSArrayController *backingData;
}

@property NSArrayController *backingData; // @synthesize backingData;
@property(retain) NSMutableDictionary *prototypeCellViews; // @synthesize prototypeCellViews;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)prototypeViewForIdentifier:(id)arg1 inTableView:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)dealloc;
- (id)init;

@end
