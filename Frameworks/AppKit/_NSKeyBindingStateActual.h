//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSKeyBindingManager, NSMutableArray, NSMutableString, NSSortedArray;

@interface _NSKeyBindingStateActual : NSObject
{
    NSKeyBindingManager *_currentInstance;
    NSSortedArray *_currentAtomArray;
    NSMutableString *_toInsert;
    long long _stateFlag;
    long long _repeatCount;
    NSMutableArray *_atomList;
}

@end

