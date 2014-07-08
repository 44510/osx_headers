//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSString;

@interface ECMultiScaleImage : NSObject
{
    NSString *_name;
    NSBundle *_bundle;
    float _scaleFactor;
    id _image;
    _Bool _scaleFactorChanged;
}

+ (id)imageWithName:(id)arg1 inBundle:(id)arg2 usingScaleFactor:(float)arg3;
+ (id)imageWithName:(id)arg1 usingScaleFactor:(float)arg2;
+ (id)multiScaleImageWithName:(id)arg1 inBundle:(id)arg2 usingScaleFactor:(float)arg3;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) id image; // @synthesize image=_image;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 usingScaleFactor:(float)arg3;

@end

