//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplication.h"

@class NSBundle, NSMutableDictionary;

@interface AMSBApplication : SBApplication
{
    NSBundle *_bundle;
    NSMutableDictionary *_classForCodeDictionary;
    NSMutableDictionary *_codeForClassNameDictionary;
    NSMutableDictionary *_codeForPropertyNameDictionary;
}

- (void)loadCodes;
- (id)codesForPropertyNames;
- (id)codesForClassNames;
- (id)classNamesForCodes;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

