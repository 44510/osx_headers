//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface _SOAPParserFrame : NSObject
{
    id _value;
    Class _type;
    NSMutableDictionary *_inlineArraysByPropertyName;
}

@property(retain, nonatomic) NSMutableDictionary *inlineArraysByPropertyName; // @synthesize inlineArraysByPropertyName=_inlineArraysByPropertyName;
@property(nonatomic) Class type; // @synthesize type=_type;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)description;
- (void)dealloc;

@end

