//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalAddressWrapper.h>

@class NSString;

@interface CalAddressPreviousWrapper : CalAddressWrapper
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_displayedName;
    NSString *_type;
    NSString *_loginName;
}

- (id)completionForSubstring:(id)arg1;
- (id)loginName;
- (BOOL)isResource;
- (BOOL)isLocation;
- (BOOL)isPerson;
- (BOOL)fromPrevious;
- (id)type;
- (id)lastName;
- (id)firstName;
- (id)displayedName;
- (void)dealloc;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 displayedName:(id)arg3 address:(id)arg4 loginName:(id)arg5 type:(id)arg6;

@end

