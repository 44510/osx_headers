//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalTruthFileMethod.h"

@class ICSDocument, NSString;

@interface CalTruthFileICSWrite : NSObject <CalTruthFileMethod>
{
    NSString *_path;
    ICSDocument *_document;
}

+ (id)methodWithPath:(id)arg1 document:(id)arg2;
- (id)description;
- (void)main;
- (void)dealloc;
- (id)initWithPath:(id)arg1 document:(id)arg2;

@end

