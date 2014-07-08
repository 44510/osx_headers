//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSMutableArray, NSString, NSWindow;

@interface MMService : NSObject
{
    struct __CFString *_accountID;
    struct __CFString *_serviceID;
    NSWindow *_parentWindow;
    BOOL _itemEnabled;
    NSString *_infoButtonLabel;
    BOOL _alwaysShowOptions;
    BOOL _optionsButtonEnabled;
    NSString *_progressString;
    NSString *_statusString;
    long long _statusCode;
    BOOL _determiningStatus;
    BOOL _isPrimary;
    NSMutableArray *_aeArray;
    NSImage *_icon;
}

@property(retain) NSMutableArray *aeArray; // @synthesize aeArray=_aeArray;
@property(readonly) BOOL isPrimary; // @synthesize isPrimary=_isPrimary;
@property(getter=isDeterminingStatus) BOOL determiningStatus; // @synthesize determiningStatus=_determiningStatus;
@property long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain) NSString *statusString; // @synthesize statusString=_statusString;
@property(retain) NSString *progressString; // @synthesize progressString=_progressString;
@property BOOL optionsButtonEnabled; // @synthesize optionsButtonEnabled=_optionsButtonEnabled;
@property BOOL alwaysShowOptions; // @synthesize alwaysShowOptions=_alwaysShowOptions;
@property(retain) NSString *infoButtonLabel; // @synthesize infoButtonLabel=_infoButtonLabel;
@property BOOL itemEnabled; // @synthesize itemEnabled=_itemEnabled;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void)handleAEEvents:(id)arg1;
- (void)_serviceFailed:(id)arg1;
- (void)_postServiceStatusChangedNotification;
- (void)showMoreInfo:(id)arg1;
- (BOOL)determiningStatus;
@property(readonly) NSString *displayName; // @dynamic displayName;
@property(readonly) NSString *defaultAppName;
@property(readonly, retain) NSImage *icon;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)properties;
- (void)_setEnabled:(BOOL)arg1 withOptions:(int)arg2;
- (void)_setEnabled:(BOOL)arg1;
- (BOOL)hasDataToMerge;
- (BOOL)canEnable:(id *)arg1;
- (BOOL)canEnable;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 isPrimary:(BOOL)arg3 withWindow:(id)arg4;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 withWindow:(id)arg3;
- (void)reconcileEnableStatus;
- (BOOL)isInactiveOrEnabled;
- (BOOL)_isEnabledForDisplay;
- (BOOL)isEnabled;
@property(readonly, copy) NSString *serviceID;
@property(readonly, copy) NSString *accountID;
- (void)invalidateService;
- (void)dealloc;
- (id)initWithServiceID:(id)arg1 forAccount:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

