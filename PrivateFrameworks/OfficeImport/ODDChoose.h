//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray, ODDOtherwise;

__attribute__((visibility("hidden")))
@interface ODDChoose : ODDLayoutObject
{
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (void)setOtherwise:(id)arg1;
- (id)otherwise;
- (void)addWhen:(id)arg1;
- (id)whens;
- (void)dealloc;
- (id)init;

@end
