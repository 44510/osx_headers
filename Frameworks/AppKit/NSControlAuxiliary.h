//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSControlAuxiliary : NSObject
{
    long long _tag;
    id _target;
    SEL _action;
    struct {
        unsigned int targetHelperFlag:1;
        unsigned int reserved:31;
    } _flags;
}

@property SEL action; // @synthesize action=_action;
@property long long tag; // @synthesize tag=_tag;
- (void)dealloc;
@property __weak id target;

@end

