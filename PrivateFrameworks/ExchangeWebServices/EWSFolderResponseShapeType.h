//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface EWSFolderResponseShapeType : NSObject
{
    int _BaseShape;
    NSArray *_AdditionalProperties;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *AdditionalProperties; // @synthesize AdditionalProperties=_AdditionalProperties;
@property(nonatomic) int BaseShape; // @synthesize BaseShape=_BaseShape;
- (id)description;
- (void)dealloc;

@end
