//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSItemIdType, NSDateComponents;

@interface EWSOccurrenceInfoType : NSObject
{
    EWSItemIdType *_ItemId;
    NSDateComponents *_Start;
    NSDateComponents *_End;
    NSDateComponents *_OriginalStart;
}

+ (id)definition;
@property(retain, nonatomic) NSDateComponents *OriginalStart; // @synthesize OriginalStart=_OriginalStart;
@property(retain, nonatomic) NSDateComponents *End; // @synthesize End=_End;
@property(retain, nonatomic) NSDateComponents *Start; // @synthesize Start=_Start;
@property(retain, nonatomic) EWSItemIdType *ItemId; // @synthesize ItemId=_ItemId;
- (void)dealloc;
- (id)description;

@end

