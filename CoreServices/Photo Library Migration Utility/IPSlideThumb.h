//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IPPhotoObjCProxy, MPSlide, MPText, NSString;

@interface IPSlideThumb : NSObject
{
    IPPhotoObjCProxy *_photoProxy;
    NSString *_path;
    int _type;
    BOOL _isTitle;
    MPSlide *_slide;
    MPText *_text;
    long long _slideIndex;
}

@property(retain) MPText *text; // @synthesize text=_text;
@property long long slideIndex; // @synthesize slideIndex=_slideIndex;
@property(retain) MPSlide *slide; // @synthesize slide=_slide;
@property BOOL isTitle; // @synthesize isTitle=_isTitle;
@property int type; // @synthesize type=_type;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) IPPhotoObjCProxy *photoProxy; // @synthesize photoProxy=_photoProxy;
- (void)dealloc;

@end

