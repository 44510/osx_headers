//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSpotlightMetaDataController.h"

@interface TInfoWindowSpotlightMetaDataController : TSpotlightMetaDataController
{
    _Bool _isFetching;
}

@property _Bool isFetching; // @synthesize isFetching=_isFetching;
- (void)flush;
- (void)handleNodeMDAttributesChanged:(const struct TFENode *)arg1 attributes:(id)arg2 isDisplayAttributes:(_Bool)arg3;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (void)initCommon;

@end

