//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IPropertyFINodeExtractor.h"

@interface TQLPreviewViewExtractor : IPropertyFINodeExtractor
{
    struct TString _nodeSuffix;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1 node:(const struct TFENode *)arg2;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (void)dealloc;

@end

