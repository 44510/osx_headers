//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpectrum/SPCObject.h>

@class SPCImageAssetRep;

@interface SPCImageAssetRenderer : SPCObject
{
    SPCImageAssetRep *_assetRep;
}

@property SPCImageAssetRep *assetRep; // @synthesize assetRep=_assetRep;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)initWithAssetRep:(id)arg1;

@end

