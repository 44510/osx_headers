//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKNotification.h>

#import "NSSecureCoding.h"

@class CKShareID, CKSharedItemID, NSString;

@interface CKCommentNotification : CKNotification <NSSecureCoding>
{
    CKShareID *_shareID;
    NSString *_commentID;
    CKSharedItemID *_commentedItemID;
    NSString *_commenterID;
    NSString *_message;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *commenterID; // @synthesize commenterID=_commenterID;
@property(copy, nonatomic) CKSharedItemID *commentedItemID; // @synthesize commentedItemID=_commentedItemID;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

