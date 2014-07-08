//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSProVectorAssetStore : NSObject
{
    NSMutableDictionary *_store;
    NSMutableArray *_documents;
    NSMutableArray *_filepaths;
}

+ (id)sharedStore;
- (id)_generateRecordForSpecifier:(id)arg1;
- (id)_recordForSpecifier:(id)arg1;
- (struct CGDisplayList *)displayListForSpecifier:(id)arg1;
- (struct CGPDFPage *)pageForSpecifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

