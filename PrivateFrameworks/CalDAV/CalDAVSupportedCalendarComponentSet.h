//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem
{
    NSMutableSet *_comps;
}

@property(retain, nonatomic) NSMutableSet *comps; // @synthesize comps=_comps;
@property(readonly, nonatomic) NSSet *compNames;
- (id)childrenToWrite;
- (void)addComp:(id)arg1;
- (id)description;
- (id)componentsAsString;
- (void)dealloc;
- (id)init;
- (id)copyParseRules;

@end

