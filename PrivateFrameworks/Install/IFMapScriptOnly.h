//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IFPackageController;

@interface IFMapScriptOnly : NSObject
{
    IFPackageController *_packageController;
    int _scriptType;
}

+ (id)itemWithPackageController:(id)arg1 scriptType:(int)arg2;
- (int)scriptType;
- (id)packageController;
- (void)dealloc;
- (id)initWithPackageController:(id)arg1 scriptType:(int)arg2;

@end

