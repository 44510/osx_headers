//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol AUModelProtocol <NSObject>
- (NSArray *)errors;
- (BOOL)valid;
- (BOOL)saveData;
- (void)loadData;

@optional
- (void)loadDataFromDataSource:(id)arg1;
@end
