//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSUpdateFolderType : EWSBaseRequestType
{
    NSArray *_FolderChanges;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *FolderChanges; // @synthesize FolderChanges=_FolderChanges;
- (void)dealloc;

@end

