//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol ICPSharedPhotoStreamServiceClient <NSObject>
- (void)didFindCloudFeedEntriesUpdated:(NSArray *)arg1 added:(NSArray *)arg2 deleted:(NSArray *)arg3;
- (void)didFindCloudFeedChanges;
- (void)didMarkMediaItemWithIdentifierAsHavingUnreadComments:(NSString *)arg1;
- (void)didUpdateUnviewedMediaItemCountForStreamWithIdentifier:(NSString *)arg1;
- (void)didMarkSharedStreamWithIdentifierAsHavingUnreadContent:(NSString *)arg1;
- (void)didFindInvitationChanges:(NSDictionary *)arg1;
- (void)didFindCommentChangeForMediaItemWithIdentifier:(NSString *)arg1;
- (void)didFindNewSharedStreamWithIdentifier:(NSString *)arg1;
@end

