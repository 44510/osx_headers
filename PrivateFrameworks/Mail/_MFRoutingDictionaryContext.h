//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface _MFRoutingDictionaryContext : NSObject
{
    NSMutableArray *_successfullyRouted;
    NSMutableArray *_rejectedMessages;
    NSMutableArray *_messagesToBeDeleted;
    NSMutableSet *_destinationStores;
}

@property(retain, nonatomic) NSMutableSet *destinationStores; // @synthesize destinationStores=_destinationStores;
@property(retain, nonatomic) NSMutableArray *messagesToBeDeleted; // @synthesize messagesToBeDeleted=_messagesToBeDeleted;
@property(retain, nonatomic) NSMutableArray *rejectedMessages; // @synthesize rejectedMessages=_rejectedMessages;
@property(retain, nonatomic) NSMutableArray *successfullyRouted; // @synthesize successfullyRouted=_successfullyRouted;
- (void).cxx_destruct;

@end

