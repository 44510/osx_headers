//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FI_FinderURLResolver : NSObject
{
    struct TNSRef<NSMutableDictionary *> _resolvedURLMap;
    _Bool _tornDown;
}

+ (void)tearDown;
+ (id)resolver;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TFENode)nodeForURL:(id)arg1;
- (void)resolveURLAsync:(id)arg1;
- (void)resolutionCompleted:(id)arg1;
- (void)cancelResolutions;
- (id)init;
- (void)tearDown;

@end

