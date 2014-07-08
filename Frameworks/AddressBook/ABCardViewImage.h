//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface ABCardViewImage : NSObject
{
    NSData *_imageData;
    NSData *_largeImageData;
    struct CGRect _clippingRect;
}

@property struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(retain) NSData *largeImageData; // @synthesize largeImageData=_largeImageData;
@property(retain) NSData *imageData; // @synthesize imageData=_imageData;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 largeImageData:(id)arg2 clippingRect:(struct CGRect)arg3;

@end

