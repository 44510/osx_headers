//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@interface CKDModifyBadgeOperation : CKDDatabaseOperation
{
    BOOL _thisDeviceOnly;
    unsigned long long _badgeValue;
}

@property(readonly, nonatomic) BOOL thisDeviceOnly; // @synthesize thisDeviceOnly=_thisDeviceOnly;
@property(readonly, nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (void)main;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

