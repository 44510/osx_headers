//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

__attribute__((visibility("hidden")))
@interface ODDPoint : NSObject
{
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)arg1 order:(unsigned long long)arg2 array:(id *)arg3;
- (void)setText:(id)arg1;
- (id)text;
- (id)shapeProperties;
- (id)propertySet;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)init;

@end

