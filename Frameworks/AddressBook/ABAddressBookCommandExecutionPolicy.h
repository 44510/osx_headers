//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCommandExecutionPolicy.h>

@class ABAddressBook;

__attribute__((visibility("hidden")))
@interface ABAddressBookCommandExecutionPolicy : ABCommandExecutionPolicy
{
    ABAddressBook *_addressBook;
    SEL _saveHook;
}

- (void)saveHook;
- (void)nullSaveHook;
- (void)runWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 saveOnExecute:(BOOL)arg2;

@end
