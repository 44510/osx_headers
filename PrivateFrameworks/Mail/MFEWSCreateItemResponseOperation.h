//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSResponseOperation.h>

@class NSString;

@interface MFEWSCreateItemResponseOperation : MFEWSResponseOperation
{
    NSString *_itemId;
}

@property(copy) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;

@end

