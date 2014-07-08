//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface CKFetchSharesOperationInfo : CKOperationInfo <NSSecureCoding>
{
    BOOL _isFetchAllSharesOperation;
    NSArray *_shareIDsToFetch;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isFetchAllSharesOperation; // @synthesize isFetchAllSharesOperation=_isFetchAllSharesOperation;
@property(retain, nonatomic) NSArray *shareIDsToFetch; // @synthesize shareIDsToFetch=_shareIDsToFetch;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

