//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LoginItemsPost : NSObject
{
}

+ (BOOL)addPathToLoginItems:(id)arg1 forUser:(id)arg2 withHomePath:(id)arg3 managedPrefs:(BOOL)arg4;
+ (void)doLoginItems:(id)arg1 withHome:(id)arg2 withOriginalHomeLoc:(id)arg3 withGroupHomeLoc:(id)arg4 userUID:(unsigned int)arg5;
+ (BOOL)profileLoginItemsPostCompositePrefFile:(id)arg1 forKey:(id)arg2 withHomeURL:(id)arg3 userUID:(unsigned int)arg4;
+ (BOOL)loginItemsPostCompositePrefFile:(id)arg1 forKey:(id)arg2 withHomeURL:(id)arg3 withGroupVolURL:(id)arg4;

@end

