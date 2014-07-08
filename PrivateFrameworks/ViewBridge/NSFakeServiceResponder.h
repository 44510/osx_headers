//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSFakeServiceResponder : NSObject
{
    SEL _action;
    unsigned int _inProgress;
    struct NSObject *_serviceMarshal;
    CDStruct_e99345e9 _validateMenuItem;
    CDStruct_e99345e9 _validateUserInterfaceItem;
    NSString *_targetIdentifier;
}

- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithViewMarshal:(struct NSObject *)arg1 action:(SEL)arg2 validateMenuItem:(CDStruct_e99345e9)arg3 validateUserInterfaceItem:(CDStruct_e99345e9)arg4 targetIdentifier:(id)arg5;
- (void)dealloc;

@end

