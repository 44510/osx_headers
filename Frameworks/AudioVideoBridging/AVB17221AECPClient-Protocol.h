//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVB17221AECPInterface, AVB17221AECPMessage;

@protocol AVB17221AECPClient
- (BOOL)AECPDidReceiveResponse:(AVB17221AECPMessage *)arg1 onInterface:(AVB17221AECPInterface *)arg2;
- (BOOL)AECPDidReceiveCommand:(AVB17221AECPMessage *)arg1 onInterface:(AVB17221AECPInterface *)arg2;
@end

