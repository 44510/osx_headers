//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IFPathMapper : NSObject
{
    struct PathMapping *firstPathMapping;
    char lastLookupResult[1024];
}

- (void)loadPathMappingsFromTokensDictionary:(id)arg1;
- (void)loadPathMappings:(id)arg1;
- (id)allTokenizedPathRoots;
- (const char *)referencePathWithTokenizedPathUTF8:(const char *)arg1;
- (id)referencePathWithTokenizedPath:(id)arg1;
- (const char *)tokenizedPathWithReferencePathUTF8:(const char *)arg1;
- (id)tokenizedPathWithReferencePath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

