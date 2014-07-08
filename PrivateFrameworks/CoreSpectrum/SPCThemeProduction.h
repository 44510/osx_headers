//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TDCustomAssetSource.h"

@class NSString, SPCElementPart, SPCElementState, SPCImage;

@interface SPCThemeProduction : NSObject <TDCustomAssetSource>
{
    SPCElementPart *_elementPart;
    SPCElementState *_elementState;
    SPCImage *_cachedImage;
}

+ (id)themeProductionWithElementPart:(id)arg1 inState:(id)arg2;
@property(retain, nonatomic) SPCImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(retain, nonatomic) SPCElementState *elementState; // @synthesize elementState=_elementState;
@property(retain, nonatomic) SPCElementPart *elementPart; // @synthesize elementPart=_elementPart;
- (id)customAssetReferenceData;
- (struct CGImage *)customAssetImage;
- (struct CGSize)customAssetSize;
- (void)_ensureCachedImage;
- (void)dealloc;
- (id)initWithElementPart:(id)arg1 inState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
