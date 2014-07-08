//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (NSURLPromisedItems)
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id *)arg2;
- (BOOL)getPromisedItemResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (BOOL)checkPromisedItemIsReachableAndReturnError:(id *)arg1;
- (id)_fixedUpSideFaultError:(id)arg1;
- (id)_sideFaultURL;
- (void)_promiseExtensionRelease:(long long)arg1;
- (long long)_promiseExtensionConsume;
@end

