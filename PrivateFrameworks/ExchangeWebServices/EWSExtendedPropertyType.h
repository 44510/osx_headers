//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSPathToExtendedFieldType;

@interface EWSExtendedPropertyType : NSObject
{
    EWSPathToExtendedFieldType *_ExtendedFieldURI;
    id _Item;
}

+ (id)definition;
@property(retain, nonatomic) id Item; // @synthesize Item=_Item;
@property(retain, nonatomic) EWSPathToExtendedFieldType *ExtendedFieldURI; // @synthesize ExtendedFieldURI=_ExtendedFieldURI;
- (id)description;
- (void)dealloc;

@end

